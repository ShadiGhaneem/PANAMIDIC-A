#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"

namespace pandemic
{

    class Player
    {
        protected:
            Board& board;
            std::set<City> CARDS;
            City city;
            std::string ROLE;

        public:

        Player(Board& B, City CIT, std::string R):board(B), city(CIT), ROLE(R){}

        Player& drive(City CIT);
        virtual Player& fly_direct(City CIT);
        Player& fly_charter(City CIT);
        Player& fly_shuttle(City CIT);
        virtual Player& build();
        virtual Player& discover_cure(Color CIT);
        virtual Player& treat(City CIT);
        Player& take_card(City CIT);
        std::string role(){return ROLE;};
    };
}