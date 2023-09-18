// WE WILL WRITE OUR OWN STRING HELPER METHODS!
// DO NOT IMPORT ADDITIONAL LIBRARIES FOR THIS EXERCISE
#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>
#include <string.h>
// TODO: update helper prototypes with parameter and return types
bool isAlpha(char c);
int strLen(string str);
char toUpper(char c);

int main(void)
{
    // TODO: write tests for each of your method as you complete them

    string str = get_string("Enter string: ");
    printf("strLen of str is %i\n", strLen(str));
    printf("toUpper of char z %c\n", toUpper('z'));
    printf("toUpper of char Z is %c\n", toUpper('Z'));
    printf("isAlpha of z is %d\n", isAlpha('z'));
    printf("isAlpha of 0 is %d\n", isAlpha(0));

}

// Function to check if a character is an alphabet (A-Z or a-z)
bool isAlpha(char c) {

    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// Function to calculate the length of a string
int strLen(string str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to convert a string to uppercase
char toUpper(char c) {

    if (c >= 'a' && c <= 'z') {
            // Convert lowercase letters to uppercase
            c = c - 32;
        }


    return c;
}
