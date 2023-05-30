#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,4,5,6,3,7,3,5,8,12};
    cout<<"add of 1st array loc "<<arr<<endl;
    cout<<"value at 5th index in array "<<arr[5]<<endl;
    cout<<"address of array 1st location "<<&arr<<endl;
    cout<<"address of 0th index of array "<<&arr[0]<<endl;

    int *p=&arr[0];
    cout<<"address to which the pointer is pointing"<<p<<endl;
    
  
    cout<<"adress of the pointer itself"<<&p<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    return 0;
}