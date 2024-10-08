//
// Created by freedom on 2024/9/22.
//
#include <stdio.h>
#define PI  3.1415926
#define FORMAT "PI = %lf\n"
#define PI2 2*PI
#define PRT printf("%lf\n", PI); \
        printf("%lf\n", PI2);
int main(){
    printf(FORMAT,PI);
    printf("%lf\n",PI2);

    PRT

    // __FILE__：当前源文件的文件名
    printf("当前源文件名：%s\n", __FILE__);

    // __LINE__：当前源文件中的行号
    printf("当前行号：%d\n", __LINE__);

    // __DATE__：当前日期
    printf("当前日期：%s\n", __DATE__);

    // __TIME__：当前时间
    printf("当前时间：%s\n", __TIME__);

    // __func__：当前函数名
    printf("当前函数名：%s\n", __func__);

    return 0;
}
