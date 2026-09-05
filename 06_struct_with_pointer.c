#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

int main(void)
{
    struct Student student = {"Ari", 19};
    struct Student *student_pointer = &student;

    printf("name: %s\n", student_pointer->name);
    printf("age: %d\n", student_pointer->age);

    student_pointer->age = 20;
    printf("new age: %d\n", student.age);

    return 0;
}
