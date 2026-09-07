#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
        string Name;
        string Author;
        int PagesQuantity = 0;

    public:

    void Init(string nm, string ar, int pn)
    {
        Name = nm;
        Author = ar;
        PagesQuantity = pn;
    }

    void Input()
    {
        cout << "Enter name: ";
        cin >> Name;

        cout << "Enter author: ";
        cin >> Author;

        cout << "Enter pages: ";
        cin >> PagesQuantity;
    }

    void PrintInfo()
    {
        cout << "Name: " << Name << endl
            << "Author: " << Author << endl
            << "Pages: " << PagesQuantity << endl;
    }

    string GetName()
    {
        return Name;
    }

    void SetName(string nm)
    {
        if (!nm.empty())
        {
            Name = nm;
        }
    }

    string GetAuthor()
    {
        return Author;
    }

    void SetAuthor(string ar)
    {
        if (!ar.empty())
        {
            Author = ar;
        }
    }

    int GetPagesQuantity()
    {
        return PagesQuantity;
    }

    void SetPagesQuantity(int pn)
    {
        if (pn > 0)
        {
            PagesQuantity = pn;
        }
    }
};

int main()
{
    Book obj1;

    obj1.Init("HarryPotter", "Rowling", 432);

    obj1.PrintInfo();

    cout << endl;

    obj1.SetName("HarryPotter2");
    obj1.SetPagesQuantity(352);

    cout << "Name: " << obj1.GetName() << endl;
    cout << "Author: " << obj1.GetAuthor() << endl;
    cout << "Pages: " << obj1.GetPagesQuantity() << endl;

    return 0;
}
