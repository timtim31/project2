#include <math.h>    
#include <stdio.h>  

/**  
 * @brief Функция расчета формулы 
 * @param x, y, z значения параметров 
 * @return Значение вычислений    
*/ 
float getA(float x, float y, float z); 

/** 
 * @brief Функция расчета формулы  
 * @param x, y, z значения параметров  
 * @return Значение вычислений    
*/ 
float getB(float x, float y, float z); 

/**
 * @brief Вводимое значение в программу 
 * @return Вывод 0, если программа неверна. Иначе вывод 1
*/
int main ()  
{  
    float a, b;  
    const  float x = 0.61, y = 0.9, z = 0.3; 
    a = getA(x, y, z); 
    b = getB(x, y, z); 
    printf ("a=%f\n b=%f\n", getA(x, y, z), getB(x, y, z));  
    return 0;
} 

float getA(float x, float y, float z) 
{ 
    return ((pow(z, 2 * x) + pow (y, -1) * cos(z + y) * x) / (x + 1)); 
} 
float getB(float x, float y, float z) 
{  
    return (pow(pow (x, 2) + y, 0.5) - pow(y, 2) * pow(sin((x + z) / x), 3)); 
} 
