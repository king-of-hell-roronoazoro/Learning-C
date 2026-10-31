#include <stdio.h>
#include <stdio.h>
int main() {
    char str[67];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
}
