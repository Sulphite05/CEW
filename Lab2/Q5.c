// Write a C program to print all unique elements in an array.

#include <stdio.h>
int main(){
  int arr[] = {1, 2, 3, 1, 2, 5, 3, 2, 6}, size = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0; i < size; i++){
      int count = 0;
      for(int j = 0; j < size; j++){
          if(arr[i] == arr[j])
            count++;
      }
      if(count == 1){
          printf("%d\n", arr[i]);
      }
  }
  return 0;
}
