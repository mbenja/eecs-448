/**
*	@author Benjamin Streit
*	@date
*	@file TestSuite.cpp
*	@brief Implementation file for test class
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "TestSuite.h"

void TestSuite::runTests() {
  std::cout << "Beginning tests...\n";

  m_results += "--------------------------------------------------\n";

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
  test15();
  test16();
  test17();
  test18();

  m_results += std::to_string(m_num_passed);
  m_results += " out of ";
  m_results += std::to_string(m_num_tests);
  m_results += " tests passed.\n";
  m_results += std::to_string((double(m_num_passed) / m_num_tests) * 100);
  m_results += "% green, ";
  m_results += std::to_string(100 - ((double(m_num_passed) / m_num_tests) * 100));
  m_results += "% red.\n";

  std::ofstream output_file;
  output_file.open("test-results.txt");
  output_file << m_results;
  output_file.close();

  std::cout << "Tests complete. See test-results.txt for results.\n";
}

void TestSuite::test1() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size = test_list->size();
  if (size == 0) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 1\n";
  m_results += "Description: Size of empty list is zero\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test2() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  test_list->addFront(1);
  int size_post = test_list->size();
  if (size_post == (size_pre + 1)) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 2\n";
  m_results += "Description: Size is correct after singular addFront\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test3() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  test_list->addBack(1);
  int size_post = test_list->size();
  if (size_post == (size_pre + 1)) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 3\n";
  m_results += "Description: Size is correct after singular addBack\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
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
    m_num_passed++;
  }
  m_results += "Test: 4\n";
  m_results += "Description: Size is correct after consecutive addFront\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
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
    m_num_passed++;
  }
  m_results += "Test: 5\n";
  m_results += "Description: Size is correct after consecutive addBack\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test6() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  if (!test_list->isEmpty()) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 6\n";
  m_results += "Description: isEmpty is False on empty list\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test7() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  for (int i = 0; i < 100; i++) {
    test_list->addFront(i);
  }
  if (test_list->isEmpty()) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 7\n";
  m_results += "Description: isEmpty is True on non-empty list\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test8() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  test_list->addFront(1);
  test_list->removeFront();
  int size_post = test_list->size();
  if (size_post == size_pre) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 8\n";
  m_results += "Description: Size is correct after singular addFront and removeFront\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test9() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  test_list->addBack(1);
  test_list->removeBack();
  int size_post = test_list->size();
  if (size_post == size_pre) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 9\n";
  m_results += "Description: Size is correct after singular addBack and removeBack\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test10() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  for (int i = 0; i < 100; i++) {
    test_list->addFront(i);
  }
  for (int i = 0; i < 100; i++) {
    test_list->removeFront();
  }
  int size_post = test_list->size();
  if (size_post == size_pre) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 10\n";
  m_results += "Description: Size is correct after consecutive removeFront on non-empty list\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test11() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  int size_pre = test_list->size();
  for (int i = 0; i < 100; i++) {
    test_list->addBack(i);
  }
  for (int i = 0; i < 100; i++) {
    test_list->removeBack();
  }
  int size_post = test_list->size();
  if (size_post == size_pre) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 11\n";
  m_results += "Description: Size is correct after consecutive removeBack on non-empty list\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test12() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  bool search_result = test_list->search(1);
  if (search_result == false) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 12\n";
  m_results += "Description: Search is False on empty list\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test13() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  test_list->addFront(2);
  bool search_result = test_list->search(1);
  if (search_result == false) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 13\n";
  m_results += "Description: Search is False on empty search result\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test14() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  if (test_list->removeFront() == false) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 14\n";
  m_results += "Description: removeFront on empty list is False\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test15() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  if (test_list->removeBack() == false) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 15\n";
  m_results += "Description: removeBack on empty list is False\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test16() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  for (int i = 0; i < 100; i++) {
    test_list->addFront(i);
  }
  bool search_result = test_list->search(50);
  if (search_result == true) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 16\n";
  m_results += "Description: Search is True on non-empty search result over large list\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test17() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  std::vector<int> list_vector = test_list->toVector();
  if (list_vector.empty() == true) {
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 17\n";
  m_results += "Description: toVector is empty vector on empty list\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}

void TestSuite::test18() {
  test_list = new LinkedListOfInts();
  std::string result = "FAILED";
  for (int i = 0; i < 100; i++) {
    test_list->addFront(i);
  }
  std::vector<int> list_vector = test_list->toVector();
  if (list_vector.empty() == false) {
    // LinkedListOfInts.h documentation for toVector states we may assume correct functionality
    result = "PASSED";
    m_num_passed++;
  }
  m_results += "Test: 18\n";
  m_results += "Description: toVector creates vector containing contents of large list\n";
  m_results += ("Result: " + result + "\n");
  m_results += "--------------------------------------------------\n";
}
