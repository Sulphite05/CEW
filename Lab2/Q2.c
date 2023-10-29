// Write a C program to make the following pattern as a pyramid with an asterisk.
//   *
//  * *
// * * *
//* * * *

#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for(int i = 1; i<=n; i++){
    for(int j = n-i; j>=1; j--)
      printf(" ");
    for(int k = 1; k<=i; k++)
      printf("* ");
    printf("\n");
  }
  return 0;
}
