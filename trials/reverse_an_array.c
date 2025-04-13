#include <stdio.h>

void create_array(int [], int);
void print_array(int [], int);
void reverse_array(int [], int);
void swap(int *,int *);

int main(){
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    create_array(arr,n);
    print_array(arr,n);
    reverse_array(arr,n);
    print_array(arr,n);
    return 0;
}

void create_array(int arr[], int n){
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
}

void print_array(int arr[], int n){
    printf("The array elements are : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}

void reverse_array(int arr[], int n){
    for(int i=0;i<n/2;i++){
        swap(&arr[i],&arr[n-1-i]);
    }
}

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}