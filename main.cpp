#include <iostream>
using namespace std;
//Created by Atharva
int addNumbers(int num1,int num2){
    return num1+num2;
}

int subtractNumbers(int num1,int num2){
    return num1-num2;
}

int multiplyNumbers(int num1,int num2){
    return num1*num2;
}
//Edited by Sarthak
float dividenumbers(int x,int y){
    return x/y;
}

int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}


int main(){
    int a=12;
    int b=4;
    cout<<"Sum: "<<addNumbers(a,b)<<endl;
    cout<<"Difference: "<<subtractNumbers(a,b)<<endl;
    cout<<"Product: "<<multiplyNumbers(a,b)<<endl;
    //Edited by Sarthak
    cout<<"Division :"<<dividenumbers(a,b)<<endl;
    cout<<"GCD :"<<gcd(a,b)<<endl;
    return 0;
}
