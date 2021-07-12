//Глобальная переменная n определена вне функции
//Следовательно она может использоваться в любой функции

#include<iostream>

void print();

int n = 5;

int main(){
    print();    //  Вызов функции
    n++;    // n = 6 + 1
    std::cout << "n = " << n << std::endl;  // n = 7
    return 0;
}

void print(){
    n++;    // n = 5 + 1
    std::cout << "n = " << n << std::endl;  // n = 6
}