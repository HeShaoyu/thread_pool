#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
};

void printStudent(const Student *s)
{
    //s->name = "aaa";
    std::cout << s->name << " " << s->age << std::endl;
}

int main()
{
    Student s = {"orange", 18};
    printStudent(&s);
    return 0;
}
