#include<iostream>
using namespace std;

class Animal{
protected:
string name;
public:
Animal(string n){
    name =n;
}
void eat(){
    cout<<name<<" is eating ";
}

};

class Dog:public Animal{
private:
string breed;
public:
Dog(string n,string b):Animal(n){
    breed=b;
    
}
void bark(){
    cout<<name<<" the "<<breed<<" says woof" ;
}






};

int main(){

Dog myDog("\nBingo","German Sherd");
myDog.eat();
myDog.bark();


return 0;
}