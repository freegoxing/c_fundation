//
// Created by freedom on 2024/9/1.
//

#include <stdio.h>

//基本格式
//scanf("%_", &y)

//int main()
//{
//    int prince, change;
//    printf("请输入金额：");
//    scanf("%d", &prince);
//
//    change = 100 - prince;
//    printf("找零：%d\n", change);
//
//    return 0;
//}

//多个输入与输出

//int main()
//{
//    int a = 0;
//    int b = 0;
//
//    scanf("  %d %d ", &a, &b);
//    printf("%d %d", a, b);
//
//    return 0;
//}

//当format中%d后有一个人空格要再输入一个不会被记录的数字

int main()
{
    int a = 0;
    int b = 0;

    scanf("a %d %d ", &a, &b);
    printf("%d %d", a, b);

    return 0;
}
//当format中有其他字符要先填入相应的， 否则会出错
