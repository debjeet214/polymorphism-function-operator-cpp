#include<iostream>
using namespace std;
class base{
    public:
        int var_b;
        virtual void display(){  
            cout<<"it is base class display function "<<endl;
            cout<<"the base class variable is: "<<var_b<<endl;
        }
};

class derive: public base{
    public:
        int var_d =8;
        void display(){
            cout<<"it is derive class display function "<<endl;
            cout<<"the base class variable is: "<<var_d<<endl;
        }
};

int main(){
    base b_obj;
    derive d_obj;
    base * b_pointer;
    b_pointer = & d_obj;
    b_pointer -> var_b = 20;
    b_pointer->display();
}
