/* 
   Fichier:  Date.h
   Auteur:   BETCHEM
   Date:     Fall 2019 
   Matiere:  C-C++ Programming / Esirem 3A IT
   Sommaire: Implementation de la  classe Date
  */
#ifndef _date_h
#define _date_h
#include <string>

using namespace std;

						//Partie 1

//Question 1 :Création de la classe Date

//Q1.a: Création de classe Date,variables membres et ses Fonctions getters
class Date
{
	public:
		Date(int month=1, int day=1, int year=2019);
		int getDay() const;
		int getMonth() const;
		int getYear() const;

//Q1.b:méthode modifiant la date
		void change(int day,int month,int year);
		string display();

	private:
		int m_day;
		int m_month;
		int m_year;
};
#endif


