#include <bits/stdc++.h>
using namespace std;
class Integer {
private:
	int p;
public:
	Integer(int i = 0){
		p = i;
	}
	Integer operator++(int){
		Integer temp = *this;
		++p;
		return temp;
	}
	void display(){
		cout << "i = " << p << endl;
	}
};
int main(){
	Integer i1(3);
	cout << "Before increment: ";
	i1.display();
	Integer i2 = i1++;
	cout << "After post increment: " << endl;
	cout << "i1: ";
	i1.display();
	cout << "i2: "; 
	i2.display();
}
