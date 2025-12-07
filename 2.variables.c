#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 20; // int data type
    float price = 20.34; // float data type
    double price2 = 50.234; // double data type
    char currency = '$'; // char data type
    char name[] = "Nyaganya malima Nyaganya";
    bool isProgrammer = true;
    age = 30; // changing a value stored in variable age

    printf("Your %d years old\n",age);
    printf("Your prices are: %f and %lf\n",price,price2);
    printf("Your currency sign is %c\n",currency);
    printf("Welcome back %s to C programming language , a mother of other programming languages!!\n",name);
    printf("Nyaganya is Programmer: %d\n",isProgrammer);
    printf("%zu",sizeof(currency)); // output the size of memory this variable takes in computer memory

}