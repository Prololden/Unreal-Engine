
#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void makeSound() const = 0;
};

class Cat:public Animal
{
public:
    void makeSound() const override
    {
        cout << "Meow\n";
    }
};

class Dog :public Animal
{
public:
    void makeSound() const override
    {
        cout << "Woof\n";
    }
};

class Raven :public Animal
{
public:
    void makeSound() const override
    {
        cout << "Caw\n";
    }
};

int main()
{
    cout << "Easy!\n";

    Animal* animals[3];
    animals[0] = new Cat();
    animals[1] = new Dog();
    animals[2] = new Raven();

    for (Animal* a : animals)
        a->makeSound();
}

