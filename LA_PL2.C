#include <stdio.h>

int main()
{
    int rollnum;
    float per;
    char grade;

    printf(“\n Enter student Roll Number ; “);
    scanf (“%d”,& rollnum);
    printf(“\n Enter student percentage : “);
    scanf (“%f”,& per);
    printf(“\n Enter student Grade:”);
    scanf (“%C”,& grade);
    
    printf (“\n student information \n”);
    printf (“\n Roll Number is :%d”,rollnum);
    printf (“\n percentage is :%f “, per);
    printf (“\n Grade : (%c”,grade);

        return 0;
}
