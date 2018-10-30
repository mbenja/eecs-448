/**
*	@author Benjamin Streit
*	@date
*	@file TestSuite.cpp
*	@brief Implementation file for test class
*/

#include "TestSuite.h"

void TestSuite::runTests() {
  test1();
}

bool TestSuite::test1() {
  int size = test_list.size();
  if (size == 0) {
    return true;
  } else {
    return false;
  }
}
