/* 
   Fichier:  Date_main.cpp
   Auteur:   BETCHEM
   Date:     Fall 2019 
   Matiere:  C-C++ Programming / Esirem 3A IT
   Sommaire: Implementation de la  classe Date
  */
#include <string>
#include "Date.h"
#include <iostream>
//Q1.c: programme principal pour tester le code de classe Date

using namespace std;

int main()
{

  Date d;
  int day, month, year;

  cout<<"entrez le jour "<<endl;
  cin>> day;
  if (day > 0 && day<=7){
   cout<< "le jour est : "<< day <<endl;
 }
 else
  {
  cout<<"entrez une bonne valeur pour le jour "<<endl;
  cin >> day;
  }

  cout<<"entrez le mois "<<month<<endl;
  if (month > 0 && month<=12)
  {
	cout<< "le mois est :"<< month<<endl;
  }
  else
  {
  cout<<"entrez une bonne valeur pour le mois "<<endl;
  cin >> month;
  cout<< "le mois est :"<< month<<endl;
  }

  cout<<"entrez l'année"<<year<<endl;
  if (year >= 2019)
  {
	 cout<< "l'année est :"<< year<<endl;
  }
  else
  {
  cout<<"entrez une bonne valeur pour l'année"<<endl;
  cin >> year;
  }

  d.change(day,month,year);


  cout << d.display() << endl;

  return 0;
}

