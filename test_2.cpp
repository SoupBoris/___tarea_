//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_vector.h"

TEST_CASE("push_back") {
    utec::my_vector<double> vec2;
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
    utec::my_vector<double> vec2;
    vec2.push_back(40);
    vec2.push_back(10);
    vec2.push_back(50);
    vec2.push_back(40);
    vec2.push_back(10);
    vec2.pop_back();
    vec2.push_back(50);
    vec2.pop_back();
    REQUIRE(vec2.size() == 4);
    vec2.push_back(10);
    REQUIRE(vec2.size() == 5);
}

TEST_CASE("sum pop_back") {
    utec::my_vector<double> vec2;
    vec2.push_back(40);
    vec2.push_back(10);
    vec2.push_back(50);
    vec2.push_back(40);
    vec2.push_back(10);
    vec2.pop_back();
    vec2.push_back(50);
    vec2.pop_back();
    vec2.push_back(10);
    double total = 0;
    for (size_t i = 0; i < vec2.size(); ++i)
        total += vec2[i];
    REQUIRE(total == 150);
}
