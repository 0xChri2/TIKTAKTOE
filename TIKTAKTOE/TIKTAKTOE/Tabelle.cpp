#include <iostream>
using namespace std;

int Zeile(int Sp)
{
	int zeile;

	do
	{
		cout << "Spieler " << Sp << " Eingabe von Zeile:" << endl;
		cin >> zeile;
	} while (zeile <= 0 && zeile >= 2);
	return zeile;
}

int Spalte(int Sp)
{
	int spalte;
	do
	{
		cout << "Spieler " << Sp << " Eingabe von Spalte:" << endl;
		cin >> spalte;
	} while (spalte <= 0 && spalte >= 2);
	return spalte;
}