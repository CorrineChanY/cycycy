#include "rank1.h"

void rankdown1(int *num, int n)
{
    int i, j, k;
    int tmp;
    for(i=0; i<n-1; i++){
        j=i;
        for(k=i+1; k<n; k++){
            if(num[k] > num[j])
                j=k;
        }
    }
    if(j != i){
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }
}