//
// Created by Donggwon Seo on 2022/07/06.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    char c;
    printf("문자를 입력하시오: ");
    c = getchar();

    if (islower(c))
        putchar(toupper(c));

    if (isupper(c))
        putchar(tolower(c));

    if (!isalpha(c))
        printf("경고 ");

    fflush(stdin);

    return 0;

}