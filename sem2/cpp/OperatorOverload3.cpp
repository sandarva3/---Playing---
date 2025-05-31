#include<iostream>
#include<string.h>
using namespace std;

class istring{
    char str[100];
public:
    istring(char str1[]){
        strcpy(str, str1);
    }
    
    istring operator +(istring &str2){
        istring temp("");
        strcpy(temp.str, str);
        strcat(temp.str, str2.str);
        return temp;
    }
    
    void show(){
        cout << str << endl;
    }
};

int main(){
    istring s1("HELLO");
    istring s2("World");
    istring s3 = s1 + s2;
    cout << "String 1: ";
    s1.show();
    cout << "String 2: ";
    s2.show();
    cout << "String 3: ";
    s3.show();
    
    return 0;
}