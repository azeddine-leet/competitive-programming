#include <iostream>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
   char N[8][8];
   int C, c, C2, c2;
   bool caca = false;
   for (int i = 0; i < 8; ++i)
   {
      for (int j = 0; j < 8; ++j)
      {
         cin >> N[i][j];
         if (N[i][j] == 'C'){
         if (caca == true){
            C2 = i;
            c2 = j;
         }
            else {
               C = i;
               c = j;
               caca = true;
            }
         }
      }
   }
   if (islower(N[C-2][c+1])){
      cout << "yes";
      return 0;
   }
   if (islower(N[C-1][c+2])){
      cout << "yes";
      return 0;
   }
   if (islower(N[C+1][c+2])){
      cout << "yes";
      return 0;
   }
   if (islower(N[C+2][c+1])){
      cout << "yes";
      return 0;
   }
   if (islower(N[C+2][c-1])){
      cout << "yes";
      return 0;
   }
   
   if (islower(N[C+1][c-2])){
      cout << "yes";
      return 0;
   } 
   if (islower(N[C-1][c-2]))
        cout << "yes";
       return 0;
   if (islower(N[C-2][c-1])){
      cout << "yes";
      return 0;
   }
   if (islower(N[C2-2][c2+1])){
      cout << "yes";
      return 0;
   }
   if (islower(N[C2-1][c2+2])){
      cout << "yes";
      return 0;
   }
   if (islower(N[C2+1][c2+2])){
      cout << "yes";
      return 0;
   }
   if (islower(N[C2+2][c2+1])){
      cout << "yes";
      return 0;
   }
   if (islower(N[C2+2][c2-1])){
      cout << "yes";
      return 0;
   }
   
   if (islower(N[C2+1][c2-2])){
      cout << "yes";
      return 0;
   } 
   if (islower(N[C2-1][c2-2]))
        cout << "yes";
       return 0;
   if (islower(N[C2-2][c2-1])){
      cout << "yes";
      return 0;
   }
   else{
      cout << "no";
   }
   return 0;
   
}
