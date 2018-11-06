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
    * @post Prints Pass/Fail: Size of empty list is zero
  */
  void test1();
  /**
    * @post Prints Pass/Fail: Size is correct after singular addFront
  */
  void test2();
  /**
    * @post Prints Pass/Fail: Size is correct after singular addBack
  */
  void test3();
  /**
    * @post Prints Pass/Fail: Size is correct after consecutive addFront
  */
  void test4();
  /**
    * @post Prints Pass/Fail: Size is correct after consecutive addBack
  */
  void test5();
  /**
    * @post Prints Pass/Fail: Size is correct after singular addFront and removeFront
  */
  void test6();
private:
  LinkedListOfInts test_list;
};

#endif
