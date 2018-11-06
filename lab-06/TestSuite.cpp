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
  std::cout << "Beginning tests...\n";
  test1();
  test2();
  test3();

  std::cout << "Tests complete.\n";
}

void TestSuite::test1() {
  std::string passed = "FAILED";
  int size = test_list.size();
  if (size == 0) {
    passed = "PASSED";
  }
  std::cout << "Test 1: Size of empty list is zero - " << passed << "\n";
}

void TestSuite::test2() {
  std::string passed = "FAILED";
  test_list.addFront(1);
  int size = test_list.size();
  if (size == 1) {
    passed = "PASSED";
  }
  test_list.removeFront();
  std::cout << "Test 2: Size is correct after singular addFront - " << passed << "\n";
}

void TestSuite::test3() {
  std::string passed = "FAILED";
  test_list.addBack(1);
  int size = test_list.size();
  if (size == 1) {
    passed = "PASSED";
  }
  test_list.removeBack();
  std::cout << "Test 2: Size is correct after singular addBack - " << passed << "\n";
}
