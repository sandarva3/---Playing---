//Virtual base class is concept in which virtual function is implemented on base class.
//Virtual function allows us to create a pointer of base class type and use that pointer variable to point to any derived class object and invoke
//the method/function of that object thorough pointer using arrow -> operator.


class Base{
public:
	virtual void show(){
		cout << "Base Class";
	}
};
class Derived{
public:
	void show(){
		cout <<"Derived Class";
	}
};

void main(){
	Base *ptr; //create a pointer of base class
	Derived d1;
	ptr = $d1; //Use base class pointer to point to derived class object
	ptr->show(); //invoke show() of that d1 object through arrow operator.
}

//Here we need to use keyword 'virtual' in line 8, otherwise that pointer will call the Base class show() no matter even if we point that pointer to derived
//class object. 