#pragma once
#include "AEEngine.h"
#include "GameObject.h"

// Declare functions you want to use

struct ProjectileType : public GameObject
{
    AEGfxTexture* sprite;
    float damage;
    
};

struct Tower : public GameObject
{
    void Init(float startX, float startY, float sizeX, float sizeY, Color c);
    void Update(float dt);
};
