#include <stdio.h>
#define ARRAY_SIZE 10

int main(){
    int arr[ARRAY_SIZE] = {18, 22, 45, 12, 67, 34, 89, 23, 56, 78};
    int max;

    printf("ARRAY ELEMENTS:\n");
    printf("---------------------------------------\n");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d%s", arr[i], (i < ARRAY_SIZE - 1) ? ", " : "\n");
    }
    printf("---------------------------------------\n");
    
    max = arr[0];
    for(int i = 1; i < ARRAY_SIZE; i++){
        if (arr[i] > max){
            max = arr[i];

        }
    }
    printf("MAX ELEMENT: %d\n", max);

    return 0;
}
