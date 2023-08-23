#include "Casa.h"

////
////Casa::Casa()
////{
////	barreraEliminada = "las plantas fueron derribadas";
////	//ZombiesDentro = "juanito murio";
////	tipoCasa = "pequeño"
////}
//
//Casa::Casa(string _tipoCasa)
//{
//	//barreraEliminada = "las plantas fueron derribadas";
//	//ZombiesDentro = "juanito murio";
//	tipoCasa = _tipoCasa;
//}
//
//Casa::Casa(bool _barreraEliminada, bool _zombisDentro, string _tipoCasa)
//{
//	barreraEliminada = _barreraEliminada;
//	zombisDentro = _barreraEliminada;
//	tipoCasa = _tipoCasa;
//}


Casa::Casa(bool _barreraEliminada, bool _zombisDentro, string _tipoCasa)
{
	barreraEliminada = _barreraEliminada;
	zombisDentro = _zombisDentro;
	tipoCasa = _tipoCasa;
}

bool Casa::barreraEstaEliminada(string _Eliminada)
{
	//if (_Eliminada == "si") {
	//	return true; // La barrera está eliminada
	//}
	//else {
	//	return false; // La barrera no está eliminada
	//}
return _Eliminada == "si";
	
}

bool Casa::hayZombisDentro(string ZombisDentro)
{
	//if (ZombisDentro == "si") {
	//	return true; // Hay zombies dentro de la casa
	//}
	//else {
	//	return false; // No hay zombies dentro de la casa
	//}
	return ZombisDentro == "si";
}



void Casa::zombisEntraron(string zombisDentro)
{
	//    if (zombisDentro == "si") {
	//	this->zombisDentro = true;
	//}
	//else {
	//	this->zombisDentro = false;
	//}
	this->zombisDentro = zombisDentro == "si";
}