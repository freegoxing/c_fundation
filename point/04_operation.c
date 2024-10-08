//
// Created by freedom on 2024/9/11.
//
#include <stdio.h>
/*
 * 地址加1是在地址值上加一个sizeof（指针类型）
 * 本质是内存中加一个相邻的单元
 */

/*
 * 其用处是在内存中有一快连续的内容
 * 比如是数组
 */


int main(){
    char ac[] = {0,1,2,3,4,5,6,7,8,9,};
    char *p = ac;
    printf("p=%p\n",p);
    printf("p+1=%p\n",p+1);
/*
    *p -> ac[0]
    *(p+1) -> ac[1]
*/
    int ai[] = {0,1,2,3,4,5,6,7,8,9,};
    int *q = ac;
    printf("q=%p\n",q);
    printf("q+1=%p\n",q+1);

    return 0;
}

/*
 * 在两指针相减时表明了在其相距多少个单元
 */