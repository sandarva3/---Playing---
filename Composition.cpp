//Composition: When an object has an another object. It's like an object also contains another object
//inside it. The object with have 'has-a' relationship with another object, unlike inheritance which is
// 'is-a' relationship. The lifetime of contained object is depended upon the lifetime of container object.

#include<iostream>
using namespace std;

class Engine {
public:
	void start() {
		cout << "Engine Started";
	}
};

class Car {
public:
	Engine engine;
	void startCar() {
		engine.start();
	}
};

void main() {
	Car c1;
	c1.startCar();
}

