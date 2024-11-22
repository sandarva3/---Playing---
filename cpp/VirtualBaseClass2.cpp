//Pure Virtual function: They are virtual function which are not defined, they don't have any block of code to execute, they just help derived classes 
//functions to be triggered through pointer of base class.

//Abstract class have atleast one pure virtual function. They're just common interface for many derived classes.
//Abstract class object can't be created directly.

class Draw{
public:
	virtual void shape() = 0; //Pure virtual function: virtual function which are not defined.
};
class Circle: public Draw{
public:
	void shape(){
		cout << "CIRCLE";
	}
};
class Rectangle: public Draw{
public:
	void shape()
{		cout "RECTANGLE";
	}
};


void main(){
	Draw *ptr;
	Circle c1;
	Rectangle r1;
	cout<<"Envoking Circle class shape() through base class pointer";
	ptr = &c1;
	ptr->shape();
	cout <<"Envoking Rectangle class shape() through base class pointer";
	ptr = &r1;
	ptr->shape();
}

//It's also called the Abstract Class cause no direct object can be created through Base class(here Draw class).