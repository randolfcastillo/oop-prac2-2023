// EquivalenceTests.h
#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testZeroes();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }
    void testZeroes(){
        Addition addition;
        if (addition.add(0,0)!=0){
            std::cout << "Test 3 failed!" << std :: endl;
        }
        else{
            std::cout <<"Test 3 passed!"<< std :: endl;
        }
    }
    // Add other test functions here
};

#endif
