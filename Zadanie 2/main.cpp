#include <iostream>
#include <string>

using namespace std;

//Klasa podstawowa komputer
class Computer {
private:
    string brand;
    string model;
public:

     string getBrand() const {
        return brand;
    }

    void setBrand(const string brand) {
        this -> brand = brand;
    }

    string getModel() const {
        return model;
    }

    void setModel(const string& model) {
        this -> model = model;
    }


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
private:
    string caseType;
public:

    string getCaseType() const {
        return caseType;
    }

    void setCaseType(const string& casetype) {
        this -> caseType = casetype;
    }





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
private:
    double screenSize;
    string caseColor;
public:

    double getScreenSize() const {
        return screenSize;
    }

    void setScreenSize(double screensize) {
        this -> screenSize = screensize;
    }

    string getCaseColor() const {
        return caseColor;
    }

    void setCaseColor(const string& casecolor) {
        this -> caseColor = casecolor;
    }



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
