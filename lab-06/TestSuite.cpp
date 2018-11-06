/**
*	@author Benjamin Streit
*	@date
*	@file TestSuite.cpp
*	@brief Implementation file for test class
*/

#include <iostream>
#include <string>
#include <vector>
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
  test8();
  test9();
  test10();
  test11();
  test12();
  test13();
  test14();

  std::cout << "Tests complete.\n";
}

void TestSuite::test1() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size = test_list->size();
  if (size == 0) {
    result = "PASSED";
  }
  std::cout << "Test 1: Size of empty list is zero - " << result << "\n";
}

void TestSuite::test2() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  test_list->addFront(1);
  int size_post = test_list->size();
  if (size_post == (size_pre + 1)) {
    result = "PASSED";
  }
  std::cout << "Test 2: Size is correct after singular addFront - " << result << "\n";
}

void TestSuite::test3() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  test_list->addBack(1);
  int size_post = test_list->size();
  if (size_post == (size_pre + 1)) {
    result = "PASSED";
  }
  std::cout << "Test 3: Size is correct after singular addBack - " << result << "\n";
}

void TestSuite::test4() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  for (int i = 0; i < 100; i++) {
    test_list->addFront(i);
  }
  int size_post = test_list->size();
  if (size_post == (size_pre + 100)) {
    result = "PASSED";
  }
  std::cout << "Test 4: Size is correct after consecutive addFront - " << result << "\n";
}

void TestSuite::test5() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  for (int i = 0; i < 100; i++) {
    test_list->addBack(i);
  }
  int size_post = test_list->size();
  if (size_post == (size_pre + 100)) {
    result = "PASSED";
  }
  std::cout << "Test 5: Size is correct after consecutive addBack - " << result << "\n";
}

void TestSuite::test6() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  test_list->addFront(1);
  test_list->removeFront();
  int size_post = test_list->size();
  if (size_post == size_pre) {
    result = "PASSED";
  }
  std::cout << "Test 6: Size is correct after singular addFront and removeFront - " << result << "\n";
}

void TestSuite::test7() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  test_list->addBack(1);
  test_list->removeBack();
  int size_post = test_list->size();
  if (size_post == size_pre) {
    result = "PASSED";
  }
  std::cout << "Test 7: Size is correct after singular addBack and removeBack - " << result << "\n";
}

void TestSuite::test8() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  bool search_result = test_list->search(1);
  if (search_result == false) {
    result = "PASSED";
  }
  std::cout << "Test 8: Search is False on empty list - " << result << "\n";
}

void TestSuite::test9() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  test_list->addFront(2);
  bool search_result = test_list->search(1);
  if (search_result == false) {
    result = "PASSED";
  }
  std::cout << "Test 9: Search is False on empty search result - " << result << "\n";
}

void TestSuite::test10() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  for (int i = 0; i < 100; i++) {
    test_list->addFront(i);
  }
  bool search_result = test_list->search(50);
  if (search_result == true) {
    result = "PASSED";
  }
  std::cout << "Test 10: Search is True on non-empty search result over large list - " << result << "\n";
}

void TestSuite::test11() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  std::vector<int> list_vector = test_list->toVector();
  if (list_vector.empty() == true) {
    result = "PASSED";
  }
  std::cout << "Test 11: toVector is empty vector on empty list - " << result << "\n";
}

void TestSuite::test12() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  for (int i = 0; i < 100; i++) {
    test_list->addFront(i);
  }
  std::vector<int> list_vector = test_list->toVector();
  if (list_vector.empty() == false) {
    // LinkedListOfInts.h documentation for toVector states we may assume correct functionality
    result = "PASSED";
  }
  std::cout << "Test 12: toVector is creates vector containing contents of large list - " << result << "\n";
}

void TestSuite::test13() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  if (test_list->removeFront() == false) {
    result = "PASSED";
  }
  std::cout << "Test 13: removeFront on empty list is False - " << result << "\n";
}

void TestSuite::test14() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  if (test_list->removeBack() == false) {
    result = "PASSED";
  }
  std::cout << "Test 14: removeBack on empty list is False - " << result << "\n";
}
