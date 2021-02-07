#include<iostream>
#include<string>
#include <algorithm>

using namespace std;
void szyfr(string& a) {
    for (int i = 0; i < a.length(); i++) {
       
            a[i] -= 65;
            a[i] = 25 - a[i];
            a[i] += 65;
        
    }
}
int main()
{
    string tekst;
    string klucz;
    int x; // o ile miejsc przesuwamy

    cout << "podaj tekst do zaszyfrowania:  ";
    std::getline(std::cin, tekst); //tekst do zaszyfrowania i pobieranie spacji getlinem
    cout << "podaj klucz do szyfru:  ";
    std::getline(std::cin, klucz); //tekst do zaszyfrowania i pobieranie spacji getlinem
    klucz.erase(std::remove_if(klucz.begin(), klucz.end(), std::isspace), klucz.end()); //white remover
    tekst.erase(std::remove_if(tekst.begin(), tekst.end(), std::isspace), tekst.end()); //white remover 
    std::transform(klucz.begin(), klucz.end(), klucz.begin(), ::toupper); //touppercases
    std::transform(tekst.begin(), tekst.end(), tekst.begin(), ::toupper);
    szyfr(tekst);
    for (int i = 0, a = 0; i <= tekst.length(); i++, a++) {

        if (klucz[a] == NULL) {
            a = 0;
        }
        if (klucz[a] >= 65 && klucz[a] <= 90) {
            x = klucz[a] - 65 + 1;
            if (tekst[i] >= 65 && tekst[i] <= 90 - x) tekst[i] = int(tekst[i]) + x;
            else if (tekst[i] >= 91 - x && tekst[i] <= 90) tekst[i] = int(tekst[i]) - 26 + x;
        }

    }
    cout << tekst << endl;

    //deszyfrowanie

    cout << "podaj tekst do deszyfrowania:  ";
    std::getline(std::cin, tekst); //tekst do zaszyfrowania i pobieranie spacji getlinem
    cout << "podaj klucz do szyfru:  ";
    std::getline(std::cin, klucz); //tekst do zaszyfrowania i pobieranie spacji getlinem
    klucz.erase(std::remove_if(klucz.begin(), klucz.end(), std::isspace), klucz.end()); //white remover
    tekst.erase(std::remove_if(tekst.begin(), tekst.end(), std::isspace), tekst.end()); //white remover 
    std::transform(klucz.begin(), klucz.end(), klucz.begin(), ::toupper); //touppercases
    std::transform(tekst.begin(), tekst.end(), tekst.begin(), ::toupper);
    szyfr(tekst);
    for (int i = 0, a = 0; i <= tekst.length(); i++, a++) {

        if (klucz[a] == NULL) {
            a = 0;
        }
        if (klucz[a] >= 65 && klucz[a] <= 90) {
            x = klucz[a] - 65 + 1;
            if (tekst[i] >= 65 && tekst[i] <= 90 - x) tekst[i] = int(tekst[i]) + x;
            else if (tekst[i] >= 91 - x && tekst[i] <= 90) tekst[i] = int(tekst[i]) - 26 + x;
        }

    }
    cout << tekst << endl;
    return 0;
}