//
// Created by freedom on 2024/9/14.
//
#include <stdio.h>
#include <string.h>

//int main(){
////    strcmp比较字符串的大小
//    char s1[] = "abc";
//    char s2[] = "abc";
//    char s3[] = "abcd";
//
//    printf("%d\n", strcmp(s1, s2));
//    printf("%d\n", strcmp(s1, s3));
//    printf("%d\n", strcmp(s3, s1));
//
//    return 0;
//}

int mystrcmp(const char *s1, const char *s2);

int main(){
    char s1[] = "abc";
    char s2[] = "Abc";

    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", mystrcmp(s1, s2));
    printf("%d\n", 'a'-'A');

    return 0;
}

int mystrcmp(const char *s1, const char *s2){
    while (*s1 == *s2 && *s1 != 0){
     *s1++;
     *s2++;
    }
    return *s1 - *s2;
}