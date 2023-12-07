#include <iostream>
using namespace std;
class Integer {
private:
	int i;
public:
	Integer(int i = 0){
		this->i = i;
	}
	Integer& operator++(){
		++i;
		return *this;
	}
	void display(){
		cout << "i = " << i << endl;
	}
};
int main(){
	Integer i1(3);
	cout << "Before increment: ";
	i1.display();
	Integer i2 = ++i1;
	cout << "After pre increment: " << endl;
	cout << "i1: ";
	i1.display();
    ++i2;
	cout << "i2: "; 
	i2.display();
}
