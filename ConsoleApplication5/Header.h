#pragma once

namespace banque {
	class Compte

	{
	private:
		int numCompte;
		char* nomProprietaire;
		double solde;
	public:

		Compte(int NumC, char* NomP, double Solde1);

		bool retirerArgent(double a);

		void desposerArgent(double b);

		void consulterSolde();

		bool transfererArgent(Compte* c, double sum);

		void afficher();
		
		~Compte();

		
	};
}

