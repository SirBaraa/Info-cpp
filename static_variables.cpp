#include <iostream>
using namespace std;


void zählen(){ // Beim Aufruf der Funktion wird die Variable neu initialisiert! 
    static int anzahl = 0; 
    anzahl++; 
    cout << anzahl << endl; 
}

void ausgabe(){
    static int wert = 10; 
    cout << wert << endl; 
    wert += 5; 

}



int main() 
{

zählen();
zählen();
zählen();


ausgabe();
ausgabe();
ausgabe();

    return 0;
}

