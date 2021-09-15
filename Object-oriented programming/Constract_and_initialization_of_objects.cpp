#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

/*
class Person{
public:
    string name;
    int age;
    Person(string n, int a){
        name = n ; age = a;
    }
    void move(){
        cout << name << " is moving" << endl;
    }

};
int main(){
    Person person = Person("Tom", 22);
    cout << "Name: " << person.name << "\tAge: " << person.age << endl;
    person.name = "Bob";
    person.move();

    return 0; 
}
*/

class Person{
    public:
    const string name;
    int &ageRef;
    int age;
    Person(string n, int a) : name(n), age(a), ageRef(age){

    }
    void move(){
        cout << name << " is moving" << endl;
    }
};
int main(){
    Person tom("Tom", 22);
    cout << "Name: " << tom.name << "\tAge: " << tom.age << "\t AgeRef: " << tom.ageRef << endl;
    
    return 0;
}