#include <iostream>
#include <ctime> // needed for srand(time(nullptr))

#define MAX_N 1000001 // we'll never sort more than this many random numbers
#define MAX_RN 1000 // random numbers between 0 and MAX_RN

using namespace std;

// forward declaration of functions implemented in sorts.cpp
void insertionSort(int *, int); 
void selectionSort(int *, int); 
void bubbleSort(int *, int); 
void mergeSort(int *, int); 

int main(int argc, char *argv[]) {
  cout << "HI" << endl;
  if (argc < 2) return 0; // too few command line arguments

  int num_int = stoi(argv[1]);
  int my_array[MAX_N];

// generate random numbers, store in my_array
  srand(time(nullptr));
  for (int ii=0; ii<num_int; ii++)
    my_array[ii] = rand() % MAX_RN;

// if we're working with only a few numbers, print to console
  if (num_int < 12) {
    cout << "input data: ";
    for (int ii=0; ii<num_int; ii++) cout << my_array[ii] << " ";
    cout << endl;
  }

  // selectionSort(my_array, num_int); cout << "Selection sort!" << endl;
  insertionSort(my_array, num_int); cout << "Insertion sort!" << endl;

// if we're working with only a few numbers, print to console after sorting
  if (num_int < 12) {
    cout << "sorted data: ";
    for (int ii=0; ii<num_int; ii++) cout << my_array[ii] << " ";
    cout << endl;
  }

  return 0;
}
