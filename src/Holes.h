#pragma once

#include "Hole.h"

Hole Holes[] = 
{
    Hole({20, 30, 40}, 0),
    Hole({120, 130, 140}, 2),
};

const byte NumHoles = sizeof(Holes) / sizeof(Hole);
