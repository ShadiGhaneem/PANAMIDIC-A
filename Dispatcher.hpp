#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

namespace pandemic
{
    class Dispatcher:public Player

    {
        public:
        Dispatcher(Board& BOR, City CI): Player(BOR, CI, "D"){}
        Player& fly_direct(City CI) override;
    };
}