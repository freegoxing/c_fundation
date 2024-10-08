//
// Created by freedom on 2024/9/11.
//
#include <stdio.h>
#include <string.h>

//int main(){
////    虚假的字符数组
////    char word[] = {'H', 'e', 'l','l', 'o'};
////    真正的字符数组
//    char word1[] = {'H', 'e', 'l','l', 'o', 0};
////    or
//    char word2[] = {'H', 'e', 'l','l', 'o', '\0'};
////    在计算字符长度时不会把0算进去
////    0标志字符串的结束
//
//    or
//    char *str = "hello";
//    char word[] = "hello";
//    char hello[10] = "hello";


//    return 0;
//}

//int main(){
//    int i = 0;
//    char *str1 = "hello";
//    char *str2 = "hello";
//
//    printf("&i=%p\n", &i);
//    printf("&str1=%p\n", str1);
//    printf("&str2=%p\n", str2);
//
//    printf("str1[0]=%c", str1[0]);
//    str1[0] = 'B';
//    printf("str1[0]=%c", str1[0]);
//
//    return 0;
//}

int main(){
    char str[] = "hello";
    printf("str1[0]=%c\n", str[0]);
    str[0] = 'B';
    printf("str1[0]=%c\n", str[0]);

    return 0;
}

