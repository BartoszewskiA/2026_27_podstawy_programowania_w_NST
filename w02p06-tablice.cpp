#include <iostream>

using namespace std;

int main()
{
    const int DLUGOSC = 50;
    int tab[100];
    for (int i = 0; i < DLUGOSC; i++)
    {
        tab[i] = i + 1;
    }

    // for (int i = 0; i < DLUGOSC; i++)
    // {
    //     cout << "tab[" << i << "]=" << tab[i] << "\t";
    // }

    for (int i = DLUGOSC - 1; i >= 0; i--)
    {
        cout << tab[i] << "\t";
    }
    return 0;
}