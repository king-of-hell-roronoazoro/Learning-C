#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, sum = 0;
    printf("How many integers do you want to store? ");
    scanf("%d", &n);
    int *array = malloc(n*sizeof(int));

//corporate mandatory check
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    for(int i = 0; i<n; i++){
        printf("Enter the value of the integer %d: ", i+1);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d\n", array[i]);
        sum += array[i];
    }
    printf("Sum = %d", sum);
    free(array);
}