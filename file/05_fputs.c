//
// Created by freedom on 2024/9/20.
//
#include <stdio.h>

int main(){
    char *path = "D:\\coding\\C\\c_project\\demo.text";
    FILE *fp = fopen(path, "w");

//    写入一个字符串
//    返回一个非负数（一般无意义）
//   如果出错，返回EOF（-1）
    int n= fputs("hello world\n", fp);
    printf("%d\n", n);

    return 0;
};


