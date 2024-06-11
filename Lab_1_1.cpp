//WAP to check whether the given number is prime number or not
#include <iostream>
using namespace std;

int main(){
    int number, x=1, count=0;
    cout<<"Enter any number: ";
    cin>>number;
    while(x<=number){
        if(number%x==0)
            count++;
        x++;
    }
    if(count<2)
        cout<<number<<" is neither prime not composite!";
    else if(count==2)
        cout<<number<<" is prime!";
    else
        cout<<number<<" is composite!";
}