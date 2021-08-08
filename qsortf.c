#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "qsort.c"


int main()
{
    FILE *fp, *qs;
    char num[5];
    int count = 0;

    fp  = fopen ("data.txt", "r");
    

    while (!feof(fp)){
        fscanf(fp, "%s", &num);
        count++ ;
    }
    fclose(fp);

    int arr[count],a=0;
    fp  = fopen ("data.txt", "r");

    while (!feof(fp)){
        fscanf(fp, "%s", &num);
        arr[a] = atoi(num);
        a++ ;
    }

quickSort(arr, 0, count-1);

    qs = fopen("data_sorted.txt", "w");
    for(int i=0; i < count-1; i++){
          fprintf(qs, "%d\n", arr[i]);
    }
    
    fclose(fp);
    fclose(qs);
    return(0);
    
}



