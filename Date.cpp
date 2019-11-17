/* 
   Fichier:  Date.cpp 
   Auteur:   BETCHEM
   Date:     Fall 2019 
   Matiere:  C-C++ Programming / Esirem 3A IT
   Sommaire: Implementation de la  classe Date
  */


#include <iostream>
#include "Date.h"
using namespace std;
//Partie 1
//Question 1 :Création de la classe Date


Date::Date (int month, int day,int year)
{
	m_day=day;
	m_month=month;
	m_year=year;
}

int Date::getDay() const 
{
	return m_day;
}
int Date::getMonth() const
{
	return m_month;
}
int Date::getYear() const 
{ 
	return m_year;
}
void Date::change(int day,int month, int year)
{
	m_day=day;
	m_month=month;
	m_year=year;
}

string Date::display() {
	string to_display;
	to_display = to_string(m_day) + "/" + to_string(m_month) + "/" + to_string(m_year);
	return to_display;
} 


