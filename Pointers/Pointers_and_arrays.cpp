#include<iostream>

using std::cout;
using std::endl;

int main(){
/*
    int a[] = {1, 2, 3, 4, 5};
    cout << "a[0] = " << *a << endl;    // a[0] = 1
*/

/*
    const int n = 5;
    int a[n] = {1, 2, 3, 4, 5};

    for(int i = 0 ; i < n ; i++){
        cout << "a[" << i << "]: address = " << a+i << "\tvalue = " << *(a+i) << endl;
    }
*/

/*
    //Указатели на массивы
    int a[5] = {1,2,3,4,5};
    int *ptr = a;
    int a2 = *(ptr + 2);
    cout << "value: " << a2 << endl;    // value: 3
*/

/*
    int a[5] = {1,2,3,4,5};

    for(int *ptr = a ; ptr <=&a[4] ; ptr++){
        cout << "address = " << ptr << "\tvalue = " << *ptr << endl;
    }
*/

/*
    int a[3][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12} };
    int n = sizeof(a) / sizeof(a[0]);     // number of rows
    int m = sizeof(a[0]) / sizeof(a[0][0]); // number of cols

    int *end = a[0] + n * m -1; //pointer on last element 0 + 3 * 4 - 1 = 11
    for(int *ptr = a[0], i = 1 ; ptr <= end; ptr++, i++){
        cout << *ptr << "\t";
        //if the remainder of the integer division is 0
        //moving to a new line
        if(i%m == 0){
            cout << endl;
        }
    } 
*/

    //pointer on symbols array
    char letters[] = "hello";
    char *p = letters;
    cout << (void*)p << endl;  // hello
    
    return 0;
}