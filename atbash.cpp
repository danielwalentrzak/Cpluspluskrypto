#include <iostream>
#include <string>

using namespace std;

void szyfr(string& a) {
    for (int i = 0; i<a.length(); i++) {

        if ((a[i] >= 'a') && (a[i]) <= 'z') {
            a[i] -= 97;
            a[i] = 25 - a[i];
            a[i] += 97;
        }
        else if ((a[i] >= 'A') && (a[i]) <= 'Z') {
            a[i] -= 65;
            a[i] = 25 - a[i];
            a[i] += 65;
        }
    }


    cout << a << endl;
}
int main()
{
    string a;
    cout << "Podaj tekst: ";
    getline(cin, a);
    szyfr(a);
}

