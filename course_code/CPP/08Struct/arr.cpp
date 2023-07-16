#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
};

int main()
{
    Student s[2] = {{"apple", 10}, {"orange", 20}};
    for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
    {
        std::cout << s[i].name << " " << s[i].age << std::endl;
    }
    return 0;
}
