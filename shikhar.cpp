#include <iostream>
using namespace std;

int main(){
    //pointer iwth garbage valuw
    

    
    int i=6;
    int*m = &i;
    //cout<<"The value is:"<<*m;

    int*k=0;
    k=&i;
    cout<<*k<<endl;
    cout<<k<<endl;

    int a=67;
    int *b=&a;
    cout<<"address of b is"<<b<<endl;
    cout<<"value of b is"<<*b<<endl;
    cout<<"b++"<<*b++<<endl;
    cout<<"(b)++"<<(*b)++<<endl;


    return 0; 
}     
