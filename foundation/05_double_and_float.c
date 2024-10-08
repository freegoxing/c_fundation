//
// Created by freedom on 2024/9/2.
//
#include <stdio.h>

//在整型数据做除法时结果一定为整数
//要浮点型数据才行

//int main()
//{
//    printf("请输入身高的英尺与英寸,"
//           "如输入\"5,7\"表示5英尺，7英寸:");
//
//    int foot;
//    int inch;
//
//    scanf("%d,%d", &foot, &inch);
//
//    printf("身高为%f米。\n",
//           (foot + inch /12)*0.3048);
//
//    return 0;
//}

//or

//int main()
//{
//    printf("请输入身高的英尺与英寸,"
//           "如输入\"5,7\"表示5英尺，7英寸:");
//
//    int foot;
//    float inch;
//
//    scanf("%d,%f", &foot, &inch);
//
//    printf("身高为%f米。\n",
//           (foot + inch /12)*0.3048);
//
//    return 0;
//}

//or

//int main()
//{
//    printf("请输入身高的英尺与英寸,"
//           "如输入\"5,7\"表示5英尺，7英寸:");
//
//    int foot;
//    int inch;
//
//    scanf("%d,%d", &foot, &inch);
//
//    printf("身高为%f米。\n",
//           (foot + inch /12.0)*0.3048);
//
//    return 0;
//}

//or

int main()
{
    printf("请输入身高的英尺与英寸,"
           "如输入\"5,7\"表示5英尺，7英寸:");

    double foot;
    double inch;

    scanf("%lf,%lf", &foot, &inch);

    printf("身高为%f米。\n",
           (foot + inch /12)*0.3048);

    return 0;
}