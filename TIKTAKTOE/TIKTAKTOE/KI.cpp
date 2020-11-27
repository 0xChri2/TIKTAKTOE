#include <iostream>

using namespace std;

int KIZ(char Tab[3][3], int Runde, char SpB)
{
	int zeile;

	if (Runde <= 2)
	{
		if (Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}
		else if (Tab[0][0] == 'O' && Tab[2][2] == 'X')
		{
			zeile = 0;
			return zeile;
		}

		else if (Tab[2][2] == 'O' && Tab[0][0] == 'X')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[0][2] == 'O' && Tab[2][0] == 'X')
		{
			zeile = 0;
			return zeile;
		}

		else if (Tab[2][0] == 'O' && Tab[0][2] == 'X')
		{
			zeile = 2;
			return zeile;
		}

		else
		{
			zeile = 0;
			return zeile;
		}
	}
	else if (Runde >= 3)
	{
		int	SpB = 'Y';


		if (SpB == Tab[0][0] && SpB == Tab[0][1] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[0][2] && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[0][2] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && Tab[1][2] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][2] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[1][2] && Tab[1][0] == 'O')
		{
			zeile = 1;
			return zeile;
			//3
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][2] && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[2][1] && SpB == Tab[2][2] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;

			//3
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;

		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][0] && Tab[1][0] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[2][0] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[2][1] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][1] && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][2] && Tab[1][2] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][2] && SpB == Tab[2][2] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][2] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][2] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][0] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][0] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		SpB = 'X';
		if (SpB == Tab[0][0] && SpB == Tab[0][1] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[0][2] && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[0][2] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && Tab[1][2] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][2] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[1][2] && Tab[1][0] == 'O')
		{
			zeile = 1;
			return zeile;
			//3
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][2] && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[2][1] && SpB == Tab[2][2] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;

			//3
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;

		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][0] && Tab[1][0] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[2][0] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[2][1] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][1] && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][2] && Tab[1][2] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][2] && SpB == Tab[2][2] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][2] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][2] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][0] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][0] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		if (Tab[0][0] == 'X' && Tab[2][2] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[0][0] == 'X' && Tab[2][2] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[2][0] == 'X' && Tab[0][2] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[2][0] == 'X' && Tab[0][2] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[2][0] == 'X' && Tab[1][2] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[2][0] == 'X' && Tab[1][2] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[0][0] == 'X' && Tab[1][2] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[0][0] == 'X' && Tab[1][2] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[0][2] == 'X' && Tab[1][0] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[0][2] == 'X' && Tab[1][0] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[2][2] == 'X' && Tab[1][0] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[2][2] == 'X' && Tab[1][0] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[2][2] == 'O' && Tab[0][0] == 'X' && Tab[1][2] == 'X' && Tab[2][1] == 'X')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[2][2] == 'O' && Tab[0][0] == 'X' && Tab[1][2] == 'X' && Tab[0][1] == 'X')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else
		{
			for (int i = 0; i < 3; i++) {
				for (int o = 0; o < 3; o++) {
					if (Tab[i][o] == 'O')
					{
						return i;
					}
				}
			}
		}


	}
}
int KIS(char Tab[3][3], int Runde, char SpB)
{
	int spalte;

	if (Runde <= 2)
	{
		if (Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[0][0] == 'O' && Tab[2][2] == 'X')
		{
			spalte = 0;
			return spalte;
		}

		else if (Tab[2][2] == 'O' && Tab[0][0] == 'X')
		{
			spalte = 2;
			return spalte;
		}
		else if (Tab[0][2] == 'O' && Tab[2][0] == 'X')
		{
			spalte = 2;
			return spalte;
		}

		else if (Tab[2][0] == 'O' && Tab[0][2] == 'X')
		{
			spalte = 0;
			return spalte;
		}
		else
		{
			spalte = 0;
			return spalte;
		}
	}

	else if (Runde >= 3)
	{

		SpB = 'Y';

		if (SpB == Tab[0][0] && SpB == Tab[0][1] && Tab[0][2] == 'O')
		{

			spalte = 2;
			return spalte;

		}

		else if (SpB == Tab[0][0] && SpB == Tab[0][2] && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[0][2] && Tab[0][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;

		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && Tab[1][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][2] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[1][2] && Tab[1][0] == 'O')
		{		//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][2] && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[2][1] && SpB == Tab[2][2] && Tab[2][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][0] && Tab[1][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[2][0] && Tab[0][0] == 'O')
		{		 //3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[2][1] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][1] && Tab[0][1] == 'O')
		{
			//3
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}


		else if (SpB == Tab[0][2] && SpB == Tab[2][2] && Tab[1][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[1][2] && SpB == Tab[2][2] && Tab[0][2] == 'O')
		{		 //3
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][2] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;

		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][2] && Tab[0][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][0] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][0] && Tab[0][2] == 'O')
		{
			//3
			spalte = 2;
			return spalte;
		}
		SpB = 'X';
		if (SpB == Tab[0][0] && SpB == Tab[0][1] && Tab[0][2] == 'O')
		{

			spalte = 2;
			return spalte;

		}

		else if (SpB == Tab[0][0] && SpB == Tab[0][2] && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[0][2] && Tab[0][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;

		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && Tab[1][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][2] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[1][2] && Tab[1][0] == 'O')
		{		//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][2] && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[2][1] && SpB == Tab[2][2] && Tab[2][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][0] && Tab[1][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[2][0] && Tab[0][0] == 'O')
		{		 //3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[2][1] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][1] && Tab[0][1] == 'O')
		{
			//3
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}


		else if (SpB == Tab[0][2] && SpB == Tab[2][2] && Tab[1][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[1][2] && SpB == Tab[2][2] && Tab[0][2] == 'O')
		{		 //3
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][2] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;

		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][2] && Tab[0][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][0] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][0] && Tab[0][2] == 'O')
		{
			//3
			spalte = 2;
			return spalte;
		}
		if (Tab[0][0] == 'X' && Tab[2][2] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[0][0] == 'X' && Tab[2][2] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[2][0] == 'X' && Tab[0][2] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[2][0] == 'X' && Tab[0][2] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[2][0] == 'X' && Tab[1][2] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[2][0] == 'X' && Tab[1][2] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[0][0] == 'X' && Tab[1][2] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[0][0] == 'X' && Tab[1][2] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[0][2] == 'X' && Tab[1][0] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[0][2] == 'X' && Tab[1][0] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[2][2] == 'X' && Tab[1][0] == 'X' && Tab[1][1] == 'Y' && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[2][2] == 'X' && Tab[1][0] == 'X' && Tab[1][1] == 'Y' && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[2][2] == 'O' && Tab[0][0] == 'X' && Tab[1][2] == 'X' && Tab[2][1] == 'X')
		{
			spalte = 2;
			return spalte;
		}
		else if (Tab[2][2] == 'O' && Tab[0][0] == 'X' && Tab[1][2] == 'X' && Tab[0][1] == 'X')
		{
			spalte = 2;
			return spalte;
		}
		else if (Tab[0][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (Tab[0][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}
		else if (Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}
		else if (Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else
		{
			for (int i = 0; i < 3; i++) {
				for (int o = 0; o < 3; o++) {
					if (Tab[i][o] == 'O')
					{
						return o;
					}
				}

			}
		}
	}

}

int KIZ1(char Tab[3][3], int Runde, char SpB)
{
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3; o++) {
			if (Tab[i][o] == 'O')
			{
				return i;
			}

		}
	}
}

int KIS1(char Tab[3][3], int Runde, char SpB)
{
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3; o++) {
			if (Tab[i][o] == 'O')
			{
				return o;
			}

		}
	}
}

int KIZ2(char Tab[3][3], int Runde, char SpB)
{
	int zeile;

	if (Tab[0][0] == 'O')
	{
		zeile = 0;
		return zeile;
	}

	else if (Tab[0][2] == 'O')
	{
		zeile = 0;
		return zeile;
	}
	else if (Tab[1][1] == 'O')
	{
		zeile = 1;
		return zeile;
	}
	else if (Tab[2][0] == 'O')
	{
		zeile = 2;
		return zeile;
	}

	else
	{
		for (int i = 0; i < 3; i++) {
			for (int o = 0; o < 3; o++) {
				if (Tab[i][o] == 'O')
				{
					return i;
				}
			}
		}
	}
}

int KIS2(char Tab[3][3], int Runde, char SpB)
{
	int spalte;

	if (Tab[0][0] == 'O')
	{
		spalte = 0;
		return spalte;
	}

	else if (Tab[0][2] == 'O')
	{
		spalte = 2;
		return spalte;
	}
	else if (Tab[1][1] == 'O')
	{
		spalte = 1;
		return spalte;
	}

	else if (Tab[2][0] == 'O')
	{
		spalte = 0;
		return spalte;
	}
	else
	{
		for (int i = 0; i < 3; i++) {
			for (int o = 0; o < 3; o++) {
				if (Tab[i][o] == 'O')
				{
					return o;
				}
			}
		}
	}
}

int KIS3(char Tab[3][3], int Runde, char SpB)
{
	int spalte;

	if (Runde <= 2)
	{

		if (Tab[0][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}
		else if (Tab[0][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}
		if (Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else
		{
			spalte = 0;
			return spalte;
		}
	}

	else if (Runde >= 3)
	{

		SpB = 'Y';

		if (SpB == Tab[0][0] && SpB == Tab[0][1] && Tab[0][2] == 'O')
		{

			spalte = 2;
			return spalte;

		}

		else if (SpB == Tab[0][0] && SpB == Tab[0][2] && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[0][2] && Tab[0][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;

		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && Tab[1][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][2] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[1][2] && Tab[1][0] == 'O')
		{		//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][2] && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[2][1] && SpB == Tab[2][2] && Tab[2][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][0] && Tab[1][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[2][0] && Tab[0][0] == 'O')
		{		 //3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[2][1] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][1] && Tab[0][1] == 'O')
		{
			//3
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}


		else if (SpB == Tab[0][2] && SpB == Tab[2][2] && Tab[1][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[1][2] && SpB == Tab[2][2] && Tab[0][2] == 'O')
		{		 //3
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][2] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;

		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][2] && Tab[0][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][0] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][0] && Tab[0][2] == 'O')
		{
			//3
			spalte = 2;
			return spalte;
		}
		SpB = 'X';
		if (SpB == Tab[0][0] && SpB == Tab[0][1] && Tab[0][2] == 'O')
		{

			spalte = 2;
			return spalte;

		}

		else if (SpB == Tab[0][0] && SpB == Tab[0][2] && Tab[0][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[0][2] && Tab[0][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;

		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && Tab[1][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][2] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[1][2] && Tab[1][0] == 'O')
		{		//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][2] && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[2][1] && SpB == Tab[2][2] && Tab[2][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][0] && Tab[1][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[2][0] && Tab[0][0] == 'O')
		{		 //3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && Tab[2][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[2][1] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][1] && Tab[0][1] == 'O')
		{
			//3
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}


		else if (SpB == Tab[0][2] && SpB == Tab[2][2] && Tab[1][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[1][2] && SpB == Tab[2][2] && Tab[0][2] == 'O')
		{		 //3
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && Tab[2][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][2] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;

		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][2] && Tab[0][0] == 'O')
		{
			//3
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][0] && Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][0] && Tab[0][2] == 'O')
		{
			//3
			spalte = 2;
			return spalte;
		}
		if (Tab[0][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (Tab[0][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}
		else if (Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}
		else if (Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else
		{
			for (int i = 0; i < 3; i++) {
				for (int o = 0; o < 3; o++) {
					if (Tab[i][o] == 'O')
					{
						return o;
					}
				}

			}
		}
	}
}
int KIZ3(char Tab[3][3], int Runde, char SpB)
{
	int zeile;

	if (Runde <= 2)
	{
		if (Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		if (Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}
		else
		{
			zeile = 0;
			return zeile;
		}
	}
	else if (Runde >= 3)
	{
		int	SpB = 'Y';


		if (SpB == Tab[0][0] && SpB == Tab[0][1] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[0][2] && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[0][2] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && Tab[1][2] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][2] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[1][2] && Tab[1][0] == 'O')
		{
			zeile = 1;
			return zeile;
			//3
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][2] && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[2][1] && SpB == Tab[2][2] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;

			//3
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;

		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][0] && Tab[1][0] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[2][0] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[2][1] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][1] && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][2] && Tab[1][2] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][2] && SpB == Tab[2][2] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][2] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][2] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][0] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][0] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		SpB = 'X';
		if (SpB == Tab[0][0] && SpB == Tab[0][1] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[0][2] && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[0][2] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][1] && Tab[1][2] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[1][2] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[1][2] && Tab[1][0] == 'O')
		{
			zeile = 1;
			return zeile;
			//3
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][1] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[2][0] && SpB == Tab[2][2] && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[2][1] && SpB == Tab[2][2] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;

			//3
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][0] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;

		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][0] && Tab[1][0] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][0] && SpB == Tab[2][0] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][1] && SpB == Tab[1][1] && Tab[2][1] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][1] && SpB == Tab[2][1] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][1] && Tab[0][1] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][2] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][2] && Tab[1][2] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][2] && SpB == Tab[2][2] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][0] && SpB == Tab[1][1] && Tab[2][2] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][0] && SpB == Tab[2][2] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][2] && Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
			//3
		}

		else if (SpB == Tab[0][2] && SpB == Tab[1][1] && Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;
		}

		else if (SpB == Tab[0][2] && SpB == Tab[2][0] && Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else if (SpB == Tab[1][1] && SpB == Tab[2][0] && Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else if (Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}

		else
		{
			for (int i = 0; i < 3; i++) {
				for (int o = 0; o < 3; o++) {
					if (Tab[i][o] == 'O')
					{
						return i;
					}
				}
			}
		}


	}
}

