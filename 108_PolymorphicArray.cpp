#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
};

class Dog : public Animal { public: void sound() { cout << "Woof!\n"; } };
class Cat : public Animal { public: void sound() { cout << "Meow!\n"; } };

int main() {
    Animal* zoo[2]; // Array of pointers to base class
    zoo[0] = new Dog();
    zoo[1] = new Cat();

    for(int i = 0; i < 2; i++) zoo[i]->sound();

    delete zoo[0]; delete zoo[1];
    return 0;
}