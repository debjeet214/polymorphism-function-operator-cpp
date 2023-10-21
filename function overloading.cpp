#include <iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
int sum(int a, int b, int c, int d){
    return a+b+c+d;
}
int main() {
    cout<<"adding 4 and 5 we get "<<sum(4,5)<<endl;
    cout<<"adding 4, 6 and 5 we get "<<sum(4,5,6)<<endl;
    cout<<"adding 4, 9, 10 and 5 we get "<<sum(4,5, 9, 10)<<endl;

    return 0;
}
