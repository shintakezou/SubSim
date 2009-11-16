//------------------------------------------------------------------------------
// File: Sub.h
// Desc: The submarine entity
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
#ifndef SUB_H
#define SUB_H

//------------------------------------------------------------------------------
#include "Entity.h"

//------------------------------------------------------------------------------
class Sub : public Entity
{
    //--------------------------------------------------------------------------
    public: Sub();
    public: ~Sub();

    //--------------------------------------------------------------------------
    public: bool Init( irr::scene::ISceneManager* pSceneManager );
    public: void DeInit();

    //--------------------------------------------------------------------------
    // Members
    private: bool mbInitialised;
    private: irr::scene::IMesh* mpConeMesh;
    private: irr::scene::IMesh* mpBodyMesh;
    private: irr::scene::IMeshSceneNode* mpConeMeshNode;
    private: irr::scene::IMeshSceneNode* mpBodyMeshNode;
};

#endif // SUB_H
