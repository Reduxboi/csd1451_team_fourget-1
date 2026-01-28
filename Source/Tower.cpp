#include "Tower.h"

void Tower::Init(float xPos, float yPos, float xSize, float ySize, Color c) {
    x = xPos;
    y = yPos;
    _sizeX = xSize;
    _sizeY = ySize;
    segments = 64;
    color = c;
    mesh = nullptr; // don't build here
}