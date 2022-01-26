
#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>

#include <starter_project/mylib.h>

TEST_CASE("Testing library function print", "[lib]")
{
    REQUIRE(1 == 1);
}