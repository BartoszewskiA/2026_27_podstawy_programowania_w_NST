#include <iostream>

using namespace std;

int main()
{
    int x, i = 0, suma = 0;

    while(true)
    {
        cout << "x= ";
        cin >> x;
        if (x < 0)
            break;
        suma = suma + x;
        i++;
    }

    cout << "srednia = " << suma / (double)i;

    return 0;
}