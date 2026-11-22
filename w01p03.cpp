#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    if (y == 0)
    {
        cout << "nie dziel przez zero";
    }
    else
    {
        double wynik = (double)x / y;
        cout << "wynik = " << wynik;
    }
    return 0;
}