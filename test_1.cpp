//
// Created by rudri on 9/12/2020.
//

#include "catch.hpp"
#include "my_vector.h"

//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_vector.h"

utec::my_vector<char> vec1;

TEST_CASE("insert") {
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
    vec1.erase(vec1.size()-1);
    vec1.erase(vec1.size()-1);
    REQUIRE(vec1.size() == 4);
    vec1.insert(0, 50);
    REQUIRE(vec1.size() == 5);
}

TEST_CASE("Sum") {
    int total;
    for (int i = 0; i < vec1.size(); ++i)
        total += vec1[i];
    REQUIRE(total == 90);
}
