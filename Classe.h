#ifndef
#define
#include <string>
#include <iostream>
using namespace std;
						//Partie 1

//Question 1 :Création de la classe Date
class Date
{
	public:
	Date::Date (int month, int day,int year)
	{
		m_day=day;
		m_month=month;
		m_year=year;
	}

	private:
		int m_day;
		int m_month;
		int m_year;
};


//Question 2 :Création de la classe Client
/* class Client
{
	public:
	Client::Client (int ID, string nom, string prenom, int numbResev)
	{
		m_ID=ID;
		m_nom=nom;
		m_prenom=prenom;
		m_numbResev=numbResev;
	}

	private:
		int m_ID;
		int m_nom;
		int m_prenom;
		int m_numbResev;
};
*/