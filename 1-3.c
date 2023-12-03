#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
/**
 * @brief Функция расчета физической формулы
 * @param g, m, f значения константы и вводимых параметров
 * @return Значение вычисления формулы  
*/
float formula(float g, float m, float f);

/**
 * @brief Функция проверки ввода на число 
 * @param value значение вводимого параметра 
 * @return Результат проверки   
*/
double fun_scan();

/**
 * @brief Вводимое значение для входа в программу 
 * @return Вывод 0, если программа неверна. Иначе вывод 1
*/
int main()
{
    float r;
    const float g=6.67*pow(10, -6);
    float m = fun_scan();
    float f = fun_scan();
    r=formula(g, m, f);
    printf("r=%f\n", r);
    return 0;
}

float formula(float g, float m, float f)
{
    return (pow(((g*m*m)/f),0.5));
}

double fun_scan() {
  double value;
  int result = scanf("%lf", &value);
    if (result != 1)
    {
      printf("error io");
      abort();
    } 
    return value;
}
