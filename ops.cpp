#include <iostream>
using namespace std;

class time
{
    int hours;
    int mins;

public:
    void getdata()
    {
        int h;
        int m;
        cin>>h;
        cin>>m;
        hours = h;
        mins = m;
    }
    void display()
    {
        cout << "Hours: " << hours << endl;
        cout << "Mins: " << mins  << endl;
    }
    void sumtime(time, time);
};
void time ::sumtime(time t1, time t2)
{
    mins = t1.mins + t2.mins;
    hours = mins / 60;
    mins = mins % 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    time T1, T2, T3;
    T1.getdata();
    T2.getdata();
    T3.sumtime(T1, T2);
    T1.display();
    T2.display();
    T3.display();
    return 0;
}