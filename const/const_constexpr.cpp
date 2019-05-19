int get_val(){

    return 5;
}


int main(){
    // const var can be evaluated at run time
    // but constexpr must be evaluated at compile time
    const int a = get_val(); 
    constexpr int b = get_val(); //wrong


    return 0;
}



