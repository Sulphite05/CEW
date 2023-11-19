#include <stdio.h>
int main(){
    FILE *fptr = fopen("test_file.txt", "r");
    char str[100];
    int i, words = 0;
    while (fgets(str, 50, fptr) != NULL){
        i = 0;
        while(str[i] != '\0'){
            if(str[i] == ' ' || str[i] == '\n'){
                words++;}
            i++;
        }
    }
    printf("%d", words);
    fclose(fptr);
    return 0;
}
