//
// Created by freedom on 2024/9/22.
//
#include <stdio.h>
#include <stdio.h>
#define STR_LEN 20

typedef struct _student {
    char name[STR_LEN];
    int gender;
    int age;
}Student;

void read(FILE *fp, int index);

int main(){
    char *path = "D:\\coding\\C\\c_project\\file\\student.data";
    FILE *fp = fopen(path, "r");
    if (fp) {
        fseek(fp, 0L, SEEK_END);
        long size = ftell(fp);
        int number = size / sizeof(Student);
        int index = 0;
        printf("有%d个学生,你要看第几个", number);
        scanf("%d", &index);
        read(fp, index - 1);
    }
    return 0;
}

void read(FILE *fp, int index) {
    fseek(fp, index * sizeof(Student), SEEK_SET);
    Student stu;
    if (fread(&stu, sizeof(Student), 1, fp) == 1) {
        printf("姓名:%s, 性别:%d, 年龄:%d\n", stu.name, stu.gender, stu.age);
    }
}
