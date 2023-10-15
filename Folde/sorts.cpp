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
  merge(array, 0, n-1);

}

void merge(int *array, int left, int right) {
    int mid = right/2;
    int array_indexer = left;
    int L_array_position = left;
    int R_array_position = mid + 1;
        int *array_duplicate = array;
  if (left < right) {
    merge(array, left, right/2); 
    merge(array, right/2+1, right);


    while ((L_array_position <= mid) && (R_array_position <= right)) {
      if (array_duplicate[L_array_position] < array_duplicate[R_array_position]) {
        array[array_indexer] = array_duplicate[L_array_position];
        L_array_position++;
      } else {
        array[array_indexer] = array_duplicate[R_array_position];
        R_array_position++;
      }

      array_indexer++;
    }
    while (L_array_position <= mid) {
      array[array_indexer] = array_duplicate[L_array_position];
      L_array_position++;
      array_indexer++;
    }
    while (R_array_position <= right) { 
      array[array_indexer] = array_duplicate[R_array_position];
      R_array_position++;
      array_indexer++;
    }

  }

}