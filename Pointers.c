#include <stdio.h>
#include <stdlib.h>

int *fun(int n, int** address)   // n is the no.of memory blocks needed , Address is the double pointer to get 
{
    *address = (int*)malloc(n*sizeof(int));
    return *address;
}


int main()
{
    int *ptr = NULL, *ptr1 = NULL;
    ptr=fun(3,&ptr1);
    
    printf("ptr1:%p\nptr:%p",ptr1,ptr);
   free(ptr);
   free(ptr1);
    return 0;
}
