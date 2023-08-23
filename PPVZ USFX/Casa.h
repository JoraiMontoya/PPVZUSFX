#pragma once
#include<iostream>
using namespace std;

class Casa
{
private:
	bool barreraEliminada;  // Indica si la barrera que protege la casa ha sido eliminada
	bool zombisDentro;// Indica si hay zombis dentro de la casa
	string tipoCasa;

public:
	//Casa();
	//Casa(string _tipoCasa);
	Casa(bool , bool , string );

	void setBarreraEliminada(bool _barreraEliminada) { barreraEliminada = _barreraEliminada; }
	bool getBarreraEliminada() { return barreraEliminada; }

	void setZombisDentro(bool _zombisDentro) { zombisDentro = _zombisDentro; }
	bool getZombisDentro() { return zombisDentro; }

	void setTipoCasa(string _tipoCasa) { tipoCasa = _tipoCasa; }
	string getTipoCasa() { return tipoCasa; }

	bool barreraEstaEliminada(string);

	bool hayZombisDentro(string);


	void zombisEntraron(string);
};
