#include "GameManager.h"
#include"Zombie.h"



GameManager::GameManager()
{
    
     oleadaActual = 1;                  // Inicializar oleada actual
     puntuacionJugador = 0;             // Inicializar puntuación del jugador
       monedaJugador = 100;               // Ejemplo de cantidad inicial de moneda
       finDelJuego = false;               // El juego comienza, no está terminado
        // Inicializar otros atributos y cargar configuración del juego si es necesario
    
}

void GameManager::IniciarJuego()
{
    cout << "\t,,,,,,,,,,,,,,,,,,,¡El juego ha comenzado!................\n" << endl;
    // Lógica para iniciar el juego, generar la primera oleada, etc.
}

void GameManager::Actualizar()
{
    cout << "Actualizando............................ estado del juego..." << endl;
    if (verificarVictoria()) {
        finDelJuego = true;
        cout << "¡Has ganado! El juego ha terminado." << endl;
    }
    else if (verificarDerrota()) {
        finDelJuego = true;
        cout << "¡Has perdido! El juego ha terminado." << endl;
    }
    // Lógica del juego que se actualiza en cada ciclo
    // Verificar victoria/derrota, actualizar oleadas, etc.

}

void GameManager::aumentarOleadaActual()
{
    oleadaActual++;
}

void GameManager::aumentarPuntuacionJugador(float _puntuacion)
{
    puntuacionJugador += _puntuacion;
}

void GameManager::aumentarMonedaJugador(int moneda)
{ 
    monedaJugador += moneda; 

}

void GameManager::disminuirMonedaJugador(int _moneda)
{
    monedaJugador -= _moneda; 
}

void GameManager::reiniciarGameManager() 
{
    oleadaActual = 0;
    puntuacionJugador = 0; 
    monedaJugador = 0; 
    finDelJuego = false; 
}

bool GameManager::verificarVictoria()
{
    // Verificar si el jugador ha alcanzado una puntuación específica para ganar
    return puntuacionJugador >= 1000; // Ejemplo de condición de victoria
}

bool GameManager::verificarDerrota()
{
    // Verificar si el jugador ha quedado sin monedas o energía para perder
    return (monedaJugador <= 0 );
}
