#include <iostream>
#include"Header.h"


using namespace banque;
using namespace std;

int main()
{
	char nom[30] = "Ahmed Amine";

	Compte cmpt(50003,nom,8050.175);

	cmpt.consulterSolde();

	cmpt.desposerArgent(12000);

	cout << endl;

	cmpt.afficher();

	cout << endl;
	

}


