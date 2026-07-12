#include <iostream>
using namespace std;

void verdoppeln(int &zahl){
    zahl *= 2; 
    cout << zahl << endl; 
}

void summe(int *zahl2){ // *zahl2 = &y 
    *zahl2 += 3;
    cout << *zahl2 << endl; 
}

int main(){

    int x  = 15; 
    verdoppeln(x); // Kopie von x 
    cout << x << endl; 

    int y = 99; 
    summe(&y); 
    cout << y << endl; 


    int x = 10; 
    int *p = &x; // *P : Ich zeige auf - &x : Adresse von x; 

    x = 20; 
    cout << x << endl; 
    cout << &x << endl; 
    cout << p << endl; // Ausgabe der Adresse von x 
    cout << *p << endl; // Ausgabe des Wertes von X 

    return 0;
}


// Referenz : Ein zweiter Name für denselben Wert 10 : a , b 
// PRoblem : Zahl = Kopie von x 
// zahl = x = 15 
// Lösung : Referenz auf x 
// Pointer : 
// X = 15
