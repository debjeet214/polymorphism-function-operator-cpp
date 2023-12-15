#include <iostream>
using namespace std;
class multiply {
private:
	int num;
public:
	multiply (int x): num(x){};
	multiply operator *(const multiply & other)const{
	    multiply result(num*2*other.num);
	    return result;
	}
	void display(){
	    cout<<"the overloaded result is: "<<num<<endl;
	}
};
int main(){
	multiply one(5);
	multiply second(3);
	multiply res = one*second;
	res.display();
}
