
#pragma once


#include "Player.hpp"

namespace pandemic
{

    class Medic : public Player

    {
        public:
            Medic(Board& BOR, City CI): Player(BOR, CI, "M"){}
     
            Player& treat(City CI) override;       
    };
}