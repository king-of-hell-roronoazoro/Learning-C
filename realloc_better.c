#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 0;
    int capacity = 2;
    int sum = 0;
    int *array = malloc(capacity*sizeof(int));
    printf("enter -1 to exit the loop\n");
    while(1){ //infinite loop
        if(size>=capacity){
            capacity *= 2;
            printf("increasing capacity to %d\n", capacity);
            int *temp = realloc(array, capacity*sizeof(int));
            if(temp == NULL){
                return 1;
            }
            array = temp;
        }
        printf("Enter the integer at %d of array: ", size+1);
        scanf("%d", &array[size]);
        if(array[size]==-1){
            break;
        }
        size++;
    }
    for(int i = 0; i<size; i++){ //not capacity coz what if i stop before i use entire capacity? size is going to be exact
        printf("%d\n", array[i]);
        sum += array[i];
    }
    printf("Sum = %d", sum);
    free(array);
    return 1;
}