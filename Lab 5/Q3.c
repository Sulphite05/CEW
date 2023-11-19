// Implement a student database system using a file. Include features to add, delete, modify, and display student records.

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[100];
    char roll_num[10];
    char marks[4];
};

int main(){
    struct Student *stud =  malloc(sizeof(struct Student));
    FILE *fptr;
    int ch;
    char task[100];
    char myString[100]; // buffer
    int i = 0, j = 0, del_num;
    while(1){
        printf("\nSelect an option:\n1. Add Record\n2. View Records\n3. Delete Record\n4. Exit\n");
        scanf("%d", &ch);
        printf("\n");
        switch (ch)
        {
        case 1: 
            printf("Enter the name: ");
            scanf("%s", stud[i].name);
            printf("Enter the roll number: ");
            scanf("%s", stud[i].roll_num);
            printf("Enter the marks: ");
            scanf("%s", stud[i].marks);
            fptr = fopen("students.txt", "a");
            fprintf(fptr, "%10s     %3s      %3s\n", stud[i].name, stud[i].roll_num, stud[i].marks);
            i++;
            stud =  realloc(stud, i * sizeof(struct Student));
            fclose(fptr);
            break;
        
        case 2:
            fptr = fopen("students.txt", "r");
            fprintf(stdout, "%10s     %3s      %3s\n\n", "Name", "Roll", "Marks");
            while(fgets(myString, sizeof(myString), fptr) != NULL)  printf("%s", myString); // loop to write different lines
            printf("\n");
            fclose(fptr);
            break;

        case 3:
            j = 0;
            fptr = fopen("students.txt", "r");
            fprintf(stdout, "- %3s  %10s     %3s      %3s\n\n","S. no", "Name", "Roll", "Marks");
            while(fgets(myString, sizeof(myString), fptr) != NULL){
                printf("- %4d  %s", j+1, myString); // loop to write different lines
                j++;
            }
            printf("\n");
            fclose(fptr);
            printf("\nEnter the record number to delete: ");
            scanf("%d", &del_num);
            fptr = fopen("students.txt", "w");
            for(int k = 0; k<j; k++){
                if(k+1 == del_num) continue;
                fprintf(fptr, "%10s     %3s      %3s\n", stud[k].name, stud[k].roll_num, stud[k].marks);
            }
            fclose(fptr);
            break;
        case 4:
            fclose(fptr);
            return 0;
        
        default:
            printf("Enter a valid choice!\n");
        }
    }
    return 0;
}
