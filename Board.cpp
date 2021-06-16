#include <map>
#include "Board.hpp"

using namespace std;
namespace pandemic
{
    bool Board::isConnect(City& C2 , City& C1){
        return false;
    }
    void Board::build_research_stations(City C){
    }
    bool Board::is_research_stations(City C){
        return false;
    }
    


    int& Board::operator[](City C)
    {
        return infection_level[C];

    }
    std::ostream &operator<<(std::ostream &os, const Board &BOR)
    {
        return os;
    }
    bool Board::is_clean(){
        return false;
    }
   
}