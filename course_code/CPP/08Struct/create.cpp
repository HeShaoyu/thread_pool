#include <iostream>
#include <string>
// 创建一个学生
struct Student
{
    std::string name;
    int age;
    int score;
};
int main()
{
    Student s1;
    s1.name = "orange";
    s1.age = 12;
    s1.score = 88;
    std::cout << s1.name << " " << s1.age << " " << s1.score << std::endl;
    Student s2 = {"apple", 10, 80};
    std::cout << s2.name << " " << s2.age << " " << s2.score << std::endl;
    
    return 0;
}