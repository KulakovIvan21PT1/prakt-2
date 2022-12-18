#include <iostream>                                      
#include <cmath>                                         // для функции cos sin
 
#define PI 3.14159265                                    // число ПИ
 using namespace std;
int main()
{

string y;
string x;
 int first ; // Числа, введенные с клавиатуры
cout << "Введите cos или sin, знечение, ` если угол в градусах или . если в радианах""\n";
cin>>x>>first>>y;
if (y=="`") 
{ 
    
if (x=="cos")
{
 cout << "cos "     << first
            << " градусов = " << cos(first * PI / 180)   // вычисляем косинус угла, переведённого в радианы
            << endl;
} else
    

            cout << "sin "  << first
            << " градусов = " << sin(first * PI / 180) // вычисляем синус угла, переведённого в радианы
            << endl;
} else
    {

    
if (x=="cos")
{
 cout << "cos "     << first
            << " радиан = " << cos(first )   // вычисляем косинус угла, переведённого в радианы
            << endl;
} else
    

            cout << "sin "  << first
            << " радиан = " << sin(first ) // вычисляем синус угла, переведённого в радианы
    << endl;}
    return 0;
}
