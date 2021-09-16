// Tablica2D.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
using namespace std;
#include <iostream>

int tablica2d[2][2];
int main()
{
	tablica2d[0][0] = 8;
	tablica2d[0][1] = 10;
	tablica2d[1][0] = 2;
	tablica2d[1][1] = 6;
	cout << "\n [0][1]\t " << tablica2d[0][1] << endl;
	int wiersz = 0;
	int kolumna = 0;
	for (kolumna; kolumna < 2; kolumna++) {
		for (wiersz = 0; wiersz < 2; wiersz++) {
			cout << "wiersz  \t" << wiersz << " kolumna\t" << kolumna << " =\t" << tablica2d[wiersz][kolumna] << endl;
		}
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
