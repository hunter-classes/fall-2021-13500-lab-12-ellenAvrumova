#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <vector>
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Part A") {
    std::vector<int> first = makeVector(8);
    for(int i = 0; i < first.size(); i++) {
        CHECK(first[i] == i);
    }
}