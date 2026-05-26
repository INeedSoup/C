#include <stdio.h>


void birthday(int age);
void birthday1(int *pAge); 

int main()
{
    // Pointer = A variable that stores the memory address of another variable, they help avoid wasting memory by allowig you to pass the address of a large data structure instead of copying the entire data

    int age = 25;

    int *pAge = &age; 

    // dereference operator int *pAGE and int* pAge both works

    printf("%p\n", (void *)&age); // %p expects an address converted to void *

    printf("%p\n", (void *)pAge); // here we are displaying the value stored in pointer and that is a address

    birthday(age); // this is pass by value, so are scope varies we dont work on the orignal variable

    printf("You are %d years old\n", age);

    birthday1(pAge); // this is pass by reference, here we are working on main variable here

    // when  a functions paramter is pointer then we necessarily dont need to create pointer variable, we can just pass address of the variable
    birthday1(&age);

    printf("You are %d years old\n", age);

    return 0;
}


void birthday(int age) // pass by value
{
    age++;
    printf("Inside birthday(), the copied age is %d\n", age);
}

void birthday1(int *pAge)
{
    (*pAge)++; //we are parenthesis to force operator precedence
}
