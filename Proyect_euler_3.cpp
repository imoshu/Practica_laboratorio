#include <iostream>
using namespace std;

int main(){
    long long i=1;
    long long num=600851475143;
    while(i < num){
        if(num%i==0 && i!= num)
            num=num/i;
        i++;
    }
    cout<<"El resultado es "<<num;
    return 0;
}