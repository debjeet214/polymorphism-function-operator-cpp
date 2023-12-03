#include <iostream>
using namespace std;
class Image {
public:
	Image(){}
	virtual void display() = 0;
};
class Jpg : public Image {
public:
	Jpg(){}
	void display(){
		cout << "JPG Image File" << endl;
	}
};
class Png : public Image {
public:
	Png(){}
	void display(){
		cout << "PNG Image File" << endl;
	}
};
int main(){
	Image* img;
	Jpg jg;
	Png pg;
	img = &jg;
	// invoking display() func of Jpg
	img->display();
	img = &pg;
	// invoking display() func of Png
	img->display();
	return 0;
}
