#include <stdio.h>
#include<string.h>

int main() {

    //. Integer Format Specifiers
    int a = 25;
    unsigned int b = 300;
    long int c = 1000000;
    long long int d = 123456789;

    printf("Integer: %d\n", a);      // Integer: 25
    printf("Unsigned: %u\n", b);     // Unsigned: 300
    printf("Long: %ld\n", c);        // Long: 1000000
    printf("Long Long: %lld\n", d);  // Long Long: 123456789


    // octal and hexadecimal specifiers
    printf("Octal: %o\n", a);        // Octal: 31
    printf("Hexadecimal (lowercase): %x\n", a);  // Hexadecimal (lowercase): 19
    printf("Hexadecimal (uppercase): %X\n", a);  // Hexadecimal (uppercase): 19



    //Floating Point Format Specifiers
    float f = 3.14159;
    double di= 3.14159265358979;

    printf("Float: %f\n", f);    // Float: 3.141590
    printf("Double: %lf\n", di);  // Double: 3.141593
    printf("Scientific (lowercase): %e\n", di);  // Scientific (lowercase): 3.141593e+00
    printf("Scientific (uppercase): %E\n", di);  // Scientific (uppercase): 3.141593E+00
    printf("General (lowercase): %g\n", f);     // General (lowercase): 3.14159
    printf("General (uppercase): %G\n", f);     // General (uppercase): 3.14159



    // Character and string specifiers
    char ci = 'A';
    char str[] = "Hello, World!";

    printf("Character: %c\n", ci);   // Character: A
    printf("String: %s\n", str);     // String: Hello, World!
   
    //pointer format specifiers

    int ai = 10;
    int *p = &ai;

    printf("Address of ai: %p\n", (void *)p);  // Address of ai will be printed

    //    %n: Used to store the number of characters printed so far into an integer variable.
   //    %%: Used to print a literal % symbol.

   int count;
   printf("Hello, World!%n\n", &count);
   printf("Number of characters printed: %d\n", count);  // Number of characters printed: 13

   printf("Percentage symbol: %%\n");  // Percentage symbol: %

   float fi= 3.14159;
    int num = 42;

    printf("Integer with width 5: %5d\n", num);     // Integer with width 5:    42
    printf("Float with width 8 and precision 2: %8.2f\n", fi);  // Float with width 8 and precision 2:    3.14
    printf("Float with width -8 and precison 2: %-8.2f\n",fi);
short int si = 10;
long int li = 100000;
long long int lli = 10000000000;

printf("Short integer: %hd\n", si);       // Short integer: 10
printf("Long integer: %ld\n", li);        // Long integer: 100000
printf("Long long integer: %lld\n", lli); // Long long integer: 10000000000


//STRING LENGTH 

//-> using inbuilt function


    char stri[] = "abcd";  // Declare a string

    // Using strlen to count the length of the string
    int length = strlen(stri);

    // Print the length
    printf("Length of the string: %d\n", length);

//-> using loop
    
char stri2[] = "abcd";  // Declare a string
    int length2 = 0;

    // Loop through each character of the string
    while (stri2[length2] != '\0') {
        length2++;  // Increment length for each character
    }

    // Print the length
    printf("Length of the string: %d\n", length2);


// ->>>>Without using loop and inbuilt function
char str3[] = "abcd";  // Declare a string
    int length3 = string_length(str3, 0);  // Call the recursive function with index 0

    // Print the length
    printf("Length of the string3: %d\n", length3);

}
int string_length(char str[], int index) {
    // Base case: if we reach the null terminator, return 0
    if (str[index] == '\0') {
        return 0;
    } else {
        // Recursive case: 1 (for current character) + recursion for the next character
        return 1 + string_length(str, index + 1);
    }
}