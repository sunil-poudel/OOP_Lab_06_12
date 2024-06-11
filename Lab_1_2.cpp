/*2.	WAP to calculate the sum, difference and multiplication of two numbers
 * using single function and display the result in main () */
#include <iostream>
using namespace std;

void operations(){
    int a, b;
    cout<<"Enter two numbers followed by space: ";
    cin>>a>>b;
    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    int choice;
    cout<<"Enter:\n0 for sum\n1 for difference\n2 for product\n3 to exit."<<endl;
    bool flag = true;
    while(flag) {
        cout<<"Enter your choice: ";
        cin>>choice;
        if (choice == 0)
            cout<<"sum of "<<a<<" and "<<b<< " is "<<sum<<endl;
        else if (choice == 1)
            cout<<"difference of "<<a<<" and "<<b<< " is "<<difference<<endl;
        else if(choice==2)
            cout<<"product of "<<a<<" and "<<b<< " is "<<product<<endl;
        else {
            cout << "Exitting..." << endl;
            flag = false;
        }
    }
}
int main(){
    operations();
}