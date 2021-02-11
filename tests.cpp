#include "catch.hpp"
#include "Vector3f.h"

TEST_CASE("Vectors are computed", "[vector]") {
    Vector3f a;
    Vector3f b;
    REQUIRE(a.x == 0);
    REQUIRE(a.y == 0);
    REQUIRE(a.z == 0);
    a.setFloat(1,2,3);
    b = a;
    REQUIRE(a.x==b.x);
    REQUIRE(a.y==b.y);
    REQUIRE(a.z==b.z);
    a.setFloat(2,2,3);
    REQUIRE(a.x != b.x);
};