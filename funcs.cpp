/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 12
 * This is file contains all the functions used in lab 12.
 * The functions are called makeVector, goodVibes, gogeta, and sumPairWise
*/

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

std::vector<int> goodVibes(const std::vector<int> &v) {
    std::vector<int> positive;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] >= 0) {
            positive.push_back(v[i]);
        }
    }
    return positive;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
    for(int i = 0; i < vegeta.size(); i++) {
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
    std::vector<int> sum;
    if(v1.size() > v2.size()) {
        for(int i = 0; i < v2.size(); i++) {
            sum.push_back(v1[i] + v2[i]);
        }
        for(int j = v2.size(); j < v1.size(); j++) {
            sum.push_back(v1[j]);
        }
    }
    else {
        for(int i = 0; i < v1.size(); i++) {
            sum.push_back(v1[i] + v2[i]);
        }
        for(int j = v1.size(); j < v2.size(); j++) {
            sum.push_back(v2[j]);
        }
    }
    return sum;
}