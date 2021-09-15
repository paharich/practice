#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

class Person{
    public:
    string name;
    int age;
    void move(){
        cout << name << " is moving" << endl;
    }
};

int main(){
    Person person;
    person.name = "Pit";
    person.age = 22;
    cout << "Name: " << person.name << "\tAge: " << person.age << endl;
    person.move();

    return 0;
}
