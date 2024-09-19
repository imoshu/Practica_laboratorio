#include <iostream>

bool esPalindromo(int num);
int invertirNum(int num);

int main(){
    int producto = 0;
    int mayorPalindromo = 0;
    
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            producto = i * j;
            
            if(esPalindromo(producto) && mayorPalindromo == 0){
                mayorPalindromo = producto;
            }
            else if(esPalindromo(producto) && mayorPalindromo != 0){
                if(producto > mayorPalindromo){
                    mayorPalindromo = producto;
                }
            }
        }
    }
    
    std::cout << mayorPalindromo << std::endl;
    return 0;
}

bool esPalindromo(int num){
    if(invertirNum(num) == num){
        return true;
    }
    else{
        return false;
    }
}

int invertirNum(int n){
    int numInvertido = 0;
    int residuo = 0;
    while(n != 0){
        residuo = n % 10;
        numInvertido = numInvertido * 10 + residuo;
        n /= 10;
    }
    return numInvertido;
}
