#include <iostream>
using namespace std;

int addNumbers(int num1,int num2){
    return num1+num2;
}

int subtractNumbers(int num1,int num2){
    return num1-num2;
}

int multiplyNumbers(int num1,int num2){
    return num1*num2;
}

int main(){
    int a=12;
    int b=4;
    cout<<"Sum: "<<addNumbers(a,b)<<endl;
    cout<<"Difference: "<<subtractNumbers(a,b)<<endl;
    cout<<"Product: "<<multiplyNumbers(a,b)<<endl;
    
    return 0;
}
