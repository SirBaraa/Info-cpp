#include <iostream>
using namespace std;

int main() 
{


// datentyp name[anzahl der Elemente] = {1,2,3,4,5,...}
int zahlen[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,13,23,34,34}; 
string patients[] = {"Ammar", "Baraa", "Sumaya", "Marwa","Ahmad"}; // indexe - Elemente 
cout << patients[1] << endl; 
cout << zahlen[2] << endl;

patients[1] = "Bashar";
cout << patients[1] << endl; 

for(int i = 0; i < size(patients); i++){
    cout << patients[i] << endl; 
}

cout << size(patients) << endl; 
cout << size(zahlen) << endl; 

int summe = 0;

for(int i = 0; i < size(zahlen); i++){
    summe += zahlen[i]; 
}
cout << summe << endl; 

double durchschnitt = (double)summe/size(zahlen);
cout << durchschnitt << endl;

for(int i = 0; i < size(patients); i++){
    if(patients[i] == "Ahmad"){
        cout << "wahr" << endl; 
        cout << i << endl; 
    }
    else{
        cout << "falsch" << endl; 
    }
}


int preise[4][3] = {
    {12,13,14},
    {34,45,56},
    {45,56,67},
    {65,54,43}
};
cout << preise[3][0] << endl; 

// nested loops 

for(int i = 0; i < 4; i++){
    for(int j = 0; j < 3; j++){
        cout << preise[i][j] << "-"; 
    }
    cout << endl; 
}



for(int i = 0; i < 4; i++){
    for(int j = 0; j < 3; j++){
        cout << "."; 
    }
    cout << endl; 
}

    return 0;
}
