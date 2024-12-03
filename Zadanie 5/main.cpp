#include <iostream>
#include <string>

using namespace std;

//Klasa bazowa: Vehicle
class Vehicle {
public:
    string brand;
    string model;
    int year;

    Vehicle(){
        brand = "";
        model = "";
        year = 0;
    }


    Vehicle(string b, string m, int y){
        brand = b;
        model = m;
        year = y;
    }

    void displayInfo() const {
        cout << "Marka: " << brand << ", Model: " << model << ", Rok produkcji: " << year;
    }
};

//Klasa pochodna: Truck
class Truck : public Vehicle {
public:
    string purpose;

    Truck(){
        Vehicle();
        purpose = "";
    }

    Truck(string b, string m, int y, string p){
    Vehicle(b, m, y);
    purpose = p;
    }

    void inputData() {
        cout << "Podaj marke ciezarowki: ";
        cin >> brand;
        cout << "Podaj model ciezarowki: ";
        cin >> model;
        cout << "Podaj rok produkcji ciezarowki: ";
        cin >> year;
        cout << "Podaj przeznaczenie ciezarowki (np. Wywrotka, Chlodnia, Cysterna): ";
        cin >> purpose;
    }

    void displayInfo() {
        Vehicle::displayInfo();
        cout << ", Przeznaczenie: " << purpose << endl;
    }
};

//Klasa pochodna: Bus
class Bus : public Vehicle {
public:
    int standingPlaces;
    bool networkConnection;

    Bus(){
        Vehicle();
        standingPlaces = 0;
        networkConnection = false;

    }

    Bus(string b, string m, int y, int sp, bool nc){
        Vehicle(b, m, y);
        standingPlaces = sp;
        networkConnection = nc;
    }


    void inputData() {
        string nc_input;
        cout << "Podaj marke autobusu: ";
        cin >> brand;
        cout << "Podaj model autobusu: ";
        cin >> model;
        cout << "Podaj rok produkcji autobusu: ";
        cin >> year;
        cout << "Podaj liczbe miejsc stojacych: ";
        cin >> standingPlaces;
        cout << "Czy autobus posiada dostep do sieci? (tak/nie): ";
        cin >> nc_input;
        networkConnection = (nc_input == "tak");
    }

    void displayInfo(){
        Vehicle::displayInfo();
        cout << ", Miejsca stojace: " << standingPlaces << ", Dostep do sieci: " << (networkConnection ? "Tak" : "Nie") << endl;
    }
};

int main() {
    int choice;
    cout << "Wybierz rodzaj pojazdu:\n";
    cout << "1. Ciezarowka\n";
    cout << "2. Autobus\n";
    cout << "Wybierz (1-2): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            Truck truck;
            truck.inputData();
            cout << "\nWprowadzone dane dla ciezarowki:\n";
            truck.displayInfo();
            break;
        }
        case 2: {
            Bus bus;
            bus.inputData();
            cout << "\nWprowadzone dane dla autobusu:\n";
            bus.displayInfo();
            break;
        }
        default:
            cout << "Niepoprawny wybor!" << endl;
            return 1;
    }
    return 0;
}
