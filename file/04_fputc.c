//
// Created by freedom on 2024/9/20.
//
#include <stdio.h>

int main(){
    char *path = "D:\\coding\\C\\c_project\\demo.text";
    FILE *fp = fopen(path, "w");

//    fputc是一次一个字符
//    用ASCII码写入用int接收
//    a --> 97
    int c = fputc('a', fp);
    printf("%c\n", c);

    fclose(fp);
    return 0;
}


