//
// Created by freedom on 2024/9/19.
//
#include <stdio.h>
#include <stdlib.h>

int main(){
    char *path = "D:\\coding\\C\\c_project\\demo.text";
    FILE *fp = fopen(path, "r");

//    英文一个字节，中文两个字节
//    返回当前读取到的有效字节数
    char *p = malloc(1000);
//    读到什么地方，每一个多大，要多少个，文件
    int n = fread(p, 1, 50, fp);

    printf("%d\n", n);
    printf("%s\n", p);

    fclose(fp);
    free(p);
    return 0;
};