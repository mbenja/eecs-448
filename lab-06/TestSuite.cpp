/**
*	@author Benjamin Streit
*	@date
*	@file TestSuite.cpp
*	@brief Implementation file for test class
*/

#include <iostream>
#include <string>
#include "TestSuite.h"

void TestSuite::runTests() {
  test1();
}

void TestSuite::test1() {
  std::string passed = "FAILED";
  int size = test_list.size();
  if (size == 0) {
    passed = "PASSED";
  }
  std::cout << "Test 1: Size of empty list is zero - " << passed << "\n";
}
