#include <math.h>    
#include <stdio.h>  

/**  
 * @brief Функция расчета формулы 
 * @param x, y, z значения параметров 
 * @return Значение вычислений    
*/ 
float function(float x, float y, float z); 

/** 
 * @brief Функция расчета формулы  
 * @param x, y, z значения параметров  
 * @return Значение вычислений    
*/ 
float function1(float x, float y, float z); 

/**
 * @brief Вводимое значение в программу 
 * @return Вывод 0, если программа неверна. Иначе вывод 1
*/
int main ()  
{  
    float x, y, z, a, b;  
    x = 0.61;  
    y = 0.9;  
    z = 0.3;  
    a = function(x, y, z); 
    b = function1(x, y, z); 
    printf ("a=%f\n b=%f\n", a, b);  
} 

float function(float x, float y, float z) 
{ 
    return ((pow(z, 2 * x) + pow (y, -1) * cos(z + y) * x) / (x + 1)); 
} 
float function1(float x, float y, float z) 
{  
    return (pow(pow (x, 2) + y, 0.5) - pow(y, 2) * pow(sin((x + z) / x), 3)); 
} 
