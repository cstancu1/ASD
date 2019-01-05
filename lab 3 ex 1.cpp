#include <iostream>
using namespace std;

int main()
{
    int a,b,c, maxim;
    cout << "Introduceti, pe rand, cate o valoare pentru a, b si c: ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a>=b)
    {
        maxim = a;
    }
    else
    {
        maxim = b;
    }

    if (c>maxim)
    {
        maxim = c;
    }

    cout << "Maximul celor 3 numere este:" << maxim;
    return 0;
}
