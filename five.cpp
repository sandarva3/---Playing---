//Operator Overloading to Concatenate two strings.
//Overloading + operator.
#include<iostream>
#include<string.h>
using namespace std;

class istring {
	string str1;
public:
	void setStr() {
		cout << "Enter string 1 and 2: ";
		cin >> str1;
	
}	void getStr() {
		cout << "Str1 = " << str1;
	}
	istring operator +(istring& s) {
		istring temp;
		temp.str1 = str1 + s.str1;
		return temp;
	}
};

int main() {
	istring s1;
	s1.setStr();
	istring s2;
	istring s3;
	s2.setStr();
	s3 = s1 + s2;
	cout << "value of str3: ";
	s3.getStr();
	return 0;
}