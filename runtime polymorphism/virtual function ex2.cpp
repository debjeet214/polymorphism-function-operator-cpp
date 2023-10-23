#include<iostream>
using namespace std;

class derive{
    public:
        int var_d =8;
        virtual void display(){
            cout<<"it is derive class display function "<<endl;
            cout<<"the base class variable is: "<<var_d<<endl;
        }
};
class base: public derive{
    public:
        int var_b =10;
        void display(){
            cout<<"it is base class display function "<<endl;
            cout<<"the base class variable is: "<<var_b<<endl;
        }
};

int main(){
    base b_obj;
    derive d_obj;
    derive * d_pointer;
    d_pointer = & b_obj;
    d_pointer -> var_d = 20;
    d_pointer->display();
}
