#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

int easy[8][8]; //20 min
int medium[16][16]; //40 min
int hard[30][16]; //99 min

void wypiszeasy() 
{
	cout << "  1 2 3 4 5 6 7 8" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << i + 1 << " ";
		for (int j = 0; j < 8; j++)
		{
			
		}
		cout << endl;
	}
}

void wypiszmedium()
{
	cout << "  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16" << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << i + 1 << " ";
		for (int j = 0; j < 16; j++)
		{

		}
		cout << endl;
	}
}

void wypiszhard()
{
	cout << "  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30" << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << i + 1 << " ";
		for (int j = 0; j < 30; j++)
		{

		}
		cout << endl;
	}
}


int main()
{
	setlocale(LC_CTYPE, "POLISH");

	int in;
	int inB;
	while (1)
	{
		system("cls");
		cout << "-------------\n";
		cout << "--- SAPER ---\n";
		cout << "-------------\n" << endl;

		cout << "1. Nowa gra.\n";
		cout << "2. Wczytaj gre.\n";
		cout << "3. Wyjdź.\n" << endl;
		cin >> in;

		switch (in, inB)
		{
		 case 1:
			 cout << "Wybierz poziom trudności:\n";
			 cout << "1. Łatwy (8x8).\n";
			 cout << "2. Średni (16x16).\n";
			 cout << "3. Trudny (30x16).\n";
			 cin >> inB; // poprawić wejście w 2 switch
			 break;
		 case 2:
			 break;
		 case 3:
			 system("cls");
			return 0;
		}
	}


}