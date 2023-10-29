// Write a C program that takes the height and width of a rectangle as an input from user
// and compute the perimeter and area of a rectangle.

#include <stdio.h>

int main(){
  float height, width;
  
  printf("Enter the height of the rectangle: ");
  scanf("%f", &height);
  printf("Enter the width of the rectangle: ");
  scanf("%f", &width);
  
  float perimeter = 2*(height + width);
  float area = height * width;
  
  printf("\nThe perimeter of the rectangle is %.2fm", perimeter);
  printf("\nThe area of the rectangle is %.2fm^2", area);
  return 0;
}
