#include <stdio.h>
#include <stdlib.h>

/**
* @brief Функция расчета формулы
* @param x значение параметра
* @return Значение вычислений  
*/
float function(float x);

/**
* @brief Функция проверки ввода на число 
* @param  value значение вводимого параметра 
* @return Результат проверки   
*/
double fun_scan(double value);

/**
* @brief Вводимое значение для входа в программу 
* @return Вывод 0, если программа неверна. Иначе вывод 1
*/
int main()
{
  float a = fun_scan();
  printf("r=%f\n", function(a));
  return 0;
}

float function(float x)
{
  return x / 2.5;
}

double fun_scan(double value)
{
  double value;
  int result = scanf("%lf", &value);
    if (result != 1)
    {
      printf("error io");
      abort();
    } 
    return value;
}
