#include <stdio.h>

int main() {
  int a,b,temp;

  printf(“\n Enter First number :”);
  scanf(“%d”,&a);
  temp = a ;
  printf (“\n Enter Second number:”);
  scanf (“%d”,&b);

  a=b ;
  b = temp ;
  printf (“\n After swapping : \n”);
  printf (“\n Frist number = %d \n”,a);
  printf (“\n second number = %d \n “, b);

  return 0;
}
