//
// Created by freedom on 2024/9/18.
//
#include <stdio.h>
#include <string.h>

struct Student{
    char name[100];
    int age;
};

int main(){
    struct Student s1 = {"Tom", 18};
    struct Student s2 = {"Free", 120};
    struct Student s3 = {"Degree", 19};

    struct Student stu[3] = {s1, s2, s3};

    for (int i = 0; i < 3; i++){
        struct Student temp = stu[i];
        printf("name: %s, age: %d\n", temp.name, temp.age);
    }
    return 0;
}
