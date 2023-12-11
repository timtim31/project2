#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>

/**
* @brief Функция расчета физической формулы
* @param m, f значения вводимых параметров
* @return Значение вычисления формулы  
*/
float formula(float m, float f);

/**
* @brief Функция проверки ввода на число 
* @return Результат проверки   
*/
double fun_scan();

/**
* @brief Вводимое значение для входа в программу 
* @return Вывод 0, если программа неверна. Иначе вывод 1
*/
int main()
{
    float m = fun_scan(m);
    float f = fun_scan(f);
    float r = formula(m, f);
    printf("r=%f\n", r);
    return 0;
}

float formula(float m, float f)
{
    const float g = 6.67 * pow(10, -6);
    return (pow(((g * m * m) / f), 0.5));
}

double fun_scan() 
{
    double value;
    int result = scanf("%lf", &value);
    if ((result != 1) || (result < DBL_EPSILON))
    {
        puts("error io");
        abort();
    } 
    return value;
}
