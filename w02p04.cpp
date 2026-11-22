#include <iostream>

using namespace std;

int main()
{
    int x, i = 0, suma = 0;

    do
    {
        cout << "x= ";
        cin >> x;
        if (x >= 0)
        {
            suma = suma + x;
            i++;
        }
    } while (x >= 0);

    cout << "srednia = " << suma / (double)i;

    return 0;
}