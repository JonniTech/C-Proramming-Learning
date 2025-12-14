#include <stdio.h>
#include <string.h>

int main(){

    char myName[] = "nyaganya";

    char newName[strlen(myName)];

    strcpy(newName,myName); // used to copy a string => takes destination and source

    printf("Copied name: %s\n",newName);

    printf("Length: %zu\n", strlen(myName));

    char text1[] = "How ";
    char text2[] = "are you doing?";

    strcat(text1,text2); // this appends text2 at the end of text 1

    printf("Greeting: %s\n",text1);

    char string1[] = "malima";
    char string2[] = "malima";

    int result = strcmp(string1,string2); // returns 0 if are the same , if not return different random numbers

    printf("Compare result: %d\n",result);

    return 0;
}