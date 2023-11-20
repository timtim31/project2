#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
/**
 * @brief Функция расчета формулы
 * @param g, m, f значения параметров
 * @return Значение вычислений  
*/
float function(float g, float m, float f);

/**
 * @brief Функция проверки ввода на число 
 * @param value значение вводимого параметра 
 * @return Результат проверки   
*/
double fun_scan();

/**
 * @brief Вводимое значение в программу 
 * @return Вывод 0, если программа неверна. Иначе вывод 1
*/
int main();

int main()
{
    float r, m, f, g;
    m = fun_scan();
    f = fun_scan();
    
    g=6.67*pow(10, -6);
    r=function(g, m, f);

    printf("r=%f\n", r);
}

float function(float g, float m, float f)
{
    return (pow(((g*m*m)/f),0.5));
}

double fun_scan() {
  double value;
  int result = scanf("%lf", &value);
    if (result != 1)
    {
      printf_s("error io");
      abort();
    } 
    return value;
}
