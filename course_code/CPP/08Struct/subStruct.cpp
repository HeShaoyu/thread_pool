#include <iostream>
#include <string>
struct Student
{
    std::string name;
};
struct Teacher
{
    int id;
    std::string name;
    int age;
    Student stu;
};
int main()
{
    Student s = {"apple"};
    Teacher t ={12, "lisa", 33, s};
    std::cout << t.id << " " << t.name << " " << t.age << " " << t.stu.name << std::endl;
    return 0;
}