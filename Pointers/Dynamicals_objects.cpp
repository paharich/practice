#include <iostream>

/*
int main(){
    setlocale(LC_CTYPE, "russian");

/*
    int *p1 = new int();
    std::cout << "p1: " << *p1 << std::endl;

    int *p2 = new int(12);
    std::cout << "p2: " << *p2 << std::endl;
*/

/*
    int *p1 = new int(12);
    std::cout << "p1: " << *p1 << std::endl;

    delete p1;

    std::cout << "p1:" << *p1 << std::endl;
*/


int* createPtr (int value){
    int *ptr = new int (value);
    return ptr;
}

void usePtr (){
    int *p1 = createPtr(10);
    std::cout << *p1 << std::endl;
    delete p1;
}

int main (){
    usePtr();

    return 0;
}