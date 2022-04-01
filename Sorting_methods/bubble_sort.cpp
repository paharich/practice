#include<iostream>

int main(){
    int array[10];  //объявление массива из 10 ячеек

    std::cout << "Enter 10 numbers for fill array" << std::endl;

    for(int i = 0 ; i < 10 ; i++){
        std::cin >> array[i];   //"Читаем" элементы в массиве
    }

    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 9 ; j++){
            if(array[j] > array[j + 1]){
                int b = array[j];   //Доп переменная
                array[j] = array[j + 1];    //Меняем местами
                array[j + 1] = b;   //Значения элементов
            }
        }
    }

    std::cout << "Array in sorted form: ";

    for(int i = 0 ; i < 10 ; i++){
        std::cout << array[i] << " ";   //вывод элементов массива
    }

    return 0;
}