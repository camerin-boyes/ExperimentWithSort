#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(int *array, int n) {
// Algo from https://en.wikipedia.org/wiki/Insertion_sort [accessed 3rd October 2023]

  unsigned int swap_count = 0; // if not counting swaps and comps, comment this line
  unsigned int comparison_count = 0; // if not counting swaps and comps, comment this line
  int ii, jj;

  ii = 1;
  while (ii < n) {

    jj = ii; 
    comparison_count++; // if not counting swaps and comps, comment this line
    while ((jj>0) && (array[jj-1] > array[jj])) {

      swap_count++; // if not counting swaps and comps, comment this line
      std::swap(array[jj],array[jj-1]);
      jj--;

      comparison_count++; // if not counting swaps and comps, comment this line
    }
    ii++;
  }
  cout << "Swaps: " << swap_count << endl; // if not counting swaps and comps, comment this line
  cout << "Comparisons: " << comparison_count << endl; // if not counting swaps and comps, comment this line
}

void selectionSort(int *array, int n) {
// Algo from https://en.wikipedia.org/wiki/Selection_sort [accessed 3rd October 2023]

  unsigned int swap_count = 0; // if not counting swaps and comps, comment this line
  unsigned int comparison_count = 0; // if not counting swaps and comps, comment this line

  for (int ii=0; ii<(n-1); ii++) {
    int ix_min = ii;
    for (int jj=ii+1; jj<n; jj++) {
      comparison_count++; // if not counting swaps and comps, comment this line
      if (array[jj] < array[ix_min]) ix_min = jj;
    } 

    if (ix_min != ii) {
      std::swap(array[ii], array[ix_min]); 
      swap_count++; // if not counting swaps and comps, comment this line
    }
  } 
  cout << "Swaps: " << swap_count << endl; // if not counting swaps and comps, comment this line
  cout << "Comparisons: " << comparison_count << endl; // if not counting swaps and comps, comment this line
}

void bubbleSort(int *array, int n) {
// Algo from https://en.wikipedia.org/wiki/Bubble_sort [accessed 3rd October 2023]

  bool flag_swapped = true;
  unsigned int swap_count = 0; // if not counting swaps and comps, comment this line
  unsigned int comparison_count = 0; // if not counting swaps and comps, comment this line

  while (flag_swapped) {
    flag_swapped = false;
    for (int ii=0; ii<(n-1); ii++) {
      comparison_count++; // if not counting swaps and comps, comment this line
      if (array[ii] > array[ii+1]) {
        std::swap(array[ii], array[ii+1]);
        swap_count++; // if not counting swaps and comps, comment this line
        flag_swapped = true;
      }
    }
  }
  cout << "Swaps: " << swap_count << endl; // if not counting swaps and comps, comment this line
  cout << "Comparisons: " << comparison_count << endl; // if not counting swaps and comps, comment this line
}
