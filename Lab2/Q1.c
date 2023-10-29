// Write a C program to display the first n odd natural numbers and their sum using for, while and
// do-while loop.

#include <stdio.h>
int main(){
    int n, i;
    printf("How many odd numbers would you like me to print? ");
    scanf("%d", &n);
    
    printf("\nUSING FOR LOOP\n");
    for(i = 1; i<=2*n; i+=2)
        printf("%d\n", i);
        
    printf("\nUSING WHILE LOOP\n");
    i = 1;
    while(i<2*n){
        printf("%d\n", i);
        i+=2;
    }
    
    printf("\nUSING DO-WHILE LOOP\n");
    i = 1;
    do{
        printf("%d\n", i);
        i+=2;
    }while(i<2*n);
}
