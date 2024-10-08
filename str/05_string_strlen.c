//
// Created by freedom on 2024/9/13.
//
#include <stdio.h>
#include <string.h>

unsigned long long mylen(const char *s);

int main(){
//    strlen
//    不包含结尾的0
    char line[] = "Hello!";
    printf("length=%llu\n", strlen(line));
    printf("length=%llu\n", mylen(line));
    printf("length=%llu\n", sizeof(line));

    return 0;
}

unsigned long long mylen(const char *s){
    int cnt = 0;
    int index = 0;
    while (s[index] != '\0'){
        index ++;
        cnt++;
    }
    return cnt;
}