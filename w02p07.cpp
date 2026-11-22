#include <iostream>

using namespace std;

int main()
{
    int tab[1000] = {0};
    int n = 0; // rozmiar (indeks piewszego wolnego elementu)
    int x;
    while (true)
    {
        cout << "x = ";
        cin >> x;
        if (x < 0)
            break;
        tab[n] = x;
        n++;
    }
    // srednia
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += tab[i];
    double srednia = suma / (double)n;

    cout << "Wieksze od sredniej: ";
    for (int i = 0; i < n; i++)
        if (tab[i] > srednia)
            cout << tab[i] << " ";
    cout << endl
         << endl;
    cout << "Mniejsze od sredniej: ";
    for (int i = 0; i < n; i++)
        if (tab[i] < srednia)
            cout << tab[i] << " ";
    return 0;
}