#include <iostream>
using namespace std;

class AbstractEmployee{
     virtual void AskForPromotion()=0;

};


class Employee:AbstractEmployee {
private: 
   string Name;
   string Company;
   int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if (age >= 18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        std::cout << "Hello I am " << Name << endl; 
        std::cout << "I work for company called " << Company << endl; 
        std::cout << "And I am " << Age << endl; 
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion() {
        if(Age >=30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry NO promotion for you" << endl;
        

    }
}; 
int main()
{
    Employee employee1 = Employee("Tehreem", "\'My own self\'", 78);
    Employee employee2 = Employee ("Mahreen", "Everva", 20);
    
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    
    
}