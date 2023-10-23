#include <iostream>
#include<string>
using namespace std;
class learn{
    protected:
        string topic;
        int days;
    public:
        learn(string s, int d){
            topic = s;
            days = d;
        }
        virtual void display(){}
};
class language1 : public learn{
    float rate;
    public:
        language1(string s, int d, float r) : learn(s, d){
            rate = r;
        }
        void display(){
            cout<<"I have leanred "<<topic<<" in "<<days<<" days"<<endl;
            cout<<"i will give myself rating of "<<rate<<" out of 10"<<endl;
        }
};

// class language2 : public learn{
//     float rate;
//     public:
//         language2(string s, int d, float r) : learn(s, d){
//             rate = r;
//         }
//         void display(){
//             cout<<"I have leanred "<<topic<<" in "<<days<<" days"<<endl;
//             cout<<"i will give myself rating of "<<rate<<" out of 10"<<endl;
//         }
// };

// class language3 : public learn{
//     float rate;
//     public:
//         language3(string s, int d, float r) : learn(s, d){
//             rate = r;
//         }
//         void display(){
//             cout<<"I have leanred "<<topic<<" in "<<days<<" days"<<endl;
//             cout<<"i will give myself rating of "<<rate<<" out of 10"<<endl;
//         }
// };

// class language4 : public learn{
//     float rate;
//     public:
//         language4(string s, int d, float r) : learn(s, d){
//             rate = r;
//         }
//         void display(){
//             cout<<"I have leanred "<<topic<<" in "<<days<<" days"<<endl;
//             cout<<"i will give myself rating of "<<rate<<" out of 10"<<endl;
//         }
// };

// class language5 : public learn{
//     float rate;
//     public:
//         language5(string s, int d, float r) : learn(s, d){
//             rate = r;
//         }
//         void display(){
//             cout<<"I have leanred "<<topic<<" in "<<days<<" days"<<endl;
//             cout<<"i will give myself rating of "<<rate<<" out of 10"<<endl;
//         }
// };
int main(){
    string topic;
    int days;
    float rate;
    int words;

    topic ="C"; 
    days = 150;
    rate = 7.1;
    language1 l1(topic, days, rate);
    
    topic ="C++"; 
    days = 60;
    rate = 8.2;
    language1 l2(topic, days, rate);
    
    topic ="HTML"; 
    days = 15;
    rate = 8.62;
    language1 l3(topic, days, rate);
    
    topic ="CSS"; 
    days = 20;
    rate = 8.11;
    language1 l4(topic, days, rate);
    
    topic ="JAVASCRIPT"; 
    days = 50;
    rate = 5.62;
    language1 l5(topic, days, rate);
    
    learn *lan[5];
    lan[0] = &l1;
    lan[1] = &l2;
    lan[2] = &l3;
    lan[3] = &l4;
    lan[4] = &l5;

    lan[0] -> display();
    lan[1] -> display();
    lan[2] -> display();
    lan[3] -> display();
    lan[4] -> display();
    return 0;
}
