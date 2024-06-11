/* 3.	WAP to create a function which takes two arguments and returns the minimum value.
 * Call the function and assign it to a variable. Again,
 * call this function and assign the value - 100. Trace the output */
#include <iostream>
using namespace std;

int minimum(int a, int b);
int main(){
    int a=10, b=5;
    int number1 = minimum(10, 5);
    cout<<"The minimum between "<<a<<" and "<<b<<" is "<<number1<<endl;
    int number2 = minimum(number1, -100);
    cout<<"The minimum between "<<number1<<" and "<<-100<<" is "<<number2<<endl;
}

int minimum(int a, int b){
    if(a>b)
        return b;
    else
        return a;
}
