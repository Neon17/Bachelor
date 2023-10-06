#include <iostream>
using namespace std;

class Stack {
    int *stk;
    int tos;
    int size;
    public:
        Stack(int size){
            this->size = size;
            tos = -1;
            stk = new int(size);
        }
        bool isFull(){
            if (tos==(size-1))
                return true;
            return false;
        }
        bool isEmpty(){
            if (tos==-1)
                return true;
            return false;
        }
        bool Push(int data){
            if (isFull())
                return false;
            tos++;
            stk[tos] = data;
            return true;
        }
        int Pop(){
            if (isEmpty())
                return -16543;
            int a = stk[tos];
            tos--;
            return a;
        }
        int Display(){
            if (isEmpty())
                return -16543;
            return stk[tos];
        }
};

int main(){
    int size, c=0;
    cout<<"Enter the size of stack you want: ";
    cin>>size;
    Stack s(size);
    do {
        cout<<".........................................."<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop" <<endl;
        cout<<"3. Display" <<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice in number: ";
        cin>>c;
        int data;
        switch(c){
            case 1:
                cout<<"Enter integer data: ";
                cin>>data;
                if (s.Push(data)){
                    cout<<"Successfully pushed data.."<<endl;
                }
                else {
                    cout<<"Stack Overflow.."<<endl;
                }
                break;
            case 2:
                data = s.Pop();
                if (data!=-16543){
                    cout<<"Data = "<<data;
                    cout<<"Popped Successfully.."<<endl;
                }
                else {
                    cout<<"Popped failed due to empty stack.."<<endl;
                }   
                break;
            case 3:
                data = s.Display();
                if (data!=-16543){
                    cout<<"Data = "<<data<<endl;
                    cout<<"Displayed Successfully..."<<endl;
                }
                else {
                    cout<<"Display failed..."<<endl;
                }
                break;
            default:
                cout<<"Invalid choice! Retry.."<<endl;
        }
    } while(c!=4);
    return 0;
}
