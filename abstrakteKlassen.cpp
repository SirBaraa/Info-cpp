#include <iostream>
using namespace std;

// Abstrakte Klassen 

class Tier{

    public : 
    string name; 
    int alter; 

    virtual void laut() = 0; 

};

class Hund : public Tier{
    public: 
    void laut() override{
        cout << "Der Hund bellt" << endl; 
    }
};

int main(){

    Hund h; 
    h.laut();

    return 0; 
}
