//
// Created by freedom on 2024/9/20.
//
#include <stdio.h>

int main(){
    char *path = "D:\\coding\\C\\c_project\\demo.text";
    FILE *fp = fopen(path, "w");

//    fwrite一次写入多个并返回写入的字节数个数

    char str[] = {97, 98, 99, 100};
//    从那写入，每一个多少字节，写入几个，写入那
    int n = fwrite(str, 1, 4, fp);
    printf("%d\n", n);
    fclose(fp);
    return 0;
}
