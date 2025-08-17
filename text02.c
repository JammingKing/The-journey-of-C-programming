#include <stdio.h>
#include <stdbool.h>
int main(){

    int age = 18;
    printf("I am %d years old.\n" , age);
    
    float temperature = 29.5;
    printf("The current temperature is %.1f°C.\n" , temperature);

    double pi = 3.141592653589793;
    double e = 2.718281828459045;
    printf("The value of e is approximately %.15lf.\n" , e);
    printf("The value of pi is approximately %.15lf.\n" , pi);

    char grade = 'A';
    char symbol = '!';
    char currency = '$';
    printf("Your grade is %c.\n" , grade);
    printf("The symbol is %c.\n" , symbol);
    printf("The currency symbol is %c.\n" , currency);

    char name[] = "JamminngKing";
    char emoji[] = "😊";
    char meme[] = "^_^";
    printf("My name is %s.\n" , name);
    printf("Here is an emoji: %s.\n" , emoji);
    printf("Here is a meme: %s.\n" , meme);
    
    bool isStudent = true;

    printf("%d\n", isStudent);

    if (isStudent) {
        printf("I am a student.\n");
    } else {
        printf("I am not a student.\n");
    }
    {
        /* code */
    }
    

    return 0;
}