/// Zamiana liczby dziesi�tnej na dwujkow�
/// Autor: Dawid Bindek
/// Data: 2020-01-07

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dec;
    string bin = "";
    cin>>dec;

    while(dec>0)
    {
        if(dec%2==0)
            bin+="0";
        else
            bin+="1";
        dec/=2;

    }
    reverse(bin.begin(),bin.end());
    cout<<bin;




  return 0;
}
