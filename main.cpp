#include <iostream>
#include <string>
#include "models/Facultad.cpp"
#include "models/Grupos.cpp"

using namespace std;

int main() {
    Facultad f1("Ciencia y Tecnología");    
    cout << f1.getNombre() << endl;
    return 0;
}