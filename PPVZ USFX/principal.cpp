#include<iostream>
#include"Zombie.h"// Aqui estamos incluyendo la clase Zombie.h
#include"GameManager.h"
#include"Bala.h"
#include"Cercado.h"
#include"Planta.h"
#include"cesped.h"
#include"Casa.h"

using namespace std;

//dato: solo deve haber un mian en todo el proyecto 
int main() {
	

	//Zombie Juanito;

	//nuestro Zombie de nombre Juanito
	Zombie Juanito("Juancho");


	cout << "El nombre del zombie es: " <<	Juanito.getNombre() << endl;
	cout<<"la energia del zombie es "<< Juanito.getEnergia() << endl;
	cout << "El nivel de furia del zombie es :"<<Juanito.getNivelFuria() << endl;
	cout<<"la velocidad del zombie es "<< Juanito.getVelocidad() << endl;
	cout<<"la posicion  x del zombie es "<< Juanito.getPosicionX() << endl;
	cout<<"la posicion  y del zombie es "<< Juanito.getPosicionY() << endl;
	cout << "tipo de zombie es " << Juanito.getTipoZombie() << endl;

	cout << '\n' << endl;;


	GameManager gestorJuego;            // Crear una instancia del gestor de juego
	gestorJuego.IniciarJuego();          // Iniciar el juego

	// Bucle de juego (actualización continua)
	//while (!gestorJuego.getFinDelJuego()) { // Mientras no se cumpla la condición de fin de juego
		gestorJuego.Actualizar();       // Actualizar el estado del juego
	//}
		

	cout<<'\n'<<endl;
		  // Crear una instancia de Zombie (supongamos que ya tienes implementada la clase Zombie)
		Zombie AbanderadoF("Zombie Enemigo", 100, 0, 1, 10.0f, 0.0f, "Normal");

		 //Crear una instancia de Bala
		Bala bala(2.0f, 90, 0.0f, 0.0f);

		// Mover la bala y atacar al zombie
		while (AbanderadoF.getEnergia() > 0) {
			bala.moverse();
			cout << "La bala se ha movido a la posicion X: " << bala.getPosicionX() << endl;

			// Atacar al zombie si la bala alcanza su posición
			if (bala.getPosicionX() >= AbanderadoF.getPosicionX()) {
				bala.atacar(AbanderadoF);
				cout << "La bala ha atacado al zombie.\n" << endl;
			}
		}

		cout << "\tEl zombie 'AbanderadoF'   ha sido abatido ;) :) :) :) :) :)  ." << endl;




		///cercado
		Cercado pared(5, 80, 500.0f, 200, "Cerca mas fuerte");
		cout << "la cantidad de dano que recibe es: " << pared.getDaño() << endl;
		cout << "la cantidad de reistencia que tiene es: " << pared.getResistencia() << endl;
		cout << "la posicion X del cerco es: " << pared.getPosicionX() << endl;
		cout << "la pocion Y del cerco es:" << pared.getPosicionY() << endl;
		cout << "El tipo de Cerca es: " << pared.getTipoCerca() << endl;

		cout << '\n';


		// planta


		// Crear una instancia de Planta utilizando el constructor
		Planta planta("Lanzaguisantes", 50, 3, 20, 5, "imagen_planta.png");

		// Acceder a los métodos y atributos de la planta
		planta.colocar(2, 3);
		planta.recogerSol();



		//desped

		cesped CampoJardin(5, 12);
		CampoJardin.Nombre = "Jardin";

		cout << "Se creo el Campo de cesped " << CampoJardin.Nombre << endl;
		cout << endl;

		//cout << "El ancho del campo de cesped es: " << CampoJardin.Ancho << endl;

		cout << "\n\n\n" << endl;
		//Casa miCasa;
		Casa Casa();
		//cout << "el tipo de casa es: " << Casa.getTipoCasa() << endl;
		//cout << "Barrera eliminada: " << miCasa.getBarreraEliminada() << endl;
		//cout << "Zombis dentro: " << miCasa.getZombisDentro() << endl;
		//// 
	return 0;

}
