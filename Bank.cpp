#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string Number;
    string Owner;
    double Balance = 0;

public:

    void Init(string nm, string ow, double bl)
    {
        Number = nm;
        Owner = ow;
        Balance = bl;
    }

    void Input()
    {
        cout << "Enter account number: ";
        cin >> Number;

        cout << "Enter owner: ";
        cin >> Owner;

        cout << "Enter balance: ";
        cin >> Balance;

        if (Balance < 0)
        {
            Balance = 0;
        }
    }

    void PrintInfo()
    {
        cout << "Account number: " << Number << endl
            << "Owner: " << Owner << endl
            << "Balance: " << Balance << endl;
    }

    void AddMoney(double money)
    {
        if (money > 0)
        {
            Balance = Balance + money;
        }
    }

    void TakeMoney(double money)
    {
        if (money > 0 && money <= Balance)
        {
            Balance = Balance - money;
        }
        else
        {
            cout << "Not enough money!" << endl;
        }
    }

    string GetNumber()
    {
        return Number;
    }

    void SetNumber(string nm)
    {
        if (!nm.empty())
        {
            Number = nm;
        }
    }

    string GetOwner()
    {
        return Owner;
    }

    void SetOwner(string ow)
    {
        if (!ow.empty())
        {
            Owner = ow;
        }
    }

    double GetBalance()
    {
        return Balance;
    }

    void SetBalance(double bl)
    {
        if (bl >= 0)
        {
            Balance = bl;
        }
    }
};

int main()
{
    BankAccount obj1;

    obj1.Init("123456789", "Eva", 5000);

    obj1.PrintInfo();

    cout << endl;

    obj1.AddMoney(2000);

    cout << "Balance: " << obj1.GetBalance() << endl;

    obj1.TakeMoney(1000);

    cout << "Balance: " << obj1.GetBalance() << endl;

    obj1.TakeMoney(10000);

    return 0;
}
