#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

class Person{
    public:
    string name;
    int age;
    Person(string n, int a);
    void move();

};
Person::Person(string n , int a){
    name = n , age = a;
}
void Person::move(){
    cout << name << " is moving" << endl;
}

int main(){
    Person tom("Tom", 22);
    cout << "Name: " << tom.name << "\tAge: " << tom.age << endl;
    tom.move();
    return 0;
}
