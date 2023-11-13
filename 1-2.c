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
 * @param a значение вводимого параметра 
 * @return Результат проверки   
*/
double fun_scan();

int main()
{
  float a, r;
  a = fun_scan();
  r=function(a);
  printf("r=%f\n", r);
}

float function(float x)
{
  float y=x/2.5;
  return (y);
}

double fun_scan() {
    int a;
    double b;
    a=scanf("%lf", &b);
    if (a!=1){
        abort();
    } 
    return b;
}
