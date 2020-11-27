#include <iostream>
#include "Tabelle.h"
#include "AusgabeTab.h"



using namespace std;




int Pruefung(int zeile, int spalte, char Tab[3][3])
{
	if (Tab[zeile][spalte] == 'O')
	{
		return 1;
	}
	else
	{
		cout << endl << " Fehler!! " << endl << "Dieser Platz  ist schon Vergeben" << endl << endl;
		return 0;
	}
}


int Gewinnueberpruefung(char Tab[3][3], int sp, char SpB)
{


	if (SpB == 'X')
	{
		if (SpB == Tab[0][0] && SpB == Tab[0][1] && SpB == Tab[0][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && SpB == Tab[1][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && SpB == Tab[2][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && SpB == Tab[2][0])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && SpB == Tab[2][1])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && SpB == Tab[2][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && SpB == Tab[2][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && SpB == Tab[2][0])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
	}

	else if (SpB == 'Y')
	{
		if (SpB == Tab[0][0] && SpB == Tab[0][1] && SpB == Tab[0][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && SpB == Tab[1][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && SpB == Tab[2][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && SpB == Tab[2][0])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && SpB == Tab[2][1])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && SpB == Tab[2][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && SpB == Tab[2][2])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && SpB == Tab[2][0])
		{
			cout << "	Spieler " << sp << " hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}

	}

	return 1;
}

int GewinnueberpruefungKI(char Tab[3][3], int sp, char SpB)
{
	if (SpB == 'Y')
	{
		if (SpB == Tab[0][0] && SpB == Tab[0][1] && SpB == Tab[0][2])
		{
			cout << "	KI hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && SpB == Tab[1][2])
		{
			cout << "	KI hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && SpB == Tab[2][2])
		{
			cout << "	KI hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && SpB == Tab[2][0])
		{
			cout << "	KI hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && SpB == Tab[2][1])
		{
			cout << "	KI hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && SpB == Tab[2][2])
		{
			cout << "	KI hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && SpB == Tab[2][2])
		{
			cout << "	KI hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}
		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && SpB == Tab[2][0])
		{
			cout << "KI hat gewonnen!!!!!" << endl;
			cout << endl;
			AusgabeTab(Tab);
			return 0;
		}

	}

	return 1;
}