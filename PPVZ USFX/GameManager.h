#pragma once
#include<iostream>
using namespace std;

class GameManager
{
private:

	int oleadaActual;
	float puntuacionJugador;
	int monedaJugador;
	bool  finDelJuego;


public:
    void setOleadaActual(int _oleadaActual) {   oleadaActual = _oleadaActual;}

    int getOleadaActual() { return oleadaActual; }
    
    void setPuntuacionJugador(float _puntuacionJugador) { puntuacionJugador = _puntuacionJugador; }
    float getPuntuacionJugador() { return puntuacionJugador; }

    void setmonedaJugador(int _monedaJugador) { monedaJugador = _monedaJugador; }
     int getmonedaJugador() { return monedaJugador; }

    void setFinDelJuego(bool _finDelJuego) { finDelJuego = _finDelJuego; }
	bool getFinDelJuego() { return finDelJuego; }

    //constructor 
    GameManager();

    // Métodos de la clase GameManager
    void IniciarJuego();
    void Actualizar();

    void aumentarOleadaActual();
    void aumentarPuntuacionJugador(float); //Aumenta la puntuacion del jugador
    void aumentarMonedaJugador(int );
    void disminuirMonedaJugador(int);
    void reiniciarGameManager();
    bool verificarVictoria();
    bool verificarDerrota();



    //Escenario escenarioJuego;             // Escenario del juego
    //std::vector<Zombie*> zombiesActivos;   // Lista de punteros a zombies activos
    //std::vector<Planta*> plantasDisponibles; // Lista de punteros a plantas disponibles
    //std::vector<Oleada*> oleadas;          // Lista de punteros a oleadas de zombies

    
};


