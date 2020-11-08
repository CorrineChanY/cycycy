#include <stdio.h>

void rankdown2(int *num, int n);

int main()
{
    int num[5]={3, 8, 5, 1, 0};
    int i;
    rankdown1(num, 5);
    for(i=0; i<5; i++){
        printf("%d\t", num[i]);
    }
    printf("\n");

    return 0;
}