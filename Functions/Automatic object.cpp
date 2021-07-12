
#include<iostream>

void print(int);

int main(){
    int x = 2;  //Объявление целочисленной переменной 'x'
    print(x);   //Вызов функции. n = 10
    // n++; так сделать нельзя, так как z определена в функции main
    return 0;
}

void print(int x){
    int n = 5 * x;  //Объявление целочисленной переменной 'n'
    // z++; так сделать нельзя, так как z определена в функции main
    std::cout << "n = " << n << std::endl;
}