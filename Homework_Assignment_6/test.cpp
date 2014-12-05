//============================================================================
// Name        : HomeworkAssignment_06 -- test.cpp
// Author      : trygstjj
// Version     : 1.0
//============================================================================

#include <iostream>
#include "BinaryHeap.h"
using namespace std;
using namespace ods;

int main() {
	BinaryHeap<int> *binary_heap = new BinaryHeap<int>();

	cout << "Homework Assignment 06, Tester Program" << endl;
	cout << "Adding 20 random numbers to the tester Binary Heap..." << endl;
	for (int i = 0; i < 20; i ++) {
	  int random_number = rand();
	  binary_heap->add(random_number);
	}
	cout << "Removing these numbers in random order..." << endl;
	binary_heap->remove(3);
	binary_heap->remove(7);
	binary_heap->remove(10);
	binary_heap->remove(14);
	binary_heap->remove(15);


	BinaryHeap<int> *binary_heap_2 = new BinaryHeap<int>();
	for (int i = 1000; i < 2000; i++){
	  binary_heap_2->add(i);
	}
	int counter = 0;
	for (int i = 0; i < 1000; i++){
	  binary_heap_2->remove(i);
	if (binary_heap_2->checkHeap()) counter++;
	}
	cout << "After 1000 adds() and removes(), heap property maintained " << counter << " times" << endl;


	cout << "End of program..." << endl;
	delete binary_heap;
	return 0;
}
