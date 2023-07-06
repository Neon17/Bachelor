#include <iostream>
using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        Student(int roll)
        :roll_no(roll) {}
        virtual void DisplayInfo() = 0;
};
class Test:public Student {
    protected:
    float m1, m2;
    public:
        Test(int roll, float a, float b):Student(roll), m1(a), m2(b){

        }
        void DisplayInfo () {
            cout<<"Roll\tSubject 1\tSubject2"<<endl;
            cout<<roll_no<<"\t"<<m1<<"\t"<<m2<<endl;
        }
};
class Sports:public Student {
    protected:
    float s1, s2;
    public:
        Sports(int roll, float a, float b):Student(roll), s1(a), s2(b){

        }
       void DisplayInfo () {
            cout<<"Roll\tSubject 1\tSubject2"<<endl;
            cout<<roll_no<<"\t"<<s1<<"\t"<<s2<<endl;
        }
};
class Result:public Sports, public Test {
    public:
        Result(int roll, float m1, float m2, float s1, float s2):
        Test(roll,m1,m2), Sports(roll,s1,s2){}
        
        void DisplayInfo(){
            cout<<"Printing All Details"<<endl;
            Test::DisplayInfo();
            Sports::DisplayInfo();
        }
};

int main() {
    int roll; float m1, m2, s1, s2;
    cout<<"Roll: ";
    cin>>roll;
    cout<<"Enter marks of two subjects: "<<endl;
    cin>>m1>>m2;
    cout<<"Enter scores of two sports: "<<endl;
    cin>>s1>>s2;
    Result r(roll, m1, m2, s1, s2);
    r.DisplayInfo();
    return 0;
}