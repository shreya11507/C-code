#include<stdio.h>
int main()
{
    int score[10];
    int i;
    printf("Enter elements of array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&score[i]);
    }
    for(i=0;i<10;i++)
    {
    printf("%d\t",score[i]);
    }
    return 0;
}
