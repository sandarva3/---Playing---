//Type conversion from Class to Normal data type, here we overload the type conversion operator.

class Roll{
	int roll;
public:
	Roll() {}
	Roll(int x){
		roll = x;
	}
	//overload the type conversion operator
	// Operator: The special symbols or keywords which tells compiler to perform specific action or operation.
	//Here it's not a function because it doesn't return any value by default.  we're making it to return a value, so we're overloading normal 
	//type conversion operator.
	//They're also known as casting operator function because they're special operator which allows object of class to be converted to another data type.
	operator int(){
		return roll;
	}
	int get(){
		return roll;
	}
};

void main(){
	Roll rollno(5);
	int a = rollno;
	cout << "class type object is converted to integer type.";
	cout <<"The value of 'a' :" << a;
}