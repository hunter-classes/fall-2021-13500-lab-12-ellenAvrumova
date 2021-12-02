#include <iostream>
#include <vector>
#include "funcs.h"

int main() {
    std::cout << "*****PART A*****" << std::endl;
    std::vector<int> first = makeVector(5);
    std::vector<int> second = makeVector(10);
    std::cout << "[";
    for(int i = 0; i < first.size(); i++) {
        if(i == first.size() - 1) {
            std::cout << first[i];
        }
        else {
            std::cout << first[i] << ","; //returns [0,1,2,3,4]
        }
    }
    std::cout << "]";
    std::cout << std::endl;
    std::cout << "[";
    for(int i = 0; i < second.size(); i++) {
        if(i == second.size() - 1) {
            std::cout << second[i];
        }
        else {
            std::cout << second[i] << ","; //returns [0,1,2,3,4,5,6,7,8,9]
        }
    }
    std::cout << "]" << std::endl;
    std::cout << std::endl;

    std::cout << "*****PART B*****" << std::endl;
    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::vector<int> positive = goodVibes(v);
    std::cout << "[";
    for(int i = 0; i < positive.size(); i++) {
        if(i == positive.size() - 1) {
            std::cout << positive[i];
        }
        else {
            std::cout << positive[i] << ","; //returns [1,2,3,4,6]
        }
    }
    std::cout << "]" << std::endl;
    std::cout << std::endl;

    std::cout << "*****PART C*****" << std::endl;
    std::vector<int> third{1,2,3};
    std::vector<int> fourth{4,5};
    gogeta(third, fourth); //third is now [1,2,3,4,5] and fourth is empty.
    std::cout << "[";
    for(int i = 0; i < third.size(); i++) {
        if(i == third.size() - 1) {
            std::cout << third[i];
        }
        else {
            std::cout << third[i] << ","; //returns [1,2,3,4,5]
        }
    }
    std::cout << "]" << std::endl;

    std::cout << "[";
    for(int i = 0; i < fourth.size(); i++) {
        std::cout << fourth[i] << std::endl; //doesn't return anything
    }
    std::cout << "]" << std::endl;
    std::cout << std::endl;

    std::cout << "*****PART D*****" << std::endl;
    std::vector<int> fifth{1,2,3};
    std::vector<int> sixth{4,5};
    std::vector<int> sum = sumPairWise(fifth, sixth);
    std::cout << "[";
    for(int i = 0; i < sum.size(); i++) {
        if(i == sum.size() - 1) {
            std::cout << sum[i];
        }
        else {
            std::cout << sum[i] << ","; // returns [5, 7, 3]
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}