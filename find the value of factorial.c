#include<stdio.h>
void main()
{
    int num,i,f=1;

    printf("Enter the a num : ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        f=f*i;
    }
    printf("%d",f);
    getch();
}
