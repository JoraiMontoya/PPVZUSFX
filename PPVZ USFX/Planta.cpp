#include "Planta.h"

Planta::Planta(string _nombre, int _costo, int _tiempoDeRecarga, int _da�o, int _alcance, string _imagen){ 
    nombre = _nombre;
    Salud = 100; 
    posicionX = 0;       
    posicionY = 0;      
}

void Planta::atacar() {

}
void Planta::recogerSol() {

}

void Planta::colocar(int x, int y) {
    posicionX = x;
    posicionY = y;
    cout << "la planta esta en la posicion x = 70.0f" << endl;
}

void Planta::verificarRecarga() {
    

}
void Planta::recibirDa�o(int da�o) {
    Salud -= da�o;
}

void Planta::actualizar() {
    
}

void Planta::dibujar() {
    // L�gica para dibujar la imagen de la planta en su posici�n
}
