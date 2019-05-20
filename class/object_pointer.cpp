#include <iostream>


using namespace std;


class A{
    public:
        int value = 1;

};



void printVal(A& a){
    a.value = 3;
    cout << a.value << endl;
}


int main(){
    A a;
    a.value = 2;
    printVal(a);
    cout << a.value << endl;
    return 0;
}
