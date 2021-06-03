/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


struct cell
{   cell(int _x, int _y) : x(_x), y(_y) {}
    int x, y;
}
Destination (4,5), /// Точка назначения.
DeliveryMan(0 ,   0); /// Начальные координаты доставщика.
 
int test(cell s) /// Тест количества минимальных шагов до цели.
{   return abs(Destination.x - s.x) + abs(Destination.y - s.y);
}
 
bool foot()
{  
 
    int t = test(DeliveryMan);
    std::cout << "\n";
 
    if (t == 0) return false;
 
    DeliveryMan.x++;
    if (t > test(DeliveryMan))
    {   std::cout << "E\n";
        return true;
    }
 
    DeliveryMan.x--; DeliveryMan.x--;
    if (t > test(DeliveryMan))
    {   std::cout << "W\n";
        return true;
    }
 
    DeliveryMan.x++; DeliveryMan.y++;
    if (t > test(DeliveryMan))
    {   std::cout << "N\n";
        return true;
    }
 
    DeliveryMan.y--; DeliveryMan.y--;
    std::cout << "S\n";
 
}
 
int main()
{
    setlocale(LC_CTYPE, ".1251");
 
    int i;
    for (i = 0; foot(); i++);
    std::cout << "D\n";
 
    system("pause");
    return 0;
}