int KIZ4(char Tab[3][3], int Runde, char SpB)
{
	int zeile;

	if (Runde <= 2)
	{
		if (Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}
		else if (Tab[0][0] == 'O')
		{
			zeile = 0;
			return zeile;
		}

		else if (Tab[0][2] == 'O')
		{
			zeile = 0;
			return zeile;
		}
		else if (Tab[1][1] == 'O')
		{
			zeile = 1;
			return zeile;
		}
		else if (Tab[2][0] == 'O')
		{
			zeile = 2;
			return zeile;
		}
		else
		{
			zeile = 0;
			return zeile;
		}
	}
	else if (Runde == 3)
	{
		return 20;
	}
}
int KIS4(char Tab[3][3], int Runde, char SpB)
{
	int spalte;

	if (Runde <= 2)
	{
		if (Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}
		else if (Tab[0][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}

		else if (Tab[0][2] == 'O')
		{
			spalte = 2;
			return spalte;
		}
		else if (Tab[1][1] == 'O')
		{
			spalte = 1;
			return spalte;
		}

		else if (Tab[2][0] == 'O')
		{
			spalte = 0;
			return spalte;
		}
		else
		{
			spalte = 0;
			return spalte;
		}
	}
	else if (Runde == 3)
	{
		return 20;
	}
}