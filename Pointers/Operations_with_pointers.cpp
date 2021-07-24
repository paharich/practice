#include <iostream>
using std::cout;
using std::endl;

int main(){
/*
    //Присвоение
    int a = 10;
    int b = 2;

    int *pa = &a;
    int *pb = &b;

    cout << "Variable a: address = " << pa << "\t value = " << *pa << endl;
    cout << "Variable b: address = " << pb << "\t value = " << *pb << endl;

    pa = pb;    // указатель pa получет и хранит адрес переменной b
    cout << "Variable a: address = " << pa << "\t value = " << *pa << endl;
*/

/*
    //Ссылки на указатели
    int a = 10;
    int b = 6;

    int *p = 0;         //указатель
    int *&pRef = p;     //ссылка на указатель
    pRef = &a;          //через ссылку указателю p присваевается адрес переменой a
    cout << "p value = " << *p << endl; //10
    *pRef = 70;         //изменение значения по адресу, на который указывает указатель
    cout << "a value = " << a << endl; //70

    pRef = &b;      //изменяем адрес, на который указывает указатель
    cout << "p value = " << *p << endl; //6
*/

/*
    //Разыменовывание указателя
    int a = 10;
      
    int *pa = &a;
    int *pb = pa;
      
    *pa = 25;
      
    cout << "Value on pointer pa: " << *pa << endl;  // 25
    cout << "Value on pointer pb: " << *pb << endl;  // 25
    cout << "Value of variable a: " << a << endl;    // 25
*/

/*
    //Адрес указателя
    int a = 10;
    int *pa = &a;
    cout << "address of pointer = " << &pa << endl;     // адрес указателя
    cout << "address stored in pointer = " << pa << endl;   // адрес, который хранится в указателе - адрес переменной a 
    cout << "value on pointer = " << *pa << endl;   // значение по адресу в указателе - значение переменной a
*/

/*
    //Операции сравнения
    int a = 10;
    int b = 20;
    int *pa = &a;
    int *pb = &b;

    if(pa > pb){
        cout << "pa (" << pa << ") is greater than pb (" << pb << ")" << endl;
    }else{
        cout << "pa (" << pa << ") is less or equal pb (" << pb << ")" << endl;
    }
*/

    //Приведение типов
    char c ='N';
    char *pc = &c;
    int *pd = (int *)pc;
    void *pv = (void*)pc;
    cout << "pv = " << pv << endl;
    cout << "pd = " << pd << endl;


    return 0;
}