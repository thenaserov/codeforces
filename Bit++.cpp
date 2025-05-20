#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   int n;

   cin >> n;
   vector<string> statements(n);
   for (int i = 0; i < n; i++)
   {
      cin >> statements[i];
   }
   int x = 0;
   for (int i = 0 ; i < n; i++)
   {
      if (statements[i][0] == '+' || statements[i][2] == '+')
      {
         x++;
      }
      else if (statements[i][0] == '-' || statements[i][2] == '-')
      {
         x--;
      }
   }
   cout << x << endl;
   return 0;
}
