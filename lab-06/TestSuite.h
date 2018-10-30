/**
*	@author Benjamin Streit
*	@date
*	@file TestSuite.h
*	@brief Header file for test class
*/

#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include <iostream>
#include "LinkedListOfInts.h"

class TestSuite {
public:
  /**
    * @pre None.
    * @post All tests have been run.
  */
  void runTests();
  /**
    * @returns Pass/Fail: Size of empty list is zero
  */
  bool test1();
private:
  LinkedListOfInts test_list;
};

#endif
