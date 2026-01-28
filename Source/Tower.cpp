#include "Tower.h"

namespace TowerHandler {
    void Tower::Init(float xPos, float yPos, float xSize, float ySize, Color c, int seg_count) {
        x = xPos;
        y = yPos;
        _sizeX = xSize;
        _sizeY = ySize;
        segments = seg_count;
        color = c;
        mesh = nullptr; // don't build here
    }

    void Tower::Update(float dt) {

    }


    Tower* Tower::CreateTower(int row, int col, int tower_count) {
        Tower* newTower = new Tower;
        newTower->details = new TowerDetails[tower_count];


        return newTower;
    }

    void Tower::DestroyTower(Tower* tower) {
        if (!tower) return;
        delete[] tower->details;
        delete[] tower;
    }
}
