#include <iostream>
using namespace std;
int sum(int , int );
void g();  //function prototype
int main() {
    int x, y;
    cout<<"enter two numbers to add"<<endl;
    cin>>x>>y;
    
    cout<<sum(x,y);
    g();

    return 0;
}
int sum(int a, int b){
  
    return(a+b);
}
void g(){
    cout<<"\nlove you";
}
