#include <iostream>
#include "Tabelle.h"
#include "Pruefungen.h"
#include "AusgabeTab.h"
#include "KI.h"

using namespace std;


int main()
{
	int zeile;
	int spalte;
	int Sp1 = 1;
	int Sp2 = 2;
	char SpB1 = 'X';
	char SpB2 = 'Y';
	int Runde = 0;
	int i = 0;
	int o = 0;
	int GPrüf = 1;
	int KI;
	int KIlvl;
	int P;


	cout << "TIKTAKTOE" << endl;

	do
	{
		cout << "Spielauswahl:" << endl << "Einzelspieler(1) Mit KI (2):" << endl;
		cin >> KI;

	} while (KI <= 1 && KI >= 2);

	if (KI == 2)
	{
		do
		{
			cout << "Schwierigkeitsgrad: " << endl;
			cout << "Ich mach nur Scheisse!! = 1:" << endl << "Leicht = 2:" << endl << "Mittel = 3:" << endl << "Schwer = 4:" << endl << "Hacker = 5:" << endl;
			cin >> KIlvl;
		} while (KIlvl != 1 && KIlvl != 2 && KIlvl != 3 && KIlvl != 4 && KIlvl != 5);
	}

	char Tab[3][3];
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3; o++) {
			Tab[i][o] = 'O';
		}
	}



	if (KI == 1)
	{
		cout << "Spieler 1 = X (1)" << endl;
		cout << "Spieler 2 = Y (2)" << endl << endl << endl;
		AusgabeTab(Tab);

		for (Runde; Runde <= 8;)
		{
			do
			{
				zeile = Zeile(Sp1);
				spalte = Spalte(Sp1);
				P = Pruefung(zeile, spalte, Tab);
				if (P == 1)
				{
					Tab[zeile][spalte] = SpB1;
				}
			} while (P == 0);

			GPrüf = Gewinnueberpruefung(Tab, Sp1, SpB1);
			if (GPrüf == 0)
			{	
				system("PAUSE");
				return 0;
			}
			AusgabeTab(Tab);
			Runde++;


			if (Runde <= 7)
			{
				do
				{
					zeile = Zeile(Sp2);
					spalte = Spalte(Sp2);
					P = Pruefung(zeile, spalte, Tab);
					if (P == 1)
					{
						Tab[zeile][spalte] = SpB2;
					}
				} while (P == 0);

				GPrüf = Gewinnueberpruefung(Tab, Sp2, SpB2);
				if (GPrüf == 0)
				{
					system("PAUSE");
					return 0;
				}
				AusgabeTab(Tab);
				Runde++;
			}
		}
		cout << "	UNENDSCHIEDEN!!!  " << endl << endl;
		system("PAUSE");
		retrun 0;
	}

	else if (KI == 2)
	{
		cout << "Spieler 1 = X" << endl;
		cout << "KI = Y" << endl << endl;

		if (KIlvl == 1)
		{
			cout << "Schwirigkeitsgrad:" << endl << "Ich mach nur Scheisse !!" << endl << endl;
			AusgabeTab(Tab);

			for (Runde; Runde <= 8;)
			{
				do
				{
					zeile = Zeile(Sp1);
					spalte = Spalte(Sp1);
					P = Pruefung(zeile, spalte, Tab);
					if (P == 1)
					{
						Tab[zeile][spalte] = SpB1;
					}
				} while (P == 0);

				GPrüf = Gewinnueberpruefung(Tab, Sp1, SpB1);
				if (GPrüf == 0)
				{	
					system("PAUSE");
					return 0;
				}
				AusgabeTab(Tab);
				Runde++;


				if (Runde <= 7)
				{
					zeile = KIZ1(Tab, Runde, SpB2);
					spalte = KIS1(Tab, Runde, SpB2);
					Tab[zeile][spalte] = SpB2;
					GPrüf = Gewinnueberpruefung(Tab, Sp2, SpB2);
					if (GPrüf == 0)
					{
						system("PAUSE");
						return 0;
					}
					cout << "KI:" << endl << endl;
					AusgabeTab(Tab);
					Runde++;
				}
			}
			cout << "	UNENDSCHIEDEN!!!  " << endl << endl;
			system("PAUSE");
			retrun 0;
		}
		else if (KIlvl == 2)
		{
			cout << "Schwirigkeitsgrad:" << endl << "Leicht" << endl << endl;
			AusgabeTab(Tab);

			for (Runde; Runde <= 8;)
			{
				do
				{
					zeile = Zeile(Sp1);
					spalte = Spalte(Sp1);
					P = Pruefung(zeile, spalte, Tab);
					if (P == 1)
					{
						Tab[zeile][spalte] = SpB1;
					}
				} while (P == 0);

				GPrüf = Gewinnueberpruefung(Tab, Sp1, SpB1);
				if (GPrüf == 0)
				{
					system("PAUSE");
					return 0;
				}
				AusgabeTab(Tab);
				Runde++;


				if (Runde <= 7)
				{
					zeile = KIZ2(Tab, Runde, SpB1);
					spalte = KIS2(Tab, Runde, SpB1);
					Tab[zeile][spalte] = SpB2;

					GPrüf = GewinnueberpruefungKI(Tab, Sp2, SpB2);
					if (GPrüf == 0)
					{	
						system("PAUSE");
						return 0;
					}
					cout << "KI:" << endl << endl;
					AusgabeTab(Tab);
					Runde++;
				}
			}
			cout << "	UNENDSCHIEDEN!!!  " << endl << endl;
			system("PAUSE");
			retrun 0;
		}
		else if (KIlvl == 3)
		{
			cout << "Schwirigkeitsgrad:" << endl << "Mittel" << endl << endl;
			AusgabeTab(Tab);

			for (Runde; Runde <= 8;)
			{
				do
				{
					zeile = Zeile(Sp1);
					spalte = Spalte(Sp1);
					P = Pruefung(zeile, spalte, Tab);
					if (P == 1)
					{
						Tab[zeile][spalte] = SpB1;
					}
				} while (P == 0);

				GPrüf = Gewinnueberpruefung(Tab, Sp1, SpB1);
				if (GPrüf == 0)
				{
					system("PAUSE");
					return 0;
				}
				AusgabeTab(Tab);
				Runde++;


				if (Runde <= 7)
				{
					zeile = KIZ3(Tab, Runde, SpB1);
					spalte = KIS3(Tab, Runde, SpB1);
					Tab[zeile][spalte] = SpB2;

					GPrüf = GewinnueberpruefungKI(Tab, Sp2, SpB2);
					if (GPrüf == 0)
					{	
						system("PAUSE");
						return 0;
					}
					cout << "KI:" << endl << endl;
					AusgabeTab(Tab);
					Runde++;
				}
			}
			cout << "	UNENDSCHIEDEN!!!  " << endl << endl;
			system("PAUSE");
			retrun 0;
		}

		else if (KIlvl == 4)
		{
			cout << "Schwirigkeitsgrad:" << endl << " Schwer" << endl << endl;
			AusgabeTab(Tab);


			for (Runde; Runde <= 8;)
			{
				do
				{
					zeile = Zeile(Sp1);
					spalte = Spalte(Sp1);
					P = Pruefung(zeile, spalte, Tab);
					if (P == 1)
					{
						Tab[zeile][spalte] = SpB1;
					}
				} while (P == 0);

				GPrüf = Gewinnueberpruefung(Tab, Sp1, SpB1);
				if (GPrüf == 0)
				{	
					system("PAUSE");
					return 0;
				}
				AusgabeTab(Tab);
				Runde++;


				if (Runde <= 7)
				{
					zeile = KIZ(Tab, Runde, SpB1);
					spalte = KIS(Tab, Runde, SpB1);
					Tab[zeile][spalte] = SpB2;

					GPrüf = GewinnueberpruefungKI(Tab, Sp2, SpB2);
					if (GPrüf == 0)
					{	
						system("PAUSE");
						return 0;
					}
					cout << "KI:" << endl << endl;
					AusgabeTab(Tab);
					Runde++;
				}
			}
			cout << "	 UNENDSCHIEDEN!!!  " << endl << endl;
			system("PAUSE");
			retrun 0;
		}
		else if (KIlvl == 5)
		{
			cout << "Schwirigkeitsgrad:" << endl << "Hacker" << endl << endl;
			AusgabeTab(Tab);

			for (Runde; Runde <= 8;)
			{
				do
				{
					zeile = Zeile(Sp1);
					spalte = Spalte(Sp1);
					P = Pruefung(zeile, spalte, Tab);
					if (P == 1)
					{
						Tab[zeile][spalte] = SpB1;
					}
				} while (P == 0);

				GPrüf = Gewinnueberpruefung(Tab, Sp1, SpB1);
				if (GPrüf == 0)
				{	
					system("PAUSE");
					return 0;
				}
				AusgabeTab(Tab);
				Runde++;


				if (Runde <= 7)
				{
					zeile = KIZ4(Tab, Runde, SpB1);
					spalte = KIS4(Tab, Runde, SpB1);
					if (zeile == 20 && spalte == 20)
					{
						for (int i = 0; i < 3; i++) {
							for (int o = 0; o < 3; o++) {
								Tab[i][o] = SpB2;
							}
						}

					}
					else
					{
						Tab[zeile][spalte] = SpB2;
					}


					GPrüf = GewinnueberpruefungKI(Tab, Sp2, SpB2);
					if (GPrüf == 0)
					{
						cout << "					 NEVER MESS WITH THE KI!!!!" << endl << endl << endl;
						system("PAUSE");
						return 0;
					}
					cout << "KI:" << endl << endl;
					AusgabeTab(Tab);
					Runde++;
				}

			}
		}
	}


}
