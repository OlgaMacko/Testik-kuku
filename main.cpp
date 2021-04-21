#include <iostream>
using namespace std;

int main() 
{
char atbilde;
cout << "Nospiediet Y vai N" <<endl;
cout << "Tu dzīvo mežā?" <<endl;
cin >> atbilde;
if (atbilde=='Y') 
  {cout << "Tu esi ezis?";
  if (otvet=='Y') {cout<<"Ņem abolu??";}
  if (otvet=='N')  {cout << "Tu dzīvo tuksnesī?";
          if (otvet=='Y') {cout << "Tu esi kamielis??";}
          if (otvet=='N')  {cout << "Tu dzīvo pilsētā?";}
  }
  }
return 0;

}
