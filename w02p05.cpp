#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 0;
    do
    {
        cout << "x[" << i + 1 << "]= ";
        cin >> x;
        if (x < 0)
            continue;
        i++;
    } while (i < 5);

    return 0;
}