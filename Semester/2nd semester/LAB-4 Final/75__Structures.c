#include <stdio.h>
struct Student
{
    char name[50];
    int age;
    float cgpa;
};
int main()
{
    struct Student s;
    scanf("%s %d %f", s.name, &s.age, &s.cgpa);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("CGPA: %.2f\n", s.cgpa);
    return 0;
}