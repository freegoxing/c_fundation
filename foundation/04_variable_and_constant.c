//
// Created by freedom on 2024/9/1.
//
#include <stdio.h>

//关键字const用来定义常量，
// 如果一个变量被const修饰，
// 那么它的值就不能再被改变

//这两种写法是一样的，都是表示变量n的值不能被改变了
//const int n=5;
//int const n=5;

int main()
{
    int const AMOUNT = 100;
    int prince, change;

    printf("请输入金额：");
    scanf("%d", &prince);

    change = AMOUNT - prince;
    printf("找零：%d\n", change);

    return 0;
}