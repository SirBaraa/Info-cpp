#include <iostream>
#include <string>
using namespace std;

class Auto{
    private:

    friend class Motor;


    string marke;
    int baujahr;

    public:
    string farbe;
    int kilometerstand;

    // Standardkonstruktor
    Auto(){
        marke = "Audi";
        baujahr = 2014;
        farbe = "rot";
        kilometerstand = 100000;
        cout << "Standardkonstruktor ausgeführt" << endl;
    }

    // Parameterkonstruktor
    Auto(string m, int b, string f, int k){
        marke = m;
        baujahr = b;
        farbe = f;
        kilometerstand = k;
        cout << "Parameterkonstruktor ausgeführt" << endl; 
    }

    // Kopierkonstruktor
    Auto(const Auto& andere){
        marke = andere.marke;
        baujahr = andere.baujahr;
        farbe = andere.farbe;
        kilometerstand = andere.kilometerstand;
    }

    void anzeigen(){
        cout << marke << endl;
        cout << baujahr << endl;
        cout << farbe << endl;
        cout << kilometerstand << endl; 
        cout << "-------------------------" << endl; 
    }

    // Destruktor 
    ~Auto(){
        cout << "Objekt gelöscht" << endl; 
    }

    

};


class Motor{
    public:
    void anzeigen(Auto a){
        cout << a.marke << endl; 

    }
};


int main(){

Auto a1;
Auto a2("mercedes", 2020, "schwarz", 120000);
Auto a3(a2); 
// Auto a3 = a2; 

a1.anzeigen();
a2.anzeigen();
a3.anzeigen();

a3.farbe = "lila";

a2.anzeigen();
a3.anzeigen(); 

// a3 : Kopie a2 
// a4 -> a2

Motor m1; 
m1.anzeigen(a2);


    return 0; 
}
