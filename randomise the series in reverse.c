#include<stdio.h>
#include<conio.h>
void main()
{
    int j,i=10;

    printf("Enter number: ");
    scanf("%d",&j);
    for(i=10;i>=j;i--,j++)
    {
        printf(" %d %d",i,j);

    }
    getch();
}
