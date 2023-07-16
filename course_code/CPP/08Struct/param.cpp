#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
};

void printStudent1(Student s)
{
    std::cout << s.name << " " << s.age << std::endl;
}

void printStudent2(Student* s)
{
    s->age = 100;
    std::cout << s->name << " " << s->age << std::endl;
}
int main()
{
    Student s = {"orange", 20};
    std::cout << s.name << " " << s.age << std::endl;
    printStudent1(s);
    printStudent2(&s);
    printStudent1(s);
    return 0;
}
