#include<iostream>
#include<string>
using namespace std;
class Rectangle{
private:
double length;
double width;
public:
void setLength(double l){
    if(l<0){
    length=0.00;
    }
    else{
        length = l;
    }
}
double getLength(){
    return length;
}
    void setWidth(double w){
        if (w<0){
            width=0.00;
        }
        else{
            width = w;
    }

}
double getWidth(){
    return width;
}


Rectangle(double l, double w){
    setLength(l);
    setWidth(w);

}
double getArea(){
    return length*width;
}
};

int main(){
Rectangle rect(12.0,-8.0);
cout<<"Length: "<<rect.getLength()<<endl;
cout<<"Width: "<<rect.getWidth()<<endl;
cout<<"Area: "<<rect.getArea()<<endl;


return 0;
}