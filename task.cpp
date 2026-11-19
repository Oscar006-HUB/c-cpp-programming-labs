#include<iostream>
using namespace std;
class Appliance{
protected:
string brand;
public:
Appliance(string b){
    brand =b;
}
virtual  void turnOn()=0;
virtual ~Appliance(){
}
};

class Fan:public Appliance{
private:
int speed;
public:
Fan(string b, int s):Appliance(b){
    speed =s;
}
void turnOn(){
    cout<<" Spinning: "<<brand<<" fan at speed "<< speed;
}
};

int main(){
Appliance* myDevice = new Fan("Sumsung",8);
    myDevice->turnOn();

    delete myDevice;




    return 0;
}