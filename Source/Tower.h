#pragma once
#include "AEEngine.h"
#include "GameObject.h"

// Declare functions you want to use

namespace TowerHandler {
    struct ProjectileType
    {
        AEGfxTexture* sprite;
        float damage, speed;

    };

    struct TowerDetails {
        int level, ID;
        ProjectileType projectile;
    };

    struct Tower : public GameObject
    {
        int tower_count; //amount of towers
        TowerDetails* details; //dynamic array of tower details

        void Init(float startX, float startY, float sizeX, float sizeY, Color c, int segcount = 30);
        void Update(float dt);
        Tower* CreateTower(int row, int col, int towerCount);
        void DestroyTower(Tower* tower);
    };

    
    
    
}


