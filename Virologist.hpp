#include "Player.hpp"
namespace pandemic
{

    class Virologist:public Player

    {
        public:
            Virologist(Board& BOR, City COL): Player(BOR, COL, "V"){}
            Player& treat(City c)override;    
    };
}