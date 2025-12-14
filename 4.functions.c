#include <stdio.h>

void greet(){
    printf("Hello from a C function!\n");
}

void callMe(char name[]){
    printf("Hello %s welcome to C functions!!\n",name);
}

// function prototype
// in other words we call them function declarations
void addNumbers(int number1,int number2);
int calculateAge(int birthYear);

int main(){

    greet();
    callMe("nyaganya");
    callMe("JOHN");
    addNumbers(20,30);
    
    int myAge = calculateAge(2005);
    printf("Now am %d years old!!\n",myAge);

    return 0;
}

void addNumbers(int number1,int number2){
    int sum =  number1 + number2;
    printf("The sum of %d and %d is %d\n",number1,number2,sum);
}

int calculateAge(int birthYear){
    return 2025 - birthYear;
}
