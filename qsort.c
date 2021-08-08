#include <stdio.h>


void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


int ptt(int array[], int l, int h) {
  
  int pivot = array[h];
  
  int i = (l - 1);

  for (int j = l; j < h; j++) {
    if (array[j] <= pivot) {
        
      i++;
      
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[h]);
   
  return (i + 1);
}

void quickSort(int array[], int l, int h) {
  if (l < h) {
    
    int pi = ptt(array, l, h);
    
    quickSort(array, l, pi - 1);
    
    quickSort(array, pi + 1, h);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
