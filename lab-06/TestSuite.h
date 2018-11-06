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
    * @post Prints Pass/Fail: Size is correct after consecutive removeFront on large list
  */
  void test6();
  /**
    * @post Prints Pass/Fail: Size is correct after consecutive removeBack on large list
  */
  void test7();
  /**
    * @post Prints Pass/Fail: Size is correct after singular addFront and removeFront
  */
  void test8();
  /**
    * @post Prints Pass/Fail: Size is correct after singular addBack and removeBack
  */
  void test9();
  /**
    * @post Prints Pass/Fail: removeFront on empty list is False
  */
  void test10();
  /**
    * @post Prints Pass/Fail: removeBack on empty list is False
  */
  void test11();
  /**
    * @post Prints Pass/Fail: Search is False on empty list
  */
  void test12();
  /**
    * @post Prints Pass/Fail: Search is False on empty search result
  */
  void test13();
  /**
    * @post Prints Pass/Fail: Search is True on non-empty search result over large list
  */
  void test14();
  /**
    * @post Prints Pass/Fail: toVector is empty vector on empty list
  */
  void test15();
  /**
    * @post Prints Pass/Fail: toVector creates vector containing contents of large list
  */
  void test16();
  /**
    * @post Prints Pass/Fail: Order of list is preserved after removeFront on large list
  */
  void test17();
  /**
    * @post Prints Pass/Fail: Order of list is preserved after removeBack on large list
  */
  void test18();
private:
  LinkedListOfInts* test_list;
};

#endif
