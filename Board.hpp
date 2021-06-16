#pragma once
#include <iostream>
#include <ostream>
#include <string>
#include "City.hpp"
#include "Color.hpp"
#include <map>
#include <set>

using namespace std;

namespace pandemic
{

    class Board
    {
        std::map<City, int> infection_level;

        public:
            Board(){}    
            int& operator[](City CI);
            friend std::ostream &operator<<(std::ostream &os, const Board &BOR);
            bool is_clean();
            void remove_cures(){};
            bool isConnect(City& C1 , City& C2);
            void build_research_stations(City C);
            bool is_research_stations(City C);





    };
}