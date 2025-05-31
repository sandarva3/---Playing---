#include<iostream>
using namespace std;
#define TSIZE 10

class Hash{
public:
    int table[TSIZE];
    Hash(){
        for(int i=0; i<TSIZE; i++){
            table[i] = -1;
        }
    }

    int hashfn(int key){
        return key % TSIZE;
    }

    void insert(int key){
        int index = hashfn(key);

        if(table[index] == -1){
            table[index] = key;
            cout << "inserted";
            return;
        }
        else{
            int i = 1;
            int probe = (index + i*i) % TSIZE;
            while(table[probe] != -1 && i<TSIZE){
                i++;
                probe = (index + i*i) % TSIZE;
            }
            if(i == TSIZE){
                cout << "No space found.";
                return;
            }
            table[probe] = key;
            cout << "Inserted after collison";
            return;
        }
    }
};

int main(){
    Hash h1;
    h1.insert(10);
    h1.insert(20);
    h1.insert(30);
    h1.insert(25);
    h1.insert(35);
    h1.insert(35);
    h1.insert(35);
    h1.insert(35);
    h1.insert(35);

    return 0;
}