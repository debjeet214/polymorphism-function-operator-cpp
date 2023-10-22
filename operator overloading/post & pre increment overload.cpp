#include <iostream>
using namespace std;
class x{
    int element;
    public:
        x(){}
        x(int val): element(val){}
        void print(){
            cout<<element<<endl;
        }
        int & operator++(){
            element = element+10;
            return *this;
        }
        int operator++(int dummy){
            int temp = *this;
            ++(*this);
            return temp;
        }
};
int main(){
    int i(100);
    (i++).print();
    i.print();
}
