//
// Created by rudri on 9/12/2020.
//

#include "catch.hpp"
#include "my_vector.h"

utec::my_vector<int> vec3a;
utec::my_vector<int> vec3b;
utec::my_vector<int> vec3c;

TEST_CASE("concatenar vectores") {
    vec3a = {1, 2, 3, 4, 5};
    vec3b = {6, 7, 8, 9, 10};
    vec3c = vec3a + vec3b;
    int total = 0;
    for (int i = 0; i < vec3c.size(); ++i)
        total += vec3c[i];
    REQUIRE(total == 55);
    REQUIRE(vec3c.size() == 10);
}