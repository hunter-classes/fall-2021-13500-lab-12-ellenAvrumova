#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <vector>
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Part A") {
    std::vector<int> first = makeVector(8);
    for(int i = 0; i < first.size(); i++) {
        CHECK(first[i] == i);
    }
    std::vector<int> second = makeVector(13);
    for(int i = 0; i < second.size(); i++) {
        CHECK(second[i] == i);
    }
}

TEST_CASE("Part B") {
    std::vector<int> v1{-1, 3, -8, 9, 8, 0, -2, -4, 1};
    std::vector<int> pos1 = goodVibes(v1);
    std::vector<int> correctPos1{3, 9, 8, 0, 1};
    CHECK(pos1 == correctPos1);

    std::vector<int> v2{8, 9, 2, 3, 10, 11};
    std::vector<int> pos2 = goodVibes(v2);
    CHECK(pos2 == v2);

    std::vector<int> v3{-8, -9, -2, -3, -10, -11};
    std::vector<int> pos3 = goodVibes(v3);
    std::vector<int> correctPos3{};
    CHECK(pos3 == correctPos3);
}

TEST_CASE("Part C") {
    std::vector<int> first{3, 5, 10, 9, 7};
    std::vector<int> second{8, 3, 5, 0, 1};
    gogeta(first, second);
    std::vector<int> correct{3, 5, 10, 9, 7, 8, 3, 5, 0, 1};
    std::vector<int> empty{};
    for(int i = 0; i < first.size(); i++) {
        CHECK(first[i] == correct[i]);
    }
    CHECK(second == empty);

    std::vector<int> third{};
    std::vector<int> fourth{5, 2, 11, 10, 4, 8, 13};
    std::vector<int> saved{};
    saved = fourth;
    gogeta(third, fourth);
    CHECK(third == saved);
    CHECK(fourth == empty);
}