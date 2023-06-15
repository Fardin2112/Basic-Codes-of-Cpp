#include<iostream>
using namespace std;

int main()
{
    char str[] = "12abc12";
 
    int alphabet = 0, number = 0, i;
    for (i = 0; str[i] != '\0'; i++)
    {
     
        // check for alphabets
        if (isalpha(str[i]) != 0)
            alphabet++;
 
        // check for decimal digits
        else if (isdigit(str[i]) != 0)
            number++;
    }
 
    printf("Alphabetic_letters = %d, "
           "Decimal_digits = %d\n",
           alphabet, number);
 
    return 0;
}