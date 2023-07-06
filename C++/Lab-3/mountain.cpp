#include <iostream>
using namespace std;

class Mountain {
    string name;
    float height;
    string location;
    public: 
        Mountain(string n, float h, string l)
        :name(n), height(h), location(l){}
        void DisplayInfo() {
            cout<<"Name\tHeight\tLocation"<<endl;
            cout<<name<<"\t"<<height<<"\t"<<location<<endl;
        }
        friend void CmpHeight(Mountain a, Mountain b);
};

void CmpHeight (Mountain a, Mountain b){
     cout<<"Highest Peak"<<endl;
    if (a.height>b.height)
        a.DisplayInfo();
    else 
        b.DisplayInfo();
}

int main() {
    Mountain a("Mount Everest",8848,"Nepal");
    Mountain b("Mount K2",8830, "Pakistan");
    CmpHeight(a,b);
    return 0;
}