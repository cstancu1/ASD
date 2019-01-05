#include <iostream>

using namespace std;

int main()
{
    float a,b,x;
    cout << "Introduceti, pe rand, valorile intervalului: ";
    cin >> a;
    cin >> b;
    cout << "Introduceti valoarea lui x: ";
    cin >> x;

    if ((x>=a)&&(x<b))
    {
        cout << "Numarul "<< x <<" se afla in intervalul" << a << ", " <<b;
    }
    else
    {
       cout << "Numarul "<< x <<" NU se afla in intervalui" << a << ", " <<b;
    }
}

