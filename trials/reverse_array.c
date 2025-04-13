// #include <stdio.h>

// void create_array(int [], int);
// void print_array(int [], int);
// void reverse_array(int [], int);
// void print_array(int [], int);

// int main() {
//     int a[9];
//     create_array(a,9);
//     print_array(a,9);
//     reverse_array(a,9);
//     print_array(a,9);
//     return 0;
// }

// void create_array(int a[], int n){
//     printf("Enter the array numbers : \n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
    
// }

// void print_array(int a[], int n){
//     printf("The array numbers are : \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     printf("\n");
// }

// void reverse_array(int a[], int n){
//     int temp,i=0;
//     n--;
//     do{
//         temp = a[i];
//         a[i] = a[n];
//         a[n] = temp;
//         i++;
//         n--;
//     }while(i<n);
// }   //logic 1


//logic 2 - swap a[i] with a[n-i-1]
#include <stdio.h>

void create_array(int [], int);
void print_array(int [], int);
void reverse_array(int [], int);

int main() {
    int a[9];

    create_array(a, 9);        // Take input
    print_array(a, 9);         // Print original array
    reverse_array(a, 9);       // Reverse the array
    print_array(a, 9);         // Print reversed array

    return 0;
}

void create_array(int a[], int n){
    printf("Enter %d array elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void print_array(int a[], int n){
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse_array(int a[], int n){
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
