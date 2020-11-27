#include <iostream>

using namespace std;

void AusgabeTab(char Tab[3][3])
{

	int EingabeTab[5][5];
	EingabeTab[0][0] = 0;
	EingabeTab[0][1] = 0;
	EingabeTab[0][2] = 1;
	EingabeTab[0][3] = 2;
	EingabeTab[1][0] = 0;
	EingabeTab[2][0] = 1;

	EingabeTab[3][0] = 2;

	cout << endl << "	" << EingabeTab[0][0] << " |  " << EingabeTab[0][1] << "  |  " << EingabeTab[0][2] << " |  " << EingabeTab[0][3] << " |  " << endl;
	cout << "	" << "--|---------------|" << endl;
	cout << "	" << EingabeTab[1][0] << " |  " << Tab[0][0] << "    " << Tab[0][1] << "    " << Tab[0][2] << "  |  " << endl;
	cout << "	" << "  |		  |		" << endl;
	cout << "	" << EingabeTab[2][0] << " |  " << Tab[1][0] << "    " << Tab[1][1] << "    " << Tab[1][2] << "  |  " << endl;
	cout << "	" << "  |		  |		" << endl;
	cout << "	" << EingabeTab[3][0] << " |  " << Tab[2][0] << "    " << Tab[2][1] << "    " << Tab[2][2] << "  |  " << endl << endl << endl;
}
