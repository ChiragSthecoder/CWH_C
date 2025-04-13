#include <stdio.h>
#include <string.h>

void char_freq(char a[]){
    char alphabets[53],lower = 'a',upper = 'A';
    for(int i=0;i<52;i++){
        if(i%2 != 0) alphabets[i] = lower++;
        if(i%2 == 0) alphabets[i] = upper++;
    }
    alphabets[52]='\0';
    int freq[53] = {0},i=0;
    freq[52]='\0';
    for(int i=0;i<strlen(alphabets);i++){
        for(int j=0;j<strlen(a);j++){
            if(a[j]==alphabets[i]) freq[i]++;
        }
    }
    for(int i=0;i<strlen(alphabets);i++){
        if(freq[i]==0) continue;
        printf("%c : %d\n",alphabets[i],freq[i]);
    }
}

int main() {
    printf("Enter the string : \n");
    char a[100];
    fgets(a,sizeof(a),stdin);
    char_freq(a);
    return 0;
}