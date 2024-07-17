#include<stdio.h>
int main()
{
int i,j,m,n;
int matrix[2] [2];

printf("Enter number of rows:");
scanf("%d",&m);
printf("Enter number of columns:");
scanf("%d",&n);

for(i=0; i<2; i++)
{
for(j=0; j<2; j++)
{
printf("Enter data in[%d][%d]:",i,j);
scanf("%d", &matrix[i][j]);

}
}

for(i=0; i<2; i++)
{
    for(j=0; j<2; j++)
{
    printf("%d\t", matrix[i] [j]);
}

printf("\n");


}
return 0;
}
