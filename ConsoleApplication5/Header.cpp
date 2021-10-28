#include "Header.h"
#include <string.h>
#include <iostream>


using namespace std;
using namespace banque;


banque::Compte::Compte(int NumC, char* NomP, double Solde1)
{
	this->numCompte = NumC;

	this->nomProprietaire = new char[strlen(NomP) + 1];

	strcpy(this->nomProprietaire, NomP);

	this->solde = Solde1;
}

bool banque::Compte::retirerArgent(double a)
{
	if (this->solde >= a) {
		this->solde = this->solde - a; 
		return true;}

	else{
		return false;}
}

void banque::Compte::desposerArgent(double b)
{
	this->solde = this->solde + b;
}

void banque::Compte::consulterSolde()
{
	cout << "le nom de compte : " << this->numCompte << endl;
	cout << "le nom de Proprietaire : " << this->nomProprietaire << endl;
	cout << "le solde est egale : " << this->solde << endl;
}

bool banque::Compte::transfererArgent(Compte* c, double sum)
{
	if (this->retirerArgent(sum)) {
		c->solde = c->solde + sum;
		return true;}

	else {
		return false;}
}

void banque::Compte::afficher()
{
	cout << "apres l'ajout  le solde va etre egale : " << this->solde << endl;
}

banque::Compte::~Compte()
{
	delete this->nomProprietaire;
	this->nomProprietaire = 0;
	cout << "it was deleted" << endl;
}


