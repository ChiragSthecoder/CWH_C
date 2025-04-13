#include <stdio.h>

char* caesar_cipher(char* b, const char* a){
    int i=0;
    while(a[i]!='\0'){
        b[i] = a[i] + 1;// for decryption use b[i] = a[i] - 1;
        i++;
    }
    b[i]='\0';

}

int main() {
    printf("Enter the phrase : \n");
    char a[100],b[100];
    fgets(a,sizeof(a),stdin);
    caesar_cipher(b,a);
    puts(b);
    return 0;
}