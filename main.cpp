#include <iostream>
#include <vector>
#include "funcs.h"

int main() {
    std::vector<int> first = makeVector(5);
    std::vector<int> second = makeVector(10);
    for(int i = 0; i < first.size(); i++) {
        std::cout << first[i] << std::endl;
    }
    std::cout << std::endl;
    for(int i = 0; i < second.size(); i++) {
        std::cout << second[i] << std::endl;
    }

    return 0;
}