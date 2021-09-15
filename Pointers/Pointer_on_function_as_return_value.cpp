#include <iostream>

/*
void goodmorning();
void goodevening();
void (*message(int))();

int main(){
    void(*action)();    //указатель на выбранную функцию
    action = message(15);
    action();   //выполняем полученную функцию
    return 0;
}

void(*message(int hour))(){
    if (hour > 12)
        return goodevening;
    else
        return goodmorning;
}

void goodmorning(){
    std::cout << "Good morning" << std::endl; 
}

void goodevening(){
    std::cout << "Good evening" << std::endl;
}
*/

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int (*select())(int, int);

int main(){
    int x = 8;
    int y = 5;
    std::cout << "x = " << x << "\ty = " << y << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Exit" << std::endl;

    int(*action)(int, int);     //указатель на выбранную функцию
    int result;     //результат функции
    while (1) {//не знаю что ему здесь не понравилось, но g++ выполнил всё что требовалось
        action = select();  //получаем указатель на функцию
        if (action == NULL)
            break;
        result = action(x, y);  //выполняем функцию
        std::cout << "Result: " << result << std::endl;
}
std::cout << "The end" << std::endl;

return 0;
}

int(*select())(int, int){
    int choice; //выбранный пункт
    //Массив указателей на функции, которые будут возвращаться
    int(*actions[])(int x, int y) = {add , subtract, multiply};
    //выбираем действие по номеру
    std::cout << "Enter action (1, 2, 3, 4): ";
    std::cin >> choice;
    //возвращаяем нужную функцию
    if (choice > 0 && choice < 4){
        return actions[choice - 1];
    }else 
        return NULL;
}

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int multiply(int x, int y){
    return x * y;
}