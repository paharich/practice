#include <iostream>

/*
int add(int, int);
int subtract(int, int);
int operation(int(*)(int, int), int, int);

int main(){
    int a = 10;
    int b = 5;
    int result;
    result = operation(add, a, b);
    std::cout << "result: " << result << std::endl;

    result = operation(subtract, a, b);
    std::cout << "result: " << result << std::endl;

    return 0;
}

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int operation(int(*op)(int, int), int a, int b){
    return op(a,b);
}
*/

int isEven(int);
int isPositive(int);
void action(int(*)(int), int[], int);

int main(){
    int nums[] = { -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    int n = sizeof(nums)/sizeof(nums[0]);

    std::cout << "Even numbers: " << std::endl;
    action(isEven, nums, n);

    std::cout << "Positive numbers: " << std::endl;
    action(isPositive, nums, n);

    return 0;
}

int isEven(int x){
    return x % 2 == 0;
}

int isPositive(int x){
    return x > 0;
}

void action(int(*condition)(int), int numbers[], int n){
    for( int i = 0 ; i < n ; i++){
        if(condition(numbers[i]) != 0){
            std::cout << numbers[i] << "\t"; 
        }
    }
    std::cout << std::endl;
}