#include <stdio.h>

// void new_strcpy(char b[],char a[]){
//     int i=0;
//     while(a[i]!='\0'){
//         b[i]=a[i];
//         i++;
//     }
//     b[i]='\0';
// }

//better strcpy()
char* new_strcpy(char* dest, const char* src) {
    char* ptr = dest; // Save the starting address to return
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Add null terminator
    return ptr;
}

int main() {
    char a[15] = "Hello world";
    char b[20];
    printf("The original string is %s\n",a);
    new_strcpy(b,a);
    printf("The copied string is %s\n",b);
    return 0;
}


