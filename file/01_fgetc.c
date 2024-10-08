//
// Created by freedom on 2024/9/19.
//

#include <stdio.h>

int main() {
    char *path = "D:\\coding\\C\\c_project\\demo.text";
    FILE *fp = fopen(path, "r");

//    一次读取一个字符，读不到返回-1
//    int c = fgetc(fp);
//    printf("%c\n", c);
//
//    c = fgetc(fp);
//    printf("%c\n", c);
//
//    c = fgetc(fp);
//    printf("%c\n", c);
//
//    c = fgetc(fp);
//    printf("%c\n", c);

    int c;
    while((c = fgetc(fp)) != -1) {
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}
