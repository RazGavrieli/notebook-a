// CREATE TEST CLASS
#include "doctest.h"
#include "Notebook.hpp"
using namespace ariel;

#include <string>

TEST_CASE("Bad input") {
        SUBCASE("Out of bounds") {
            CHECK_THROWS(/*READ MORE THAN 100 CHARS*/);
            CHECK_THROWS(/*READ FROM THE 60TH CHAR MORE THAN 40 CHARS*/);
        }

}