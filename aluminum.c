#include<stdio.h>
int main()
{
int hard,ts;
float cc, ox;

printf("Enter the Hardness, Tensile strength and Carbon content, Oxidation scale of aluminum\n");
scanf("%d%f%f%f" ,&hard ,&ts, &cc ,&ox);

if(hard>100&&cc<0.08&&ts>3300&&ox<1.0)
 printf("Grade A \n");

 else if(hard>100&&cc<0.08&&!(ts>3300)&&ox<1.0)
 printf("Grade B \n");

else if(!(hard>100)&&cc<0.08&&ts>3300&&ox<1.0)
 printf("Grade C \n");

 else if(hard>100&&!(cc<0.08)&&ts>3300&&ox<1.0)
 printf("Grade D \n");

 else if(hard>100&&cc<0.08&&ts>3300&&!(ox<1.0))
 printf("Grade E\n");

 else if(hard>100||cc<0.08||ts>3300||ox<1.0)
 printf("Grade F \n");

 else
   printf("Grade G\n");

 return 0;
}
