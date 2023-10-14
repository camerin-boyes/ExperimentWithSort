#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(int *array, int n) {
}

void selectionSort(int *array, int n) {
// Algo from https://en.wikipedia.org/wiki/Selection_sort [accessed 3rd October 2023]

  for (int ii=0; ii<(n-1); ii++) {
    int ix_min = ii;
    for (int jj=ii+1; jj<n; jj++) {
      if (array[jj] < array[ix_min]) ix_min = jj;
    } 

    if (ix_min != ii) {
      std::swap(array[ii], array[ix_min]); 
    }
  } 
}

void bubbleSort(int *array, int n) {
}

void mergeSort(int *array, int n) {
}
