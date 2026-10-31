#include <stdio.h>
int factorial(int n){
    if(n == 1|| n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
int main(void){
    int n;
    printf("enter the factorial you want: ");
    scanf("%d", &n);
    int c = factorial(n);
    printf("The factorial is: %d", c);
}
