#include<iostream>

using std::cout;
using std::endl;

int main(){
/*
    //Указатели на константы
    const int a = 10;
    const int *pa = &a;
    cout << "address = " << pa << "\t value = " << *pa << endl;
*/

/*
    int a = 10;
    const int *pa = &a;
    cout << "value = " << *pa << endl;  //10
    a = 22;
    cout << "value = " << *pa << endl;  //22
    //*pa = 34; //так делать нельзя
*/

/*
    const int a = 10;
    const int *pa = &a;
    const int b = 45;
    pa = &b;
    cout << "value = " << *pa << endl;  //45
    cout << "value = " << a << endl;    //10 - константа а не изменяется
*/

/*
    //Константный указатель
    int a = 10;
    int *const pa = &a;
    cout << "value = " << *pa << endl;  // 10
    *pa = 22;                           // Меняем значение
    cout << "value = " << *pa << endl;  // 22

    int b = 45;
    // pa = &b;     // нельзя так делать
*/

/*
    //Константный указатель на константу
    int a = 10;
    const int *const pa = &a;

    //*pa = 22;     // нельзя так делать

    int b = 45;
    //pa = &b;      // нельзя так делать
*/

    return 0;
}