#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sum = 0, i = 0;
    int capacity = 2;
    int size = 0;
    int *array = malloc(capacity*sizeof(int));

    //corporate mandatory check
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter -1 to break the chain\n");
    while(1){
        if(size>=capacity){
            capacity *= 2;
            int *temp = realloc(array, capacity*sizeof(int));
            if (temp == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }//check no: 2
            array = temp;//update array with the new temp
        }
        printf("Enter the value of the integer %d: ", i+1);
        scanf("%d", &array[i]);
        if(array[i]==-1){
            break;
        }
        size++;
        i++;
    }
    for(int i = 0; i<size; i++){ //not capacity coz what if i stop before i use entire capacity? size is going to be exact
        printf("%d\n", array[i]);
        sum += array[i];
    }
    printf("Sum = %d", sum);
    free(array);
}