//#pragma once
//class Planta
//{
//
//};
#pragma once
#include <iostream>
using namespace std;

class Planta
{
private:
    int posicionX;
    int posicionY;
    int Salud;
    int costo;
    int tiempoDeRecarga;
    int daño;
    int alcance;
    string nombre;
    string imagen;

public:
    Planta(string _nombre, int _costo, int _tiempoDeRecarga, int _daño, int _alcance, string _imagen);

    void setCosto(int _costo) { costo = _costo; }
    int getCosto() { return costo; }

    void setTiempoDeRecarga(int _tiempoDeRecarga) { tiempoDeRecarga = _tiempoDeRecarga; }
    int getTiempoDeRecarga() { return tiempoDeRecarga; }

    void setDaño(int _daño) { daño = _daño; }
    int getDaño() { return daño; }

    void setAlcance(int _alcance) { alcance = _alcance; }
    int getAlcance() { return alcance; }


    void setImagen(string _imagen) { imagen = _imagen; }
    string getImagen() { return imagen; }



    void atacar();
    void recogerSol();
    void colocar(int x, int y);
    void verificarRecarga();
    void recibirDaño(int daño);
    void actualizar();
    void dibujar();

};
