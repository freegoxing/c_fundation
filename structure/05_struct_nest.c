//
// Created by freedom on 2024/9/18.
//
#include <stdio.h>
#include <string.h>

typedef struct Massage{
    char phone[12];
    char email[100];
}M;

typedef struct Student{
    char name[20];
    int age;
    char gender;
    int height;
    M msg;
}S;

int main(){
    S s1;
    strcpy(s1.name,"freedom");
    s1.age = 18;
    s1.gender = 'M';
    s1.height = 180;
    strcpy(s1.msg.phone,"123456789");
    strcpy(s1.msg.email,"123456789@qq.com");

    printf("name:%s, age:%d, gender:%c, height:%d\n",s1.name,s1.age,s1.gender,s1.height);
    printf("phone:%s, email:%s\n",s1.msg.phone,s1.msg.email);


    S s2 = {"freedom",18,'M',180,{"123456789","123456789@qq.com"}};

    printf("name:%s, age:%d, gender:%c, height:%d\n",s2.name,s2.age,s2.gender,s2.height);
    printf("phone:%s, email:%s\n",s2.msg.phone,s2.msg.email);

    return 0;
}

