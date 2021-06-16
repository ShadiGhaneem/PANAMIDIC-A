#pragma once

#include "Player.hpp"

namespace pandemic
{

    class Researcher:public Player
    {

    public:
        Researcher(Board& BOR, City COL): Player(BOR, COL, "R"){}
     
        Player& discover_cure(Color COL) override;
    };
}