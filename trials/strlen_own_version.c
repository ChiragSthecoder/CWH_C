// #include <stdio.h>

// int new_strlen(char a[]){
//     int string_length = 0,i=0;
//     do{
//         string_length++;
//         i++;
//     }while(a[i]!='\0');
//     return string_length;
// }

// int main() {
//     char a[] = "hello";
//     int string_length;
//     string_length = new_strlen(a);
//     printf("The length of the string is %d\n", string_length);
//     return 0;
// }   //This version over counts by 1 also counting the null char, but  since it starts from 0, total  ends at 5.

//this is the correct one
#include <stdio.h>

int new_strlen(const char a[]) {
    int i = 0;
    while (a[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char a[] = "hello world\n";
    int string_length = new_strlen(a);
    printf("The length of the string is %d\n", string_length);
    return 0;
}
