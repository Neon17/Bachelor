#include <iostream>
using namespace std;

class compare {
    int n1,n2;
    public: 
        void getValue (int n1, int n2){
            this->n1 = n1; 
            this->n2 = n2;
        }
        friend void comparing (compare c);
};

void comparing (compare c){
    if (c.n1>c.n2){
        cout<<"n1 = "<<c.n1<<endl;
    }
    else {
        cout<<"n2 = "<<c.n2<<endl;
    }
}

int main(){
    int a,b;
    compare c;
    cout<<"Enter 2 values: ";
    cin>>a>>b;
    c.getValue(a,b);
    comparing(c);
    return 0;
}
