#include <iostream>
using namespace std;

class Hund {
public:
    string name;

    void bellen() {
        cout << "Der Hund bellt" << endl;
    }
};

int main() {
    Hund h1;
    h1.name = "Trump"; 
    h1.bellen();
    Hund* zeiger = &h1; 
    // 1. Möglichkeit : (*     ) 
    cout << "-------------------------------" << endl; 
    (*zeiger).name = "Donald"; 
    cout << h1.name << endl; 
    (*zeiger).bellen(); 

    // 2. Möglichkeit : Pfeiloperator -> 
    cout << "-------------------------------" << endl; 
    zeiger->name = "Obama"; 
    cout << h1.name << endl; 

    // Adresse des Objektes 
    cout << &h1 << endl; 
    cout << zeiger << endl; 

// new 
// delete 


    // Erstellugn eines dynamischen Objektes
    Hund* pointer = new Hund; 
    pointer->name = "Bidon";
    cout << pointer->name << endl;  
    pointer->bellen(); 

    delete pointer; 
    pointer = nullptr; 










    return 0;
}



// Pointer auf Attributen, Methoden, Objekte 
