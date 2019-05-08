#include<iostream>


int main(){
    int a = 99;
    int &ref_a = a;
 
    int &ref_ref_a = ref_a; // it is still refering a 
    std::cout << ref_a << "-" << ref_ref_a << std::endl;
    return 0;
}