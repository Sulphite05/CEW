// Write a C program to compare two strings without using string library functions.

#include <stdio.h>
int main(){
  char s1[] = "default", s2[] = "default";
  printf("Enter the first string: ");
  scanf("%s", &s1);
  printf("Enter the second string: ");
  scanf("%s", &s2);
  int i;
  for(i = 0; s1[i]==s2[i] && s1[i]!='\0'; i++);
  if(s1[i] > s2[i]){
    printf("%s is more than %s", s1, s2);
  }
  else if(s1[i] < s2[i]){
    printf("%s is less than %s", s1, s2);
  }
  else{
    printf("%s is equal to %s", s1, s2);
  }
  return 0;
}
