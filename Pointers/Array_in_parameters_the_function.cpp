#include<iostream>

using std::cout;
using std::endl;

/*
    //the transfer in function the array
void print(int[]);

int main(){
    int nums[] = {1,2,3,4,5};
    print(nums);
    return 0;
}

void print(int numbers[]){
    cout << "First number: " << numbers[0] << endl;
}
*/

/*
    //an array is passed to the function, but the parameter
    //is a pointer to the first element of the array.
void print(int*);

int main(){
    int nums[] = {1,2,3,4,5};
    print(nums);
    return 0;
}

void print(int *numbers){
    cout << "First number: " << *numbers << endl;
}
*/

/*
    //passed end of array marker(1)
void print(char[]);

int main(){
    char chars[] = "Hello";

    print(chars);


    return 0;
}

void print(char chars[]){
    for (int i = 0 ; chars[i] != '\0' ; i++){
        cout << chars[i] << "\t";
    }
}
*/

/*
    //passed end of array marker(2)
void print(int[], int);

int main(){
    int nums[] = {1,2,3,4,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    print(nums, n);

    return 0;
}

void print(int numbers[], int n){
    for (int i = 0 ; i < n ; i++)
    cout << numbers[i] << "\t";
}
*/

/*
    //passed end of array marker(3)
void print(int*, int*);

int main(){
    int nums[] = {1,2,3,4,5};
    int *begin = std::begin(nums);
    int *end = std::end(nums);

    print(begin, end);
    return 0;   
}

void print(int *begin, int *end){
    for (int *ptr = begin ; ptr != end ; ptr++){
        cout << *ptr << "\t";
    }
}
*/

/*
    //Constant arrays
void print(const int*, const int*);
void twice(int*, int*);

int main(){
    int nums1[] = {1,2,3,4,5};
    int *begin = std::begin(nums1);
    int *end = std::end(nums1);
    print(begin, end);
    cout << endl;

    int nums2[] = {1,2,3,4,5};
    begin = std::begin(nums2);
    end = std::end(nums2);
    twice(begin, end);
    for (int *ptr = begin ; ptr != end ; ptr++){
        cout << *ptr << "\t";
    }
    cout << endl;

    return 0;
}

void print(const int *begin, const int *end){
    for (const int *ptr = begin ; ptr != end; ptr++){
        cout << *ptr << "\t";
    }
}

void twice(int *begin, int *end){
    for (int *ptr = begin; ptr != end; ptr++){
        *ptr = *ptr * 2;
    }
}
*/

    //Transferring a multidimensional array

/*
void print(int (*numbers)[3]);   //указатель на массив

void print(int *numbers[3]);     //массив указателей
*/

/*
void print(int(*)[3], int);

int main(){
    int table[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
    //количество строк или подмассивов
    int rowsCount = sizeof(table) / sizeof(table[0]);

    print(table, rowsCount);

    return 0;
}

void print(int (*numbers)[3], int rowsCount){
    //количество столбцов или элементов в каждом подмассиве
    int columsCount = sizeof(*numbers) / sizeof(*numbers[0]);
    for (int i = 0 ; i < rowsCount ; i++){
        for (int j = 0 ; j < columsCount ; j++){
            cout << numbers[i][j] << "\t";
        }
    }
}
*/

