#include <stdio.h>
#include <string.h>

struct person {
    char name[50];
    int age;
    char address[100];
};
struct student {
    int id;
    struct person info;
    float gpa;
};
int main() {
     struct student s1 = {
        .id = 1234,
        .info = {
            .name = "John Doe",
            .age = 20,
            .address = "123 Main St, Anytown USA"
        },
        .gpa = 3.5
};
      printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.info.name);
    printf("Student Age: %d\n", s1.info.age);
    printf("Student Address: %s\n", s1.info.address);
    printf("Student GPA: %.2f\n", s1.gpa);
     return 0;
 }


