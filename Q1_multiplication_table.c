#include <stdio.h>
int multi(int n, int count){
    int m = n * count;
    return m;
}
int main(void){
    int n;
    printf("Enter the number you want the table of: ");
    scanf("%d", &n);
    for(int i = 1; i<=10; i++){
        int m = multi(n, i);
        printf("%d x %d = %d", i, n, m);
        printf("\n");
    }
}