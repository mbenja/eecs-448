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
  test4();
  test5();
  test6();
  test7();

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
  int size_pre = test_list.size();
  test_list.addFront(1);
  int size_post = test_list.size();
  if (size_post == (size_pre + 1)) {
    passed = "PASSED";
  }
  std::cout << "Test 2: Size is correct after singular addFront - " << passed << "\n";
}

void TestSuite::test3() {
  std::string passed = "FAILED";
  int size_pre = test_list.size();
  test_list.addBack(1);
  int size_post = test_list.size();
  if (size_post == (size_pre + 1)) {
    passed = "PASSED";
  }
  test_list.removeBack();
  std::cout << "Test 3: Size is correct after singular addBack - " << passed << "\n";
}

void TestSuite::test4() {
  std::string passed = "FAILED";
  int size_pre = test_list.size();
  for (int i = 0; i < 100; i++) {
    test_list.addFront(i);
  }
  int size_post = test_list.size();
  if (size_post == (size_pre + 100)) {
    passed = "PASSED";
  }
  std::cout << "Test 4: Size is correct after consecutive addFront - " << passed << "\n";
}

void TestSuite::test5() {
  std::string passed = "FAILED";
  int size_pre = test_list.size();
  for (int i = 0; i < 100; i++) {
    test_list.addBack(i);
  }
  int size_post = test_list.size();
  if (size_post == (size_pre + 100)) {
    passed = "PASSED";
  }
  std::cout << "Test 5: Size is correct after consecutive addBack - " << passed << "\n";
}

void TestSuite::test6() {
  std::string passed = "FAILED";
  int size_pre = test_list.size();
  test_list.addFront(1);
  test_list.removeFront();
  int size_post = test_list.size();
  if (size_post == size_pre) {
    passed = "PASSED";
  }
  std::cout << "Test 6: Size is correct after singular addFront and removeFront - " << passed << "\n";
}

void TestSuite::test7() {
  std::string passed = "FAILED";
  int size_pre = test_list.size();
  test_list.addBack(1);
  test_list.removeBack();
  int size_post = test_list.size();
  if (size_post == size_pre) {
    passed = "PASSED";
  }
  std::cout << "Test 7: Size is correct after singular addBack and removeBack - " << passed << "\n";
}
