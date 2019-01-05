#include <iostream>

using namespace std;

int main()
{
    int n, s = 0 , p = 1, i;
    cout << "Introduceti valoarea lui n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        s = s + i;
    }

    for (i=1; i<=n; i++)
    {
        p = p * i;
    }

    cout << "Suma este egala cu: " <<s <<"\n";
    cout << "Produsul este egal cu: " <<p;

}

