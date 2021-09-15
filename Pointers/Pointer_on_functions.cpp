#include<iostream>

using std::cout;
using std::endl;

/*
void hello();
void goodbye();

int main(){
    void (*message)();

    message = hello;
    message();
    message = goodbye;
    message();


    return 0;
}

void hello(){
    cout << "hello world" << endl;
}

void goodbye(){
    cout << "good bye world" << endl;
}
*/

/*
int add(int, int);
int subtract(int, int);

int main(){
    int a = 10;
    int b = 5;
    int result;
    int (*operation)(int a, int b);

    operation = add;
    result = operation(a, b);
    cout << "result = " << result << endl;  // 15

    operation = subtract;
    result = operation(a, b);
    cout << "result = " << result << endl;  // 5

    return 0;
}

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}
*/


    //arrays pointers on functions

void add(int, int);
void subtract(int, int);
void multiply(int, int);

int main(){
    int a = 10;
    int b = 5;
    void (*operations[3])(int, int) = {add, subtract, multiply};

    //gettint array lenght
    int lenght = sizeof(operations)/sizeof(operations[0]);

    for(int i = 0 ; i < lenght ; i++){
        operations[i](a, b);    //calling function by pointer
    }

    return 0;

}

void add(int x, int y){
    cout << "x + y = " << x + y << endl;
}

void subtract(int x, int y){
    cout << "x - y = " << x - y << endl;
}

void multiply(int x, int y){
    cout << "x * y = " << x * y << endl;
}