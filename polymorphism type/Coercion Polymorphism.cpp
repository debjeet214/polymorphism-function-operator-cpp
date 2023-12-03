#include <iostream>
using namespace std;

class IntClass {
	int num;
public:
	IntClass(int a) : num(a){}
	operator int() const{
		return num;
	} // conversion from User-defined type to Basic type
};
void show(int x){
	cout << x << endl;
}

int main(){
	IntClass i = 100;
	show(746); // outputs 746
	show(i); // outputs 100
}
