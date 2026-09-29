// Lab_03_3.cpp 
// Сьорак Денис
// Лабораторна робота № 3.3 
// Розгалуження, задане графіком функції. 
// Варіант 28 

#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // вхідний аргумент 
    double R;  // вхідний параметр 
    double y;  // результат обчислення виразу 

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі 
    // 1 умова
    if (x <= (-8 - R))
        y = -R;
    else
        // 2 умова
        if (-8 - R < x && x <= -8 + R)
            y = sqrt(pow(R, 2) - pow(x + 8, 2)) - R;
        else
            // 3 умова
            if (x > -8 + R && x <= 2)
                y = ((2 + R) * (x + 8 - R)) / (10 - R);
            else
                // 4 умова
                if (x > 2 && x <= 6)
                    y = 0;
                else
                    // 5 умова
                    if (x > 6)
                        y = pow((x - 6), 2);

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}