#include <iostream>

using namespace std;

int main()
{
    int n, i, sum=0;
    cout << "Introduceti n: ";
    cin >>n;

    if(n ==1)
    {
        cout<<"1 este numar perfect";
    }
    else
    {
       for (i=1; i<n; i++)
        {
            if(n%i==0)
            {
                sum = sum+i;
            }
        }
        if(n==sum)
        {
            cout<<n <<" este numar perfect.";
        }
        else
        {
            cout<<n << " nu este numar perfect.";
        }
    }


}
