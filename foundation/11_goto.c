//
// Created by freedom on 2024/9/4.
//
#include <stdio.h>

int main(){
        int x;
        int one, two, five;

        printf("多少钱：");
        scanf("%d", &x);

        for ( one=0; one<=x*10; one++){
            for (two=0; two<=x*10/2; two++){
                for (five=0; five<=x*10/5; five++){
                    if (one + two*2 + five*5 == x*10){
                        printf("可用%d个1角加%d个2角加%d个5角得到%d元\n",
                               one, two, five, x);
//                        goto out;
                    }
                }
            }
        }
//    out:
        return 0;
}

//在运行到goto + label 位置时
//会跳转到label位置执行label下的语句