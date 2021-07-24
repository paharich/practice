#include<iostream>

int main(){
 /*
    int x = 10;     // Определяем переменную
    int *p;         // Определяем указатель
    p = &x;         // Указатель получет адрес переменной

//  int y = *p;     //Значение, которое получено в результате операции разыменования, 
                    //можно присвоить другой переменной

//  *p = 45;        //используя указатель, мы можем менять значение по адресу,
                    //который хранится в указателе

//  std::cout << "Address = " << p << std::endl;
//  std::cout << "Value = " << *p << std::endl;

//  std::cout << "Value = " << y << std::endl;

//  std::cout << "X = " << x << std::endl;
*/

    short c = 12;
    int d = 10;
    short s = 2;

    short *pc = &c;     //
    int *pd = &d;       //
    short *ps = &s;     //

    std::cout << "Variable c: address = " << pc << "\tvalue = " << *pc << std::endl;
    std::cout << "Variable d: address = " << pd << "\tvalue = " << *pd << std::endl;
    std::cout << "Variable s: address = " << ps << "\tvalue = " << *ps << std::endl;
    return 0;
}