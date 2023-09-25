#include <stdio.h>
#include <stdlib.h>
int main(void)
{ 
    char name[5]= "Kevin";
    int age=21;
    char blood='B';
    float height=172.9;
    double money=1234567000;
    printf("1234567890123456789012345678901234567890");
    printf("1234567890\n");
    printf("My name is %s,\t I am %d years old.\n", name, age);
    printf("And my blood type is %c,\t %lf height.\n", blood, height);
    printf("I have %E dollors.\n", money);
    
    return 0;
}