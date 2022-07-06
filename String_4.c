#include <string.h>

#include <stdio.h>

#define SIZE 100

int str_chr(char *s, int c) {

    int i;
    int count=0;

    for (i=0;i<strlen(s);i++) {
        if( s[i] == c )
            count++;
    }

    return count;
}

int main(void) {

    char str[SIZE];
    char ch;

    printf("문자열을 입력하시오: ");
    gets(str);
    for (ch='a';ch<='z';ch++) {
        int result=str_chr(str,ch);
        printf("%c: %d \n", ch, result);

    }

    return 0;
}