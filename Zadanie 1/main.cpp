#include <iostream>
#include <string>

using namespace std;

//Klasa podstawowa komputer
class Computer {
public:
    string brand;
    string model;

    Computer(string brand = "", string model = "") {
        brand = brand;
        model = model;
    }

    void displayInfo() {
        cout << "Marka: " << brand << ", Model: " << model;
    }
};

//Klasa PC dziedzicz¹ca komputer
class DesktopPC : public Computer {
public:
    string caseType;


    DesktopPC(string brand = "", string model= "", string casetype = ""){
        brand = brand;
        model = model;
        caseType = casetype;
    }

//Funkcja do wyœwietlenia danych PC
    void displayInfo() {
        Computer::displayInfo();
        cout << ", Typ obudowy: " << caseType << endl;
    }
};

//Klasa laptop dziedzicz¹ca komputer
class Laptop : public Computer {
public:
    double screenSize;
    string caseColor;

    Laptop(string brand = "", string model= "", double screensize = 0.0, string casecolor = "") {
        brand = brand;
        model = model;
        screenSize = screensize;
        caseColor = casecolor;
    }

    void displayInfo() {
        Computer::displayInfo();
        cout << ", Przekatna ekranu: " << screenSize << " cali, Kolor obudowy: " << caseColor << endl;
    }
};

int main() {
    //Obiekty pc i laptop
    Laptop laptop("Asus","xp100",10.5,"white");
    DesktopPC desktopPC("MSI","hp120","slim");


    //Wyœwietlanie danych
    cout << "\nDane wprowadzone dla laptopa:" << endl;
    laptop.displayInfo();

    cout << "\nDane wprowadzone dla komputera stacjonarnego:" << endl;
    desktopPC.displayInfo();

    return 0;
}
