#include <stdio.h>

int main(){

    int age = 20;

    // printf("%p\n",&age);

    int* ptr = &age;

    printf("Address: %p\n",ptr); // printing a pointer 

    *ptr = 25; // changing a value of a variable using a pointer

    printf("Value: %d\n",*ptr); // return a value of that address stored in ptr pointer

    return 0;
}