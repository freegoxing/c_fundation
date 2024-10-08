//
// Created by freedom on 2024/9/19.
//
#include <stdlib.h>
#include <stdio.h>

int main(){
    char *path = "D:\\coding\\C\\c_project\\demo.text";
    FILE *fp = fopen(path, "r");
//    一行以换行符为基准
//    把数据会存储在一个数组中
    int size = sizeof(char);
    char *p = malloc(100*size);

//    或直接用返回值
//    空返回NULL
    char *str;
    fgets(p, 1000, fp);
    printf("%s", p);

    while((str = fgets(p, 1000, fp)) != NULL) {
        printf("%s\n", str);
    }
    free(p);

    return 0;
}
