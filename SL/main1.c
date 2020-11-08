#include <stdio.h>
#include "rank1.h"

int main()
{
    int num[5]={3, 9, 6, 2, 1};
    int i;
    rankdown1(num, 5);
    for(i=0; i<5; i++){
        printf("%d\t", num[i]);
    }
    printf("\n");

    return 0;
}