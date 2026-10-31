#include <stdio.h>
int fibbo(int terms, long term1, long term2){
    if(terms <= 2){
        return 0;
    }
    long x = term1 + term2;
    printf("%d\n", x);
    term1 = term2;
    term2 = x;
    fibbo(terms-1, term1, term2);
}
int main(void){
    int terms;
    printf("Enter the number of terms you want: ");
    scanf("%d", &terms);
    int a = 0;
    int b = 1;
    if(terms==1){
        printf("0\n");
    }else if(terms == 2){
        printf("0\n1\n");        
    }else{
        printf("0\n1\n");
        fibbo(terms, a, b);
    }
}
