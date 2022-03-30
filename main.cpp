#include <iostream> 
using namespace std; 
int main() 
{ setlocale(0,".1251"); 
  int a[10],  max,  i,min ; double L ;
cout<<"\nВведiть 10 цілих елементів масиву:\n"; 
  for (int i=0; i<10; i++)  cin >> a[i]; 
min=a[0]; max = a[0];
for (i=0; i<10; i++)
  if (a[i] > max) { max=a[i];}
  for (i=0; i<10; i++)
  if (a[i] < min) { min=a[i];}
  
  cout<<"\nМаксимальне значення = " << max <<endl;
  cout<<"Мінімальне значення = " << min <<endl;
 
  system ("pause>>void"); 
  return 0; 
} 
