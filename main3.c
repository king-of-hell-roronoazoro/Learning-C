#include <stdio.h>
int main(void){
    int a = 67;
    printf("The address of a is: %x\n", &a);
    int *ptra = &a; //what is at the address or a, so basically just the value of a lol
    printf("The address of pointer of a is: %x\n", &ptra);
    printf("The value of a is: %d", *ptra);
}
