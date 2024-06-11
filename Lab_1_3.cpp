/* 3.	WAP to create a function which takes two arguments and returns the minimum value.
 * Call the function and assign it to a variable. Again,
 * call this function and assign the value - 100. Trace the output */
#include <iostream>
using namespace std;

int minimum(int a, int b);
int main(){
    int number1 = minimum(10, 5);
    cout<<number1;
//    int number2 = minimum(-100);
}

int minimum(int a, int b){
    if(a>b)
        return b;
    else
        return a;
}