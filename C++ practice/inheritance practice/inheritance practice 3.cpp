#include<iostream>
using namespace std;
class Vehicle {
protected:
	float speed;
public:
	Vehicle(float speed) {
		this->speed = speed;
	};
	float getSpeed() {
		return speed;
	}
};

class Engine {
protected:
	float horsePower;
public:
	Engine(float horsePower) { this->horsePower = horsePower; }
	float get_horsepower() {
		return horsePower;
	}
};

class Car :public Vehicle, public Engine {
private:
	string model,brand;
public:
	Car(string model, string brand, float horsePower, float speed) : Vehicle(speed), Engine(horsePower) {
		this->model = model;
		this->brand = brand;
	}
	void display_information() {
		cout << "Model of the car is " << model
			<< "\nBrand of the car is " << brand
			<< "\nhorse power of the car is " << horsePower
			<< "\nspeed of the car is " << speed << endl;
	}
};



int main() {
	Car c1("XYZ","Bugatti",5000.98,261);
	c1.display_information();
}