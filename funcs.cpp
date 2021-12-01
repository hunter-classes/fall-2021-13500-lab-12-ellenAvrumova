#include <iostream>
#include <vector>
#include "funcs.h"

std::vector<int> makeVector(int n) {
    std::vector<int> v;
    for(int i = 0; i < n; i++) {
        v.push_back(i);
    }
    return v;
}