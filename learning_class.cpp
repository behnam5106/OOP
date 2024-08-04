#include <iostream>

using std::string;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
};

class EmployeeWithConstructor {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    // defining constructor
    EmployeeWithConstructor(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee employee_1;
    employee_1.Name = "Hanssen";
    employee_1.Company = "DDS1";
    employee_1.Age = 38;

    Employee employee_2;
    employee_2.Name = "John";
    employee_2.Company = "DDS2";
    employee_2.Age = 56;

    employee_1.IntroduceYourself();
    employee_2.IntroduceYourself();

    EmployeeWithConstructor employee_3 = EmployeeWithConstructor("Ant", "DDS3", 25);
    employee_3.IntroduceYourself();



 }
