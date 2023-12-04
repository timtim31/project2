#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
/**
 * @brief Функция расчета физической формулы
 * @param g, m, f значения константы и вводимых параметров
 * @return Значение вычисления формулы  
*/
float formula(float m, float f);

/**
 * @brief Функция проверки ввода на число 
 * @param value значение вводимого параметра 
 * @return Результат проверки   
*/
double fun_scan(double value);

/**
 * @brief Вводимое значение для входа в программу 
 * @return Вывод 0, если программа неверна. Иначе вывод 1
*/
int main()
{
    float r;
    float m = fun_scan();
    float f = fun_scan();
    r=formula(m, f);
    printf("r=%f\n", r);
    return 0;
}

float formula(float m, float f)
{
    const float g=6.67*pow(10, -6);
    return (pow(((g*m*m)/f),0.5));
}

double fun_scan(double value) 
{
  double value;
  int result = scanf("%lf", &value);
    if ((result != 1)||(result<0))
    {
      printf("error io");
      abort();
    } 
    return value;
}
