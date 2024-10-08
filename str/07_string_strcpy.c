//
// Created by freedom on 2024/9/14.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* mystrcpy(char *det, const char *src);

int main(){
    char str[] = "hello!word";
    char *dst1 = (char*) malloc(strlen(str)+1);
    char *dst2 = (char*) malloc(strlen(str)+1);

    strcpy(dst1, str);
    mystrcpy(dst2, str);
    str[0] = 'B';
    printf("%s\n", str);
    printf("%s\n", dst1);
    printf("%s\n", dst2);
    free(dst1);
    free(dst2);

    return 0;
}

char* mystrcpy(char *dst, const char *src){
    int index = 0;
    while(src[index]){
        dst[index] = src[index];
        index++;
    }
    dst[index]='\0';

    return dst;
}
