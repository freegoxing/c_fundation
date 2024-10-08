//
// Created by freedom on 2024/9/12.
//
#include <stdio.h>

//输入与输出用%s
//%s读一个单词，即读到\n,\t, 等结束

//由于数组与指针相似，scanf不能保证输入的个数与数组匹配

//所以要在%与s中加数字来明确要输入（输出）几个

void f(void){
    char string[8];
    char string2[8];
    scanf("%7s", string);
    scanf("%7s", string2);
    printf("%s##%s", string, string2);
}

int main(){
    f();
    return 0;
}




