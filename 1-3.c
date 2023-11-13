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
 * @param a значение вводимого параметра 
 * @return Результат проверки   
*/
double fun_scan();

int main()
{
    float r, m, f;
    float g;
    m = fun_scan();
    f = fun_scan();
    
    g=6.67*pow(10, -6);
    r=function(g, m, f);

    printf("r=%f\n", r);
}

float function(float g, float m, float f)
{
    float r=pow(((g*m*m)/f),0.5);
    return (r);
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
