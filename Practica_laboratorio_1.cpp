#include <iostream>
using namespace std;

int main(){
    long suma{0};
    long i{0};
    while(i<1000000){
        if(i%3==0 || i%5==0)
            suma=suma+i;
      i=i+1;
    }
    cout<<suma;
}