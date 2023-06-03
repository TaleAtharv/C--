#include <iostream>
using namespace std;

class emp
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the ID:- " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "Your ID is:- " << id << " and this your emp number:-" << count << endl;
    }

    static void getcount(void)
    {
        cout << "Your emp number is:- " << count << endl;
    }
};

int emp::count;

int main()
{
    emp atharv, rohan, akshada;
    atharv.setdata();
    atharv.getdata();
    emp::getcount();
    rohan.setdata();
    rohan.getdata();
    emp::getcount();
    akshada.setdata();
    akshada.getdata();
    emp::getcount();
    return 0;
}