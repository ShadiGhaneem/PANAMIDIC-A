
#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"


namespace pandemic
{

    class OperationsExpert: public Player

    {
        public:
        OperationsExpert(Board& BOR, City CI): Player(BOR, CI, "O"){}
        Player& build() override;
    };
}