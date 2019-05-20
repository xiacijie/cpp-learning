#include<string>
#include<iostream>
using namespace std;

class printData {
    public:
        void print(int i){
            cout << "int: "<< i << endl;
        }

        void print(double f){
            cout << "float: " << f << endl;
        }

        void print(string c){
            cout << "string: " << c << endl;
        }


};


int main(){

    printData pd;
    pd.print(5);
    pd.print(500.263);
    pd.print("Hello C++");

    return 0;

}
