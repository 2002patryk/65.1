#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const int SIZE = 1000;
float tab[SIZE][2];

void licznikzad() 
{
	
	ifstream plik("dane_ulamki.txt");
    for (int i = 0; i < SIZE; i++) 
	{
    plik >> tab[i][0] >> tab[i][1];
	}
   
  float minLicznik = 9999, minMianownik = 9999, minUlamek = 9999;
  float ulamek;
 
  for (int i = 0; i < SIZE; i++) 
  {
    ulamek = tab[i][0] / tab[i][1];
    
    if (ulamek <= minUlamek) 
	{
      if (ulamek == minUlamek && tab[i][1] > minMianownik)
	  {
	   
      minUlamek = ulamek;
      minLicznik = tab[i][0];
      minMianownik = tab[i][1];
      
      }
    }
  }
  cout << "Licznik: " << minLicznik << " Mianownik: " << minMianownik << endl;

}

int main() 
{
	
	licznikzad();
	
	return 0;
}

