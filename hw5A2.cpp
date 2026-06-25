#include <iostream>
#include <string>
using namespace std;

int daysToFund(int startBalance, int dailyDeposit)

{
    int b = startBalance;
    int d = 0;
    int g = 42500;

    while (b < g)
    {
    b += dailyDeposit;
    d++;
    cout << "Day " << d << ": deposited " << dailyDeposit << ", balance now " << b << endl;
    }

    return d;
}
/// -----------------------------------
int main()
{
int startBalance, dailyDeposit;
cout << "Enter the starting Vault balance: ";
cin >> startBalance;

cout << "Enter the daily deposit amount: ";
cin >> dailyDeposit;

cout << "--- Vault Savings Plan ---" << endl;

int d = daysToFund(startBalance, dailyDeposit);
cout << "The Vault was funded in " << d << " days!" << endl;




return 0;
}
