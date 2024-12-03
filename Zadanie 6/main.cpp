#include <iostream>
#include <string>

using namespace std;

//Klasa bazowa: Vehicle
class Vehicle {
private:
    string brand;
    string model;
    int year;

public:
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


    string getBrand() const { return brand; }
    int getYear() const { return year; }
    string getModel() const { return model; }

    void setModel(const string& m) { model = m; }
    void setYear(int y) { year = y; }
    void setBrand(const string& b) { brand = b; }

    void displayInfo() const {
        cout << "Marka: " << brand << ", Model: " << model << ", Rok produkcji: " << year;
    }
};

//Klasa pochodna: Truck
class Truck : public Vehicle {
private:
    string purpose;

public:
    Truck(){
        Vehicle();
        purpose = "";
    }

    Truck(string b, string m, int y, string p){
        Vehicle(b, m, y);
        purpose = p;
    }

    string getPurpose() const { return purpose; }
    void setPurpose(const string& p) { purpose = p; }

    void inputData() {
        cout << "Podaj marke ciezarowki: ";
        string b;
        cin >> b;
        setBrand(b);

        cout << "Podaj model ciezarowki: ";
        string m;
        cin >> m;
        setModel(m);

        cout << "Podaj rok produkcji ciezarowki: ";
        int y;
        cin >> y;
        setYear(y);

        cout << "Podaj przeznaczenie ciezarowki (np. Wywrotka, Chlodnia, Cysterna): ";
        string p;
        cin >> p;
        setPurpose(p);
    }

    void displayInfo() {
        Vehicle::displayInfo();
        cout << ", Przeznaczenie: " << purpose << endl;
    }
};

//Klasa pochodna: Bus
class Bus : public Vehicle {
private:
    int standingPlaces;
    bool networkConnection;

public:
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

    int getStandingPlaces() const { return standingPlaces; }
    bool hasNetworkConnection() const { return networkConnection; }

    void setNetworkConnection(bool nc) { networkConnection = nc; }
    void setStandingPlaces(int sp) { standingPlaces = sp; }

    void inputData() {
        cout << "Podaj marke autobusu: ";
        string b;
        cin >> b;
        setBrand(b);

        cout << "Podaj model autobusu: ";
        string m;
        cin >> m;
        setModel(m);

        cout << "Podaj rok produkcji autobusu: ";
        int y;
        cin >> y;
        setYear(y);

        cout << "Podaj liczbe miejsc stojacych: ";
        int sp;
        cin >> sp;
        setStandingPlaces(sp);

        cout << "Czy autobus posiada dostep do sieci? (tak/nie): ";
        string nc_input;
        cin >> nc_input;
        setNetworkConnection(nc_input == "tak");
    }

    void displayInfo() {
        Vehicle::displayInfo();
        cout << ", Miejsca stojace: " << standingPlaces << ", Dostep do sieci: " << (networkConnection ? "Tak" : "Nie") << endl;
    }
};
