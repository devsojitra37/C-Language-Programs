#include<math.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    float a,b,c,s,area;
    printf("enter the value of triangle");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of a triangle is : %f",area);
    getch();
}
