#include<iostream>
#include<vector>

using std::cout; using std::endl;
using std::begin; using std::end;
int main(){

    int a[] = {1,2,3,4};
    int *pbegin = begin(a);
    int *pend = end(a);
    cout <<  *pbegin << endl;
    cout << *(pend-1) << endl;
    
    return 0;
}
