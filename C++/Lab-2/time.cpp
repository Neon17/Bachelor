#include <iostream>
using namespace std;

class time {
    int hours, minutes, seconds;
    public: 
        time(int hour,int minute,int second)
        :hours(hour),minutes(minute),seconds(second){};
        friend time sumtime(time a, time b);
        void printTime (){
            cout<<"Hours = "<<hours<<endl;
            cout<<"Minutes = "<<minutes<<endl;
            cout<<"Seconds = "<<seconds<<endl;
        }
};
time sumtime (time a, time b){
    int h, m, s;
    h = a.hours+b.hours;
    m = a.minutes+b.minutes;
    if (m>=60){
        h++;
        m = m - 59;
    }
    s = a.seconds+b.seconds;
    time c(h,m,s);
    return c;
}
int main() {
    int h,m,s;
    cout<<"Enter time in hours, minutes and seconds: ";
    cin>>h>>m>>s;
    time a(h,m,s);
    cout<<"Enter time in hours, minutes and seconds: ";
    cin>>h>>m>>s;
    time b(h,m,s);
    time c = sumtime(a,b);
    cout<<"Sum of time : "<<endl;
    c.printTime();
    cout<<endl;
    return 0;
}