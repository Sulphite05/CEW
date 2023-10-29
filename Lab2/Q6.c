// Write a C program to add two distances in inch-feet system using structures.

#include <stdio.h>
struct Distance{
      int ft;
      int inch;
  };
  
int main(){
  
  struct Distance dist1 = {4, 7};
  struct Distance dist2 = {3, 2};
  
  struct Distance dist3 = {dist1.ft + dist2.ft, dist1.inch + dist2.inch};
  
  printf("%d'%d", dist3.ft, dist3.inch);
  return 0;
}
