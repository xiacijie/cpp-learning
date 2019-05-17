#include<iostream>
#include<string>

using std::string; using std::cout;


int main(){

    string s("hello world");
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it){
        *it = toupper(*it);


    }
    cout << s + "\n";
    return 0;


}
