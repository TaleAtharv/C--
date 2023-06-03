#include <iostream>
using namespace std;

int main()
{
   int X, m;
   char pass,name[10];
   int a = 0, n = 0;
   cout << "Enter Your Name: " << endl;
   cin >> name;
   cout << "Enter Your Password: " << endl;
   cin >> pass;
   if (pass = 'a')
   {
      while (true)

      {

         cout << "Press 1 for Bike" << endl;
         cout << "Press 2 for Car" << endl;
         cout << "Press 3 for Bus" << endl;
         cout << "Press 4 for Record" << endl;
         cout << "Press 5 for Delete The Record" << endl;
         cin >> X;

         if (X == 1)
         {
            a = a + 20;
            n = n + 1;
         }
         else if (X == 2)
         {
            a = a + 50;
            n = n + 1;
         }
         else if (X == 3)
         {
            a = a + 70;
            n = n + 1;
         }
         else if (X == 4)
         {
            cout << "Total Amount " << a << endl;
            cout << "Total Number Of Vehicle " << n << endl;
         }
         else if (X == 5)
         {
            a = 0;
            n = 0;
         }
         else
         {
            cout << "Invalid Press";
         }
      }
   }
   cin >> m;
   return 0;
}
