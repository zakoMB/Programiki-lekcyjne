/// Suma cyfr liczby ca³kowitej
/// Autor: Dawid Bindek
/// Data: 2020-01-07

#include <iostream>

using namespace std;

int main()
{
    int n,r;
    int s=0;

    cout<<"Podaj liczbe"<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        s+=r;
        n/=10;


    }
    cout<<s;
}
