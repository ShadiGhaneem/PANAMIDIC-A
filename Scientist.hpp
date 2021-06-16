#pragma once

#include "Player.hpp"
namespace pandemic
{

    class Scientist:public Player
    {
        int NUM;

    public:
        Scientist(Board& BOR, City COL, int NUM): Player(BOR, COL, "S"), NUM(NUM) {}
    
        Player& discover_cure(Color COL)override;
    };
}