#include <iostream>
using namespace std;

class base {
public:
	void fun_1() { cout << "base-1\n"; }
	virtual void fun_2() { cout << "base-2\n"; }
	virtual void fun_3() { cout << "base-3\n"; }
	virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base {
public:
	void fun_1() { cout << "derived-1\n"; }
	void fun_2() { cout << "derived-2\n"; }
	void fun_4(int x) { cout << "derived-4\n"; }
};

int main()
{
	base* p;
	derived obj1;
	p = &obj1;
	
	p->fun_1(); // Early binding because fun1() is non-virtual in base
	p->fun_2();  // Late binding (RTP)

	p->fun_3();  // Late binding (RTP) but return base func as there is no derive class function with same name

	p->fun_4();  // Late binding (RTP) but return base func as the derive function have argument pass. 
	// taking ex [ p->fun_4(6); ]
	// Early binding but this function call is
	// illegal (produces error) because pointer
	// is of base type and function is of
	// derived class

	return 0;
}
