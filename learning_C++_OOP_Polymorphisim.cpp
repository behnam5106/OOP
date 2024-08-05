#include <iostream>

using std::string;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
protected:
    string Name;
private:
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
    //Polymorphisim
    virtual void Work(){
        std::cout<<Name<<" is just thinking ... "<<std::endl;
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
        std::cout<<Name<<" is fix the issue with "<<FavProgLan<<std::endl;
    }
    void Work(){
        std::cout<<Name<<" is writing "<<FavProgLan<<std::endl;
    }
};
class Teacher : public Employee {
public:
    string Subject;
    // Constructor
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work(){
        std::cout<<Name<<" is teaching "<<Subject<<std::endl;
    }
};

int main()
{

    Developer d = Developer ("Selena", "DDS", 25, "C++");
    Teacher t = Teacher("John", "Capra",45, "History");

    d.Work();
    t.Work();

    
 }
