#pragma once

#include "Hole.h"
#include "Holes.h"

class Board
{
private:
    Hole *holes;

public:
    Board(Hole *holes) : holes(holes)
    {
    }

    Hole& GetHoleForSensor(byte sensor)
    {
        for (byte i = 0; i < NumHoles; i++)
        {
            if (holes[i].IsForSensor(sensor))
            {
                return holes[i];
            }
        }
        return holes[0];
            
    }
};


Board MainBoard = Board(Holes);