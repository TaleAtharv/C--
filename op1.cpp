#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    void check(void);
    void imp(void);
    void display(void);
};

void binary::read(void)
{
    cout << "enter the binary number= " << endl;
    cin >> s ;
}

void binary::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}

void binary::imp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        { 
            s.at(i) = '1';
        }
        else
        { 
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl; 
}

int main()
{
    binary q;
    q.read();
    q.check();
    q.display();
    q.imp();
    q.display();

    return 0;
}