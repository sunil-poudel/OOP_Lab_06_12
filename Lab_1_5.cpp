/* 5.	WAP to create a dynamic array of size
  n and calculate the average of that array. */
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number of elements of array: ";
    float n, sum=0;
    cin>>n;

    float* array = new float[(int)n];
    cout<<"Start entering numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>array[i];
        sum+=array[i];
    }
    float average = sum/n;
    cout<<"average is: "<<average;

    delete[] array;
}