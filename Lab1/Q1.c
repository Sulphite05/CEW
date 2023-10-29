// Write a C program that accepts an employee's ID, total worked hours in a month and
// the amount received per hour. Print the ID and salary (with two decimal places) of the
// employee for a particular month.

#include <stdio.h>

int main(){
  int emp_id, work_hrs;
  printf("Enter your employee ID: ");
  scanf("%d", &emp_id);
  printf("Enter your total worked hours in a month: ");
  scanf("%d", &work_hrs);
  float amt_per_hr;
  printf("Enter the amount received per hour: ");
  scanf("%f", &amt_per_hr);
  float salary = work_hrs * amt_per_hr;
  printf("\nThe employer of ID %d has the salary Rs. %.2f", emp_id, salary);
  return 0;
}
