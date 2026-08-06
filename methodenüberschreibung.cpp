#include <iostream>
using namespace std;

class Fahrzeug{
    public : 
    string modell; 
    int km_stand; 

    virtual void starten(){
        cout << "Das Fahrzeug startet jetzt" << endl; 
    }
};


// Kindklasse 1 : 

class Auto : public Fahrzeug{
    public : 
    string auto_farbe;

    void starten() override {
        // Aufruf der ursprünglichen Methode der Basisklasse
        // Fahrzeug::starten();
        cout << "Das Auto startet in 2 Sekunden" << endl; 
    }

    void hupen(){
        cout << "Das Auto hupt" << endl; 
    }
};


// Kinderklasse 2 : 

class Drone : public Auto{
    public: 
    int flugzeit;
};




int main() 
{
   Auto a1;
   a1.starten();
   a1.hupen();
   a1.modell = "Audi";
   a1.km_stand = 120000;
   a1.auto_farbe = "Blau"; 
   cout << a1.modell << endl; 


    // Zeiger
    Auto* zeiger = &a1; 
    zeiger->hupen();
    zeiger->starten(); 
    
}



// Wie kann man die Methoden der Basisklasse bei der Kindklasse ändern : Methodenüberschreibung!
// Virtuelle Methoden : Zeiger soll auf Methode der Kindklasse zeigen, nicht auf die Methode der Basisklasse
// Override : Überschreibung von virutellen Methoden 















