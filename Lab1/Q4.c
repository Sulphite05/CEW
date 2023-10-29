// Write a program in C to convert a decimal number to a binary number using functions.

#include <stdio.h>
int dec_to_bin();

int main(){
  int decimal;
  printf("Enter a decimal number to convert it into a binary number: ");
  scanf("%d", &decimal);
  printf("The equivalent binary number for %d is %d", decimal, dec_to_bin(decimal));
  return 0;
}

int dec_to_bin(int dec){
  int bin = 0, i = 1;
  while(dec!=0){
    bin += (dec%2) * i;
    i*=10;
    dec /= 2;
  }
  return bin;
}
