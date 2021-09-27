// Lab_03_3.cpp
// <Enver Seytumerov>
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 22
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
 double x; // вхідний аргумент
 double R; // вхідний параметр
 double y; // результат обчислення виразу
 cout << "R = "; cin >> R;
 cout << "x = "; cin >> x;

 // розгалуження в повній формі
 if (x<=-8)
  y = -R;
   else
    if (-8>x && x<=-R)
      y = -R + (R/(-R+8))*(x+8);
        else
            if (x>=-R && x<=R)
                y=sqrt(pow(R,2)-pow(x,2));
                    else
                        if (x>=R && x<=5)
                            y=(2/(5-R) * (x-R));
                        else
                            y=3;
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
 return 0;
}
