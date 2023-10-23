#include<iostream>
using namespace std;
class base{
    public:
        int var_b;
        void display(){
            cout<<"it is base class display function "<<endl;
            cout<<"the base class variable is: "<<var_b<<endl;
        }
};

class derive: public base{
    public:
        int var_d;
        void display(){
            cout<<"it is base class display function "<<endl;
            cout<<"the base class variable is: "<<var_d<<endl;
        }
};

int main(){
    base b_obj;                // base class object
    derive d_obj;              // derive class object
    base * b_pointer;          // base class type pointer
    b_pointer = & d_obj;       // base class pointer to derive class object
    b_pointer -> var_b = 20;   // accessing the var-b by base pointer & assign a value to that address
    (*b_pointer).display();    // accessing public class method using the pointer of that class
//          ^
//          |   same just different way
//  b_pointer->display();
//  b-pointer -> var_d =25;   --> this line will give error as the base class pointer can't acess thed erived class memebers even the pointer is pointing to derive class object
}
