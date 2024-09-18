#include<iostream>
using namespace std;

class Animal {
private:
    string species;
public:
    Animal(string species = "Animals have Species") {
        cout << "Constructor of animal class called first " << endl;
        this->species = species;
    }
    string get_species() {
        return species;
    }
    void eat() {
        cout << "Animals can eat " << endl;
    }
    ~Animal() {
        cout << "Animal has been deconstructed " << endl;
    }
};
class Mammal : public Animal {
private:
    bool isWarmBlooded, hasHair, givesLiveBirth;
public:
    Mammal(bool isWarmBlooded = false, bool hasHair = false, bool givesLiveBirth = false) {
        cout << "Constructor of Mammal class called " << endl;
        this->isWarmBlooded = isWarmBlooded;
        this->hasHair = hasHair;
        this->givesLiveBirth = givesLiveBirth;
    }
    ~Mammal() {
        cout << "Mammal has been deconstructed " << endl; 
    }
};

class Human : public Mammal {
private:
    string language, name,gender;
    int age;
public:
    Human(string language = "N/A",string name = "N/A",string gender = "N/A",int age = 0) {
        cout << "Constructor of Human class has been called " << endl;
        this->language = language;
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    void getAllAttributes() {
        if (age==0) {
            cout << "No attributes have been provided " << endl;
        }
        else {
            cout << "name of the person is " << name << "\nlanguage of the person is "
                << language << "\nage of the person is " << age << "\ngender of the person is " << gender;
        }
    }
    ~Human() {
        cout << "\nHuman has been deconstructed " << endl;
    }
};
int main() {
    Human h1("English","Muhammad Masab","Male",18);
    h1.getAllAttributes();

}

//we can see from above behavior that deconstructors implement a LIFO behaviors