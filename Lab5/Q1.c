#include <stdio.h>
int main(){
    FILE *fptr = fopen("test_file.txt", "w");
    fprintf(fptr, "This is my test file\nI have opened it in write mode\n");
    fclose(fptr);
    fptr = fopen("test_file.txt", "a");
    fprintf(fptr, "But now I have opened it in append mode\n");
    fclose(fptr);
    fptr = fopen("test_file.txt", "r");
    char str[50];
    while (fgets(str, 50, fptr) != NULL){
        printf("%s", str);
    } 
    fclose(fptr);
    return 0;
}
