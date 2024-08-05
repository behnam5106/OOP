#include <iostream>

using std::string;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){//setter
        Name = name;
    }
    string getName(){//getter
        return Name;
    }
    void setCompany(string company){//setter
        Company = company;
    }
    string getCompany(){//getter
        return Company;
    }
    void setAge(int age){//setter
        Age = age;
    }
    int getAge(){//getter
        return Age;
    }
    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    // defining constructor
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
        if (Age>30)
            std::cout<<Name<<"  got promoted!"<<std::endl;
        else
            std::cout<<Name<<" ... sorry No promotion for you!"<<std::endl;
    }
};

class Developer : public Employee {
public:
    string FavProgLan;
    Developer(string name, string company, int age, string favProLan)
        :Employee(name, company, age)
    {
        FavProgLan = favProLan;
    }
    void FixBog(){
        std::cout<<getName()<<" is fix the issue with "<<FavProgLan<<std::endl;
    }
};

int main()
{

    Employee employee_1 = Employee("Antonio", "DDS", 25);
    Employee employee_2 = Employee("Andres", "DDS", 36);

    employee_1.AskForPromotion();
    employee_2.AskForPromotion();

    Developer dev = Developer ("Selena", "DDS", 25, "C++");
    dev.FixBog();
    dev.IntroduceYourself();
    
 }
