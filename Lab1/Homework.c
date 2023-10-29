// A program that checks whether the the number input by the user is even or odd.
#include <stdio.h>

int main() {
    int num;
  
    printf("Enter a number: ");
    scanf("%d", &num);
  
    num%2==0? printf("%d is even", num):printf("%d is odd", num);
  
    return 0;
}

/* A program that adds two numbers if they are greater than 5, multiplies if either of them is greater 
than 5, adds one to both if both are less than 5, or prints "Hello World" if any of them is 5. */

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num1>5 && num2>5)
    {
        printf("%d", num1+num2);
    }

    else if(num1>5 || num2>5)
    {
        printf("%d", num1*num2);
    }
    
    else if(num1<5 && num2<5)
    {
        num1++;
        num2++;
        printf("%d\n%d", num1,num2);
    }

    else
        printf("Hello World");
    
    return 0;
}

/* A program that calls a function to print a table */

#include <stdio.h>
void print_table(int);

int main() {
    int num1, num2;
    printf("Enter a number to print its table: ");
    scanf("%d", &num1);
    print_table(num1);
    
    return 0;
}

void print_table(int num)
{
    if(num>=0)
        for(int i = 1; i<=10; i++)
                printf("%4d x %4d = %4d\n", num, i, num*i);

    else
        printf("Cannot print the table of a negative number :(");
}
