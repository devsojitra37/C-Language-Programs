#include <stdio.h>
int main()

{
    int CP, DLD, MATHS, ECDM, CS,total;
    printf("\n Marks in:\n\n");
    printf(" CP    = ");
    scanf("%d",&CP);
    printf(" DLD   = ");
    scanf("%d",&DLD);
    printf(" MATHS   = ");
    scanf("%d",&MATHS);
    printf(" ECDM   = ");
    scanf("%d",&ECDM);
    printf(" CS   = ");
    scanf("%d",&CS);
    total=CP+DLD+MATHS+ECDM+CS;
    if(CP<40 || DLD<40 || MATHS<40 || ECDM<40 || CS<40)
            printf("\n Result: FAIL");
    else
        printf("\n Result: PASS");
    printf("\n Percentage:%0.2f\n",total/5.0);
    printf("\n NOTE: Total for each subject is 100\n");
    return 0;
}
