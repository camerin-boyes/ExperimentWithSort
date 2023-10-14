#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(int *array, int n) {
 int i = 1;
 int j = 1;
 while (i != n) {
  while (array[j-1] > array[j]) {
    swap(array[j-1], array[j]);
    j--;
  }
  i++;
  j = i;
 }

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
  int i = n;
  int has_swapped = 1;
  while (has_swapped > 0) {
    has_swapped = 0;
    for (int j = 0; j < i-1; j++) {
      if (array[j] > array[j+1]) {
        std::swap(array[j+1],array[j]);
        has_swapped++;
      }
    }
    i--;
  }
}

void mergeSort(int *array, int n) {
  int mid = n/2;
  if (mid == 0) return;

  //mergeSort(a,mid); 
  //mergeSort(array[],)
}
