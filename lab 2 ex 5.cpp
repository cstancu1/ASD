#include <iostream>
#include <math.h>
using namespace std;

int functie(int x){
    int rezultat;
    if (x<-7)
    {
        rezultat = -6*x+20;
    }
    else if (x>=-7 && x<=0)
    {
        rezultat = x+30;
    }
    else
    {
        rezultat = sqrt(x) + 2;
    }

    return rezultat;
  }


int main ()
{
   int x;
   cout << "Introduceti x:";
   cin >> x;
   cout << "Rezultatul functiei f(x) este: " << functie(x);
}


