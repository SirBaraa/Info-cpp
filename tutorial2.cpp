#include <iostream>
using namespace std;
int main() {
    
    cout << "Hallo Informatikkurs 2 \n";
   
    
    // if - Sätze
    
    //if (Bedingung) {
     //   Code wird ausgeführt, wenn die Bedingung erfüllt ist}
    
    int age;
    
    cout << "Wie alt bist du? \n";
    // cin >> age;
    
    if (age >= 18) {
        cout << "Du bist volljährig \n";
    } 
    else {
        cout << "Du bist noch minderjährig \n";
    }
    
    int note; 
    
    cout << "Geben Sie Ihre Note des Moduls Informatik 1 aus dem letzten Semester \n";
    // cin >> note; 
    
    if (note == 1) {
        cout << "Sehr gut! \n";
        
    }
    else if (note == 2) {
        cout << "gut \n";
    }
    else if (note == 3) {
        cout << "befriedigend \n";
    }
    else if (note == 4) {
        cout << "ausreichend \n";
    }
    else {
        cout << "Du bist durchgefallen!!!!!! \n"; 
    }
    
    // Operatoren : == != < > and or not 
    
    cout << "---------------------------------- \n";
    
    
    int a = 10;
    int b = 20;
    int c = 10;
    cout << (a == b) << endl; // nein, False, 0
    cout << (a == c) << endl; // ja, True, 1
    
    
    
// Schleifen : 
// for-Schleife

// for (Bedingung/limit ){
//    code ausführen}

// for (int a = 120; Seitenanzahl = 120;änderung a++ ) // increment
// { du druckst die Seiten aus }


//for (int a; a==120; a++) 
// { cout << "eine Seite wurde ausgedruckt" << endl; }

// 1. Runde :
// Bedingung : a == 120
// a = 1

// 2. Runde : 
// a = 2

// 119. Runde : 
// a = 119

// 120. Runde : 
// a = 120 -> a == a = 120 -> Bedingung : True -> Schleife endet 


// Beispeil für For-Schleifen : 

for (int i = 2; i <= 4; ++i)
{ cout << "Du bist ein erfolgreicher Student \n"; }


for (int i = 1; i <= 10; i += 2) // i += 2 bedeutet : i = i + 2
{ cout << i << endl; }

// For-Schleife arbeitet : solange die Bedingung erfüllt ist (True)
// For-Schleife bricht : wenn die Bedingung False ist 



// While-Schleife 
    
// تكرار لكود معين ـ طالما هناك شرط موجود 

cout << "---------------------- \n"; 

int i = 1;
int aa = 0;
// cout << "Gebe einen Wert für aa ein \n";
// cin >> aa;

while (i<=aa) {
    cout << i << endl;
    i++;
}

// While-Schleife arbeitet : solange die Bedingung erfüllt ist (True)
// While-Schleife bricht : wenn die Bedingung False ist 

    
    // Initialisierung : تعريف لدالة  int a
    // Deklarierung : int a = 10;
    
    

// Do-While Schleife : 

// Maschine führt immer mindestens einmal das Befehl aus! 

// d { 
//   code }
// while (Bedingung);



int ii = 1;
do { 
    cout << ii << endl;
    ii++;
}
while(ii<=5);









//int zahl; 
// do {
//cout << "Gib eine positive Zahl (Zahl > 0) ein \n" << endl;
//cin >> zahl; 
//} 
// while (zahl <= 0);


string Benutzername = "sibaalb";
string Eingabename;
do {
    cout << "Gib den Benutzernamen ein: \n";
    cin >> Eingabename;
}
while (Benutzername == Eingabename);
cout << "du hast dich erfolgreich eingeloggt" << endl; 


    
    return 0; 
}
