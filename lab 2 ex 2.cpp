#include <iostream>
using namespace std;

int main ()
{
  int i, suma = 0, n;
  cout << "Introduceti n: ";
  cin >> n;
  for(i=0; i<=n; i++)
  {
      suma = suma + i;
  }
  cout << "Suma = " << suma ;

  return 0;
}
