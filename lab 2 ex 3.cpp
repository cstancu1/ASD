#include <iostream>
using namespace std;

int main ()
{
  int i, n;
  float ma = 0;

  cout << "Introduceti n: ";
  cin >> n;
  for(i=0; i<=n; i++)
  {
      ma = ma + i;
  }
  ma = ma/n;
  cout << "Media aritmetica a " << n <<" numere naturale consecutive este egala cu:" << ma ;

  return 0;
}
