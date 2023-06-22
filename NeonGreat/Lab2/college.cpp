#include <iostream>
using namespace std;

class PEC;

class GCES {
    int n;
    public: 
        void takeValue(int n){
            this->n = n;
        }
        friend void compare(GCES g, PEC p);
};
class PEC {
    int n;
    public: 
        void takeValue(int n){
            this->n = n;
        }
        friend void compare(GCES g, PEC p);
};

void compare (GCES g, PEC p){
    if (g.n>p.n){
        cout<<"GCES has greater number of students"<<endl;
    }
    else {
        cout<<"PEC has greater number of students"<<endl;
    }
}
int main() {
    GCES g;
    PEC p;
    int a,b;
    cout<<"Enter number of students in GCES: ";
    cin>>a;
    cout<<"Enter number of students in PEC: ";
    cin>>b;
    g.takeValue(a);
    p.takeValue(b);
    compare(g,p);
    return 0;
}