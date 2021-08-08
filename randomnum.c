#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;

    FILE * fp;
    fp = fopen("data1.txt","w");
    
    printf("Random Integer Number: ");
    scanf("%d",&i);
    
    srand(time(0));

    for(int n = 0; n<i; n++ )
    {
        fprintf(fp, "%d \n", rand() %1000);
    }
    fclose(fp);
    return(0);
}



