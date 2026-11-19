#include<iostream>
#include<string>
using namespace std;

void add(int a, int b){
    cout<<"The value is "<<(a+b)<<endl;

};
void add(int a,int b, int c){
    cout<<"The ans:"<<(a+b+c)<<endl;
};
void add(double a,double b){
cout<<"This answer"<<(a+b)<<endl;
};
void add (string w, string y){
cout<< "what is this: "<<(w + y)<<endl;
};
void add(string a,int u){
    cout<<"THIS IS :"<< ( a + to_string(u)) <<endl;
}
class complex{
private:
double real;
double imag;
public:
complex(double r=0.0, double i=0.00){
    real=r;
    imag=i;
}
friend istream&  operator>> (istream& in, complex& c){
    cout<<"Enter real part";
    in>>c.real;
    cout<<"Enter imaginary part";
    in>>c.imag;
    return in;
}
complex operator+(const complex& other){
    return complex(real + other.real,imag +other.imag);
}

complex operator-(const complex& other){
    return complex(real -other.real,imag - other.imag);
}

complex operator==(const complex& other){
    return complex(real==other.real,imag==other.imag);
}
};
int main()
{
add (3,4);
add(4,3,2);
add(2.5,4.1);
add(" Walter " , " kael ");
add("Hello ",21);

complex c1;
complex c2;
cin>>c1;
cin>>c2;

c1+c2;
c1-c2;

    return 0;
}