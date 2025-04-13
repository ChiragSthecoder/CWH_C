#include <stdio.h>

void create_array(int [], int);
void count_positive_integers(int [], int);

int main(){
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    create_array(arr,n);
    count_positive_integers(arr,n);   
    return 0;
}

void create_array(int arr[], int n){
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
}

void count_positive_integers(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            count++;
        }
    }
    printf("The number of positive integers in the array is : %d\n",count);
}