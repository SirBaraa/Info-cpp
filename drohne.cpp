#include <iostream>
using namespace std;

class Drohne {
    private:
    //string modell = "Titan X1";
    //int seriennummer = 123456;
    string modell;
    int seriennummer;

    public:
    //double hoehe = 0;
    //int akku = 100;
    double hoehe;
    int akku; 

    // Standardkonstruktor 
    Drohne(){
        modell = "Titan X1";
        seriennummer = 123456;
        hoehe = 0;
        akku = 100;
        cout << "Standardkonstruktor ausgeführt" << endl; 
    }

    // Parameterkonstruktor
    Drohne(string m, int s, int h, int a){
        modell = m;
        seriennummer = s;
        hoehe = h;
        akku = a;
        cout << "Parameterkonstruktor ausgeführt" << endl; 
    }


    // This Pointer 
    Drohne& steigen(double h){
        hoehe += h;
        return *this;
    }


    Drohne& sinken(double h){
        hoehe -= h;
        return *this;
    }

    Drohne& akkuLaden(int a){
        akku += a;
        if (akku >= 100){
            akku = 100;
        }
        return *this;
    }

    Drohne& akkuVerbrauch(int a){
        akku -= a;
        if(akku < 0){
            akku = 0;
        }
        return *this;
    }
    

    void setModell(string m){
        modell = m;

    }

    void setSeriennummer(int s){
        seriennummer = s;

    }

    string getModell(){
        return modell;
    }

    int getSeriennummer(){
        return seriennummer;
    }


    void info(){
        cout << "Modell: " << modell << endl;
        cout << "seriennummer: " << seriennummer << endl;
        cout << "Höhe: " << hoehe << "m" << endl;
        cout << "Akku: " << akku << "%" << endl;
        cout << "----------------------------------" << endl;
    }


};


int main(){

// Erstellen eines Objekts : d1 

Drohne d1("Titan X2", 123, 10, 90);
d1.info();


Drohne d2;
d2.info();
//d1.setModell("Titan X1");
//d1.setSeriennummer(123456);       // f(x) - f(123456)
//d1.hoehe = 10;
//d1.akku = 50;
d1.steigen(45);
//d1.info();
// cout << d1.hoehe << endl;
d1.akkuVerbrauch(20);
//d1.info();

d1.sinken(17);
d1.akkuVerbrauch(6);
//d1.info();

Drohne d3;

d3.steigen(78).akkuVerbrauch(12).sinken(23).akkuVerbrauch(9);
d3.info();



    return 0;
}

