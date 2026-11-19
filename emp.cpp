#include<iostream>
using namespace std;





class Employee{
protected:
string name;
double baseSalary;
public:
Employee(string n ,double s){
    name = n;
    baseSalary = s;
}
virtual void calculateSalary(){
cout<<name<< " Salary " <<baseSalary;
}

virtual ~Employee(){

}

};
class Manager:public Employee{
private:
double bonus;
public:
Manager(string n, double s, double b):Employee(n,s){
    bonus = b;
}
void calculateSalary(){
    cout<<name<< " :Manager total Salary: "<<baseSalary + bonus;
}
};

int main(){

Employee* emp = new Manager("Wilson",100000.0,1500.0);
emp ->calculateSalary();

delete emp;

return 0;
}