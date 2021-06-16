#pragma once

#include "Player.hpp"
namespace pandemic
{

    class GeneSplicer:public Player

    {
    public:
        GeneSplicer(Board& BOR, City CI): Player(BOR, CI, "G"){}
     
        Player& discover_cure(Color CI) override ;
    };
}