#include <iostream>
using namespace std;

int main() 
{
char otvet;
cout << "Нажмите Y или N" <<endl;
cout << "Ты живёшь в лесу?" <<endl;
cin >> otvet;
if (otvet=='Y') 
  {cout << "Ты баба Яга?";
  if (otvet=='Y') {cout<<"Что и детей пугаешь??";}
  if (otvet=='N')  {cout << "Ты живёшь в пустыне?";
          if (otvet=='Y') {cout << "Ты верблюд??";}
          if (otvet=='N')  {cout << "Ты живёшь в городе?";}
  }
  }
return 0;

}