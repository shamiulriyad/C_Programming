//Write a function that returns the even numbers of an integer array

#include<stdio.h>

void even_num(int arr[] , int size){
    printf("even num arr :");
    for(int i =0; i< size; i++){
        if(arr[i] % 2 == 0){
            printf("%d",arr[i]);
        }
        printf("\n");
    }

}
int main(){
    int size;
    printf("enter the size of arr :");
    scanf("%d",&size);

    int value_array[size];
    printf("Enter the value: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &value_array[i]);
    }

    even_num(value_array, size);

    return 0;
}
