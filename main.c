#include <stdio.h>
int main(void)
{
  float Base,High,Area;
  printf("Enter Base:");
  scanf("%f",& Base);
  printf("Enter High:");
  scanf("%f",& High);
  Area = 0.5*Base*High;
  printf("Area of Triangel is :%f",Area);
}