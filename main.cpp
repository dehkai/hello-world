#include <iostream>
#include <iomanip>
using namespace std;
double maxi(double arra[ ], int siz);
int main()
{
    double arra[100];
    int i,siz = 8;
    cout<<endl<<maxi(arra,siz);
    return 0;
}
/////////////////////////////////////////////////
double maxi(double arra[ ], int siz)
{
    int i;
    for(i = 0; i < siz; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arra[i];
    }
    // Loop to store largest number to arr[0]
    for(i = 1;i < siz; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arra[0] < arra[i])
           arra[0] = arra[i];
    }
    cout << "Largest element = ";
    return arra[0];
}
