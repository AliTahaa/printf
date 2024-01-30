#include "main.h"

int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %i]\n", len2, len);
    _printf("Character:[%c]\n", 'A');
    printf("Character:[%c]\n", 'A');
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Length:[%d, %i]\n", len2, len);
    len = _printf("String:%c[%s]\n",'A',"ali mohamed");
    len2 = printf("String:%c[%s]\n",'A',"ali mohamed");
    printf("Length:[%d, %i]\n", len2, len);

   /* _printf("%c%s%s%c\n", 'A', "Hello, World!", "This is the end.", 'Z');
    printf("%c%s%s%c\n", 'A', "Hello, World!", "This is the end.", 'Z');*/

    return (0);
}
