#pragma once

#include "Player.hpp"
namespace pandemic
{

    class FieldDoctor:public Player
    {
        public:
        FieldDoctor(Board& BOR, City COL): Player(BOR, COL, "FD"){}
   
Player& treat(City CI) override;
        };
}