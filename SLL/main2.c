#include <stdio.h>

void rankdown(int *num, int n);

int main()
{
    int num[5]={3, 9, 6, 2, 1};
    int i;
    rankdown(&num, 5);
    for(i=0; i<5; i++){
        printf("%d", num[i]);
    }
}