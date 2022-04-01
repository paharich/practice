#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

class Person{
public:
    Person(string n, int a){
        name = n; age = a;
    }
    void move(){
        cout << name << " is moving" << endl;
    }
    void setAge(int a){
        if(a > 0 && a < 100) age = a;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
private:
    string name;
    int age;
};


int main(){
    setlocale(LC_ALL, "Russian");

    Person tom("Tom", 22);
    cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << endl;
    tom.setAge(31);
    cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << endl;
    tom.setAge(222);
    cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << endl;


    return 0;
}