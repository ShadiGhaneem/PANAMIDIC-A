#include "doctest.h"
#include <string>
#include <iostream>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"


using namespace std;
using namespace pandemic;


Board B;

OperationsExpert P1{B, Istanbul};
Dispatcher P2{B, Istanbul};
Scientist P3{B, Istanbul, 0};
Researcher P4{B, Istanbul};
Medic P5{B, Istanbul};
Virologist P6{B, Istanbul};
GeneSplicer P7{B, Istanbul};
FieldDoctor P8{B, Istanbul};





TEST_CASE("TEST drive")
{
            CHECK_NOTHROW(P1.drive(Cairo));
            CHECK_NOTHROW(P2.drive(Cairo));
            CHECK_NOTHROW(P3.drive(Cairo));
            CHECK_NOTHROW(P4.drive(Cairo));
            CHECK_NOTHROW(P5.drive(Cairo));
            CHECK_NOTHROW(P6.drive(Cairo));
            CHECK_NOTHROW(P7.drive(Cairo));
            CHECK_NOTHROW(P8.drive(Cairo));
            CHECK_NOTHROW(P1.drive(Cairo));
            CHECK_NOTHROW(P2.drive(Cairo));
            CHECK_NOTHROW(P3.drive(Cairo));
            CHECK_NOTHROW(P4.drive(Cairo));
            CHECK_NOTHROW(P5.drive(Cairo));
            CHECK_NOTHROW(P6.drive(Cairo));
            CHECK_NOTHROW(P7.drive(Cairo));
            CHECK_NOTHROW(P8.drive(Cairo));
            CHECK_THROWS(P1.drive(Cairo));
            CHECK_THROWS(P2.drive(Cairo));
            CHECK_THROWS(P3.drive(Cairo));
            CHECK_THROWS(P4.drive(Cairo));
            CHECK_THROWS(P5.drive(Cairo));
}
