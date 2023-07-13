#include <iostream>
using namespace std;

class Vehicle  {
	protected:
	int engine; //4 for 4 stroke, 3 for 3 stroke
	int tyres; //number  of tires
	public:
		Vehicle(int a,int b)
		:engine(a),tyres(b) {}
		virtual void drive() {
			cout<<"Driving a vehicle!"<<endl;
			cout<<"Engines = "<<engine<<endl;
			cout<<"Tyres = "<<tyres<<endl;
		}
		virtual void brake() = 0;
};
class Car: public Vehicle {
	public:
		Car(int a, int b):Vehicle(a,b){}
		void drive() {
			cout<<"This overrides drive class of base class 'Vehicle'"<<endl;
			cout<<"Driving a car!"<<endl;
			cout<<"Engines = "<<engine<<endl;
			cout<<"Tyres = "<<tyres<<endl;
		}
		void brake() {
			cout<<"Applying brakes in car..."<<endl;
		}
};
class Bus: public Vehicle {
	public:
		Bus(int a, int b):Vehicle(a,b){}
		void drive() {
			cout<<"This overrides drive class of base class 'Vehicle'"<<endl;
			cout<<"Driving a bus!"<<endl;
			cout<<"Engines = "<<engine<<endl;
			cout<<"Tyres = "<<tyres<<endl;
		}
		void brake() {
			cout<<"Applying brakes in bus..."<<endl;
		}
};
int main() {
	Vehicle *v;
	Car c(6,4);
	v = &c;
	v->drive();
	v->brake();
	return 0;
}
