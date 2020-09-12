//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_vector.h"

utec::my_vector<double> vec2;

TEST_CASE("push_back") {
    vec2.push_back(10);
    vec2.push_back(20);
    vec2.push_back(10);
    REQUIRE(vec2.size() == 3);
    vec2.push_back(40);
    vec2.push_back(10);
    vec2.push_back(50);
    REQUIRE(vec2.size() == 6);
}

TEST_CASE("pop_back") {
    vec2.pop_back();
    vec2.pop_back();
    REQUIRE(vec2.size() == 4);
    vec2.push_back(10);
    REQUIRE(vec2.size() == 5);
}

TEST_CASE("Sum") {
    int total;
    for (int i = 0; i < vec2.size(); ++i)
        total += vec2[i];
    REQUIRE(total == 90);
}
