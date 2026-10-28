#include <stdio.h>
#include <stdint.h>

struct rcc 
{
    uint32_t LOAD,CONTROL;
};

struct rcc rcc1 = {
    .LOAD = 30,
    .CONTROL = 50
};
#define RCC ((struct rcc*)&rcc1)

void main()
{
    printf("Address of rcc1: %p\n",&rcc1);
    printf("Hello, World!\n");
    printf("Value of LOAD: %d\n",RCC->LOAD);
}