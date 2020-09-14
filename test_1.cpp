//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_vector.h"
#include <iostream>
using namespace std;

TEST_CASE("insert") {
    utec::my_vector<char> vec1;
    vec1.insert(0, 10);
    vec1.insert(0, 20);
    vec1.insert(0, 10);
    REQUIRE(vec1.size() == 3);
    vec1.insert(0, 40);
    vec1.insert(0, 10);
    vec1.insert(0, 50);
    REQUIRE(vec1.size() == 6);
}

TEST_CASE("erase") {
    utec::my_vector<char> vec2;
    vec2.insert(0, 10);
    vec2.insert(0, 20);
    vec2.insert(0, 10);
    vec2.insert(0, 40);
    vec2.insert(0, 10);
    vec2.insert(0, 50);
    vec2.erase(vec2.size()-1);
    vec2.erase(vec2.size()-1);
    REQUIRE(vec2.size() == 4);
    vec2.insert(0, 50);
    REQUIRE(vec2.size() == 5);
}

TEST_CASE("sum erase") {
    utec::my_vector<char> vec2;
    vec2.insert(0, 10);
    vec2.insert(0, 20);
    vec2.insert(0, 10);
    vec2.insert(0, 40);
    vec2.insert(0, 10);
    vec2.insert(0, 50);
    vec2.erase(vec2.size()-1);
    vec2.erase(vec2.size()-1);
    vec2.insert(0, 50);
    int total = 0;
    for (size_t i = 0; i < vec2.size(); ++i)
        total += vec2[i];
    REQUIRE(total == 160);
}
