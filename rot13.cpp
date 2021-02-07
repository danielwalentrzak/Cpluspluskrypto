// rot13.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include<iostream>
#include<string>
#include <algorithm>
#include <limits>
#include <string>
using namespace std;

void rot13(string &tab) {
    int ile;
    for (int i = 0; i < tab.size(); i ++){
        ile = tab[i] - 96;
        if (ile <= 13) {
            ile += 13;
            tab[i] = 96 + ile;
        }
        else {
            ile -= 13;
            tab[i] = 96 + ile;
        }

    }



}

int main()
{
    string tekst;
    cout << "podaj tekst do zaszyfrowania:  "<<endl;
    std::getline(std::cin, tekst); //tekst do zaszyfrowania i pobieranie spacji getlinem
    tekst.erase(std::remove_if(tekst.begin(), tekst.end(), std::isspace), tekst.end()); //white remover 
    std::transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
    rot13(tekst);
    cout << tekst<<endl;
    cout << "podaj tekst do odszyfrowania:  " << endl;
    std::getline(std::cin, tekst); //tekst do zaszyfrowania i pobieranie spacji getlinem
    tekst.erase(std::remove_if(tekst.begin(), tekst.end(), std::isspace), tekst.end()); //white remover 
    std::transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
    rot13(tekst);
    cout << tekst << endl;
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
