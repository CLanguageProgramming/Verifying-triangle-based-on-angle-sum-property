/*
2.	program to check whether triangle is valid or not if angles are given
A triangle is said to be a valid triangle if and only if sum of its angles is 180 degrees.
make sure angles are greater than 0
*/
#include <stdio.h>
int main()
{
  int a;//angle 1
  int b;//angle 2
  int c;//angle 3
  printf("Enter Angle 1\n>>");
  scanf("%d", &a);
  if (a == 0)
  {
    goto incorrect0;
  }
  if (a == 180)
  {
      goto incorrect180;
  }
  printf("Enter Angle 2\n>>");
  scanf("%d", &b);
  if (b == 0)
  {
    goto incorrect0;
  }
  if (b == 180)
  {
      goto incorrect180;
  }
  printf("Enter Angle 3\n>>");
  scanf("%d", &c);
  if (c == 0)
  {
    goto incorrect0;
  }
  if (c == 180)
  {
      goto incorrect180;
  }
  int d = a+b+c;
  if (d == 180)
  {
    goto thankyou;
  }
  else if (d < 180)
  {
    goto incorrectanm;
  }
  else
  {
    goto incorrectana;
  }
  incorrect0:
  printf("The angle should not be 0");
  getchar();
  goto thank;

  incorrect180:
  printf("The angle should not be 180");
  getchar();
  goto thank;

  incorrectanm:
  printf("The angles dont sum upto 180");
  getchar();
  goto thank;

  incorrectana:
  printf("The sum of angles should be 180");
  getchar();
  goto thank;

  thankyou:
  printf("Valid Triangle");
  goto thank;

  thank:
  getchar();
}
