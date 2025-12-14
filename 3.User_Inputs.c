#include <stdio.h>

int main(){

    // address-of-operator => & 
    // format-specifiers => %d , %c ,%f ,%s ,%lf etc

    int age;
    char name[30];

    printf("Enter your name:");
    fgets(name,sizeof(name),stdin); // used to take inputs with spaces

    printf("Enter your age:");
    scanf("%d",&age); // address-of-operator(pointer)

    printf("Your name is %s and your age is %d\n",name,age);
    printf("Your %d years old!!\n",age);

    return 0;
}