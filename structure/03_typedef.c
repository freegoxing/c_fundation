//
// Created by freedom on 2024/9/18.
//
#include <stdio.h>

typedef struct GamePerson{
    char name[100];
    int attack;
    int defense;
    int blood;
} G;

int main(){
    G taro = {"taro", 100, 100, 100};
    G remi = {"remi", 100, 100, 100};
    G eddie = {"eddie", 100, 100, 100};

    G arr[3] = {taro, remi, eddie};
    for (int i = 0; i < 3; i++){
        G temp = arr[i];
        printf("%s\n", temp.name);
        printf("%d\n", temp.attack);
        printf("%d\n", temp.defense);
        printf("%d\n", temp.blood);
        printf("\n");
    }
    return 0;
}




