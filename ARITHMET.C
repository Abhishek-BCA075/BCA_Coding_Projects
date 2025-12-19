#include<stdio.h>
#include<conio.h>

void main()
{
  int a=5, b=10, diff, sum, product, quotient, rem;
  clrscr();
  sum =a + b;
  diff = b - a;
  product = a * b;
  quotient = b / a;
  rem = b % a;

    printf("the sum of %d and %d is = %d\n\n",a,b,sum);
    printf("the difference of %d and %d = %d\n\n",b,a,diff);
    printf("the quotient of %d and %d = %d\n\n",b,a,quotient);
    printf("the product of %d and %d = %d\n\n",b,a,product);
    printf("the reminder of %d and %d = %d",b,a,rem);
 getch();

}
