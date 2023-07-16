#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
};
int main()
{
    Student s = {"apple", 60};
    Student* p = &s;
    std::cout << p->name << " " << p->age << std::endl;
    return 0;
}