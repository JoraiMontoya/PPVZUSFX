#include "Planta.h"

Planta::Planta(string _nombre, int _costo, int _tiempoDeRecarga, int _daño, int _alcance, string _imagen){ 
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
void Planta::recibirDaño(int daño) {
    Salud -= daño;
}

void Planta::actualizar() {
    
}

void Planta::dibujar() {
    // Lógica para dibujar la imagen de la planta en su posición
}
