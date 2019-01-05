#include <iostream>
using namespace std;

int main ()
{
  int i, n, produs = 1;


  cout << "Introduceti n: ";
  cin >> n;
  for(i=1; i<=n; i++)
  {
      produs = produs * i;
  }
  cout << n <<" factorial este egal cu " << produs ;

  return 0;
}
