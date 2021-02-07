#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

void szyfruj(string& napis, int k)
{

	for (int i = 0; i < napis.length(); i++)
	{
		if (napis[i] == ' ')continue;
		napis[i] += k;
		if (napis[i] > 'Z') napis[i] -= 26;
		if (napis[i] < 'A') napis[i] += 26;
	}


}

int main()
{
	string napis;
	cout << "Wpisz informacje, ktora chcesz zaszyfrowac: ";
	getline(cin, napis);
	transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
	szyfruj(napis, 3);
	cout << napis << endl;
	cout << "odzyfrowanie: ";
	szyfruj(napis, -3);
	cout << napis << endl;
	system("PAUSE");
	return 0;
}