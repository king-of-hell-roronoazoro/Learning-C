#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    printf("Enter the string you want to reverse: \n");
    fgets(string, sizeof(string), stdin);
    char rev[100];
    int length = strlen(string);
    for(int i = 0; i<length; i++){ //same here 
        rev[length-i-1] = string[i]; //not 100 but 99 coz 0 to 99 == 100
    }
    printf("%s", rev);
}
