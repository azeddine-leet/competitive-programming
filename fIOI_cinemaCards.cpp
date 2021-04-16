#include <iostream>
using namespace std;
const int MAX_VAL = 1000 * 1000 + 1;
bool dejaVu[MAX_VAL];
int nbValeurs;
int main()
{  
   for (int valeur = 0 ; valeur < MAX_VAL ; valeur++)
      dejaVu[valeur] = false;
   cin >> nbValeurs;
   
   int valeur;  
   for (int indice = 0 ; indice < nbValeurs ; indice++)
   {
      cin >> valeur;
      if (dejaVu[valeur])
      {
         cout << valeur << endl;
         return 0;
      }
      dejaVu[valeur] = true;
   }
   cout << -1 << endl;
}       
