#include<stdio.h>
int main()
{
    int i,N;
    unsigned long sum;

    printf("Enter the value of N: ");
    scanf("%d",&N);

    sum=0;

    for(i=1;i<=N;i++)
    sum= sum+ (i*i*i);

    printf("Sum of the series is: %d\n",sum);

    return 0;
}

