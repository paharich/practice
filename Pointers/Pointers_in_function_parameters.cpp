#include<iostream>

using std::cout;
using std::endl;

void increment(int*);

int main(){
    int n = 10;
    int *ptr = &n;
    increment(ptr);
    cout << "main function: " << n << endl;

    return 0;
}

void increment(int *x){
    int z = 6;
    x = &z;     // resetting address of the pointer x
    cout << "increment function: " << *x << endl;
}