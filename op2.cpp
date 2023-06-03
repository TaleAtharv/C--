#include <iostream>
using namespace std;

class shop
{
private:
    int itemID[100];
    int itemprice[100];
    int counter;

public:
    void setcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop :: setprice(void)
{
    cout << "enter your item id " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "set the item price " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop :: displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemID[i] << " is " << itemprice[i] << endl;
    }
} 

int main()
{
    shop gopal;
    gopal.setcounter();
    gopal.setprice();
    gopal.setprice();
    gopal.setprice();
    gopal.displayprice();
    return 0;
}
