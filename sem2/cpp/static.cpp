//Static variables and functions
#include<iostream>
using namespace std;

class Count {
	static int  count;
public:
	static void showCount() { //Static functions can only call/access other static functions or variables.
		cout << "Count: " << count << endl;
	}
	void increment() {
		count++;
	}
};
//Global static variables are automatically initialized to 0 after creation.
int Count::count = 0;//But static variables inside class should be manually initialized to 0 like this.

int main() {
	Count::showCount(); //We can also call static functions without object, through classname only.
	Count c1;
	Count c2;
	c1.increment();
	c2.increment();
	c1.showCount();
	c2.showCount();
	return 0;
}