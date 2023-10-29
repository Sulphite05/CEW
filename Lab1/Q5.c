// Write a function to calculate the nth Fibonacci number and call it recursively to print
// the Fibonacci series.

#include <stdio.h>
void print_series();
int fib();

int main(){
  int fib_num;
  printf("How many fibonacci numbers should I print? ");
  scanf("%d", &fib_num);
  print_series(fib_num);
  return 0;
}
void print_series(int fib_num){
  for(int i = 0; i<fib_num; i++)
    printf("%d\n", fib(i));
}

int fib(int num){
  if(num < 2)
    return num;
  else
    return fib(num-1)+fib(num-2);
}
