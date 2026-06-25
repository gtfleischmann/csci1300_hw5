#include <iostream>
#include <string>
using namespace std;

///
int totalGold(int donations[], int size)
{
    int sum= 0 ; 
    for (int i=0; i<size; i++)
    {
        sum += donations[i];
    }
    return sum;
}


int main()
{
///
int n;

cout << "Enter the number of gold donations: ";
cin >> n;
int donations[100];
for (int i = 0; i < n; i++)
{
    cout << "Enter gold donation " << i + 1 << ": ";
    cin >> donations[i];
}
int tgold = totalGold(donations, n);
int v = 42500;
cout << "--- Vault Funding ---" << endl;
cout << "Total gold donated: " << tgold << endl;
cout << "Vault goal: " << v << endl;

if (tgold >= v)
{
    cout << "The Vault is fully funded! Surplus: " << tgold - v << " gold" << endl;
}
else
{
    cout << "The Vault still needs " << v - tgold << " more gold." << endl;
}
///
return 0;
}