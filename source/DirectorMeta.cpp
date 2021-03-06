#include <DirectorMeta.h>

DirectorMeta::DirectorMeta()
{

}

DirectorMeta::~DirectorMeta()
{

}

bool DirectorMeta::operator==( string path )
{
    return this->path_ == path;
}

bool DirectorMeta::operator==( sptr<DirectorMeta> meta )
{
    return meta->full_path_ == this->full_path_;
}

sptr<DirectorMeta> DirectorMeta::FindDirector( sptr<Path> path )
{
    auto plist         = path->PathList();

    if ( plist.size() == 0 )
    {
        return nullptr;
    }

    auto pDirectorMeta = this->find_dir( *plist.begin() );
    plist.erase( plist.begin() );

    for ( auto p : plist )
    { 
        auto child = pDirectorMeta->find_dir_children( p );
        if ( child == nullptr )
        {
            return nullptr;
        }

        pDirectorMeta = child;
    }

    return sptr<DirectorMeta>( pDirectorMeta );
}

sptr<FileMeta> DirectorMeta::FindFile( sptr<Path> path )
{
    auto dir = FindDirector( path );

    if ( dir != nullptr )
    {
        for ( auto f : dir->file_list_ )
        {
            if ( f->Name() == path->FileName() )
            {
                return sptr<FileMeta>( f );
            }
        }
    }

    return nullptr;
}

bool DirectorMeta::AddFile( sptr<FileMeta> file )
{
    auto dir = this->FindDirector( file->FilePath() );
 
    if ( dir == nullptr )
    {
        dir = this->MakeDirector( file->FilePath() );
    }

    dir->file_list_.push_back( move_ptr( file ) );
    return true;
}

sptr<DirectorMeta> DirectorMeta::MakeDirector( sptr<Path> path )
{
    auto sthis = this->shared_from_this();

    for ( auto & p : path->PathList() )
    {
        auto t = sthis->find_dir( p );
        if ( t == nullptr )
        {
            sptr<DirectorMeta> dir = make_sptr( DirectorMeta );
            dir->path_ = dir->full_path_ = p;
            sthis->children_dir_list_.push_back( dir );
            sthis = dir;
        }

    }

    return sthis;
}

bool DirectorMeta::ExistFile( sptr<Path> path )
{
    return this->FindFile( path ) != nullptr;
}

bool DirectorMeta::DeleteFile( sptr<FileMeta> file )
{
    bool result = false;
    auto f = this->FindDirector( file->FilePath() );

    if ( f == nullptr )
    {
        return result;
    }

    for ( auto itr = f->file_list_.begin(); itr != f->file_list_.end(); itr++ )
    {
        if ( *itr == file )
        {
            f->file_list_.erase( itr );
            result = true;
            break;
        }
    }
     
    return result;
}

vector<sptr<DirectorMeta>> DirectorMeta::ChildrenDir( )
{
    return this->children_dir_list_;
}

vector<sptr<FileMeta>> DirectorMeta::Files( )
{
    return this->file_list_;
}

sptr<DirectorMeta> DirectorMeta::find_dir( string name )
{
    if ( this->path_ == name )
        return this->shared_from_this();

    for ( auto d : this->children_dir_list_ )
    {
        if ( d->path_ == name )
        {
            return d;
        }
    }

    return nullptr;
}

sptr<DirectorMeta> DirectorMeta::find_dir_children( string name )
{
    for ( auto d : this->children_dir_list_ )
    {
        if ( d->path_ == name )
        {
            return d;
        }
    }
    
    return nullptr;
}
