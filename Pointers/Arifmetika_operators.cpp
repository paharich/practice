#include<iostream>

using std::cout;
using std::endl;

int main(){

/*    
    int n = 10;
    int *ptr = &n;
    cout << "address = " << ptr << "\t value" << *ptr << endl;

    ptr++;
    cout << "address = " << ptr << "\t value" << *ptr << endl;

    ptr--;
    cout << "address = " << ptr << "\t value" << *ptr << endl;
*/

/*
    double d = 10.6;
    double *pd = &d;

    cout << "Pointer pd: address = " << pd << endl;
    pd++;
    cout << "Pointer pd: address = " << pd << endl;

    char c = 'N';
    char *pc = &c;
    cout << "Pointer pd: address = " << (void*)pc << endl;
    pc++;
    cout << "Pointer pd: address = " << (void*)pc << endl;
*/

/*
    double d = 10.6;
    double *pd = &d;

    cout << "Pointer pd: address = " << pd << endl;
    pd +=2;
    cout << "Pointer pd: address = " << pd << endl;

    char c = 'N';
    char *pc = &c;
    cout << "Pointer pd: address = " << (void*)pc << endl;
    pc -=3;
    cout << "Pointer pd: address = " << (void*)pc << endl;
*/

/*
    int a = 10;
    int b = 23;
    int *pa = &a;
    int *pb = &b;
    int c = pa - pb;

    cout << "pa: " << pa << endl;
    cout << "pb: " << pb << endl;
    cout << "c: " << c << endl;
*/

/*
    //Некоторые особенности операций
    int a = 10;
    int *pa = &a;
    int b = *pa + 20;   // операция со значением, на который указывает указатель
    pa++;               // операция с самим указателем
     
    cout << "b: " << b << endl;  ;  // 30
*/

/*
    int a = 10;
    int *pa = &a;
    cout << "pa: address = " << pa << "\t value = " << *pa << endl;
    int b = (*pa)++;  //инкремент адреса указателя

    cout << "b: value = " << b << endl;
    cout << "pa: address = " << pa << "\t value = " << *pa << endl;
*/


    int a = 10;
    int *pa = &a;
    cout << "pa: address = " << pa << "\t value = " << *pa << endl;
    int b = ++*pa;  //инкремент адреса указателя

    cout << "b: value = " << b << endl;
    cout << "pa: address = " << pa << "\t value = " << *pa << endl;


    return 0;
}