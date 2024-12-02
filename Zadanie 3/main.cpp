#include <iostream>
#include <string>

using namespace std;

class Pracownik {
private:
    string imie;
    string nazwisko;
    string stanowisko;

public:
    Pracownik() {
        imie = "";
        nazwisko = "";
        stanowisko = "";
    }

    Pracownik(string i, string n, string s) {
        setImie(i);
        setNazwisko(n);
        setStanowisko(s);
    }

    string getImie() const {
        return imie;
    }

    void setImie(const string& i) {
        imie = i;
    }

    string getNazwisko() const {
        return nazwisko;
    }

    void setNazwisko(const string& n) {
        nazwisko = n;
    }

    string getStanowisko() const {
        return stanowisko;
    }

    void setStanowisko(const string& s) {
        stanowisko = s;
    }

    void displayInfo() const {
        cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Stanowisko: " << stanowisko << endl;
    }
};

class Dyrektor : public Pracownik {
public:
    Dyrektor() {
        setStanowisko("Dyrektor");
    }

    void inputData() {
        string imie, nazwisko;
        cout << "Podaj imie dyrektora: ";
        cin >> imie;
        setImie(imie);
        cout << "Podaj nazwisko dyrektora: ";
        cin >> nazwisko;
        setNazwisko(nazwisko);
    }
};

class Nauczyciel : public Pracownik {
public:
    Nauczyciel() {
        setStanowisko("Nauczyciel");
    }

    void inputData() {
        string imie, nazwisko;
        cout << "Podaj imie nauczyciela: ";
        cin >> imie;
        setImie(imie);
        cout << "Podaj nazwisko nauczyciela: ";
        cin >> nazwisko;
        setNazwisko(nazwisko);
    }
};

class Wychowawca : public Pracownik {
public:
    Wychowawca() {
        setStanowisko("Wychowawca");
    }

    void inputData() {
        string imie, nazwisko;
        cout << "Podaj imie wychowawcy: ";
        cin >> imie;
        setImie(imie);
        cout << "Podaj nazwisko wychowawcy: ";
        cin >> nazwisko;
        setNazwisko(nazwisko);
    }
};

class Sekretarka : public Pracownik {
public:
    Sekretarka() {
        setStanowisko("Sekretarka");
    }

    void inputData() {
        string imie, nazwisko;
        cout << "Podaj imie sekretarki: ";
        cin >> imie;
        setImie(imie);
        cout << "Podaj nazwisko sekretarki: ";
        cin >> nazwisko;
        setNazwisko(nazwisko);
    }
};

int main() {
    int wybor;
    cout << "Wybierz stanowisko:\n";
    cout << "1. Dyrektor\n";
    cout << "2. Nauczyciel\n";
    cout << "3. Wychowawca\n";
    cout << "4. Sekretarka\n";
    cout << "Wybierz (1-4): ";
    cin >> wybor;

    switch(wybor) {
        case 1: {
            Dyrektor pracownik;
            pracownik.inputData();
            cout << "\nWprowadzone dane:\n";
            pracownik.displayInfo();
            break;
        }
        case 2: {
            Nauczyciel pracownik;
            pracownik.inputData();
            cout << "\nWprowadzone dane:\n";
            pracownik.displayInfo();
            break;
        }
        case 3: {
            Wychowawca pracownik;
            pracownik.inputData();
            cout << "\nWprowadzone dane:\n";
            pracownik.displayInfo();
            break;
        }
        case 4: {
            Sekretarka pracownik;
            pracownik.inputData();
            cout << "\nWprowadzone dane:\n";
            pracownik.displayInfo();
            break;
        }
        default:
            cout << "Niepoprawny wybor!" << endl;
            return 1;
    }
    return 0;
}
