#include "include/tinyIO.h"
#include <stdint.h>

/*
 - Main function to test printf and scanf functionalities along with UART initialization.
 - Initializes UART communication with a specified base address.
 - Sends initial messages over UART.
 - Demonstrates usage of printf for printing integers, unsigned integers, and floats.
 - Uses scanf to read a string, a character, and an unsigned integer from user input.
 */

int main()
{ 
  uint32_t baseaddr = 0x42C00000; // UART's base address
    uart_init(baseaddr);

    printf("m\n");
    printf("hi zybo, i've received your character! \n");

    uint32_t unsigned_p = 10;
    int integer_p = -11;
    float float_p = 6.3;

    printf("%d\n", integer_p);
    printf("%u\n", unsigned_p);
    printf("%f\n", float_p);

    uint32_t number_p;
    char string_p[100];
    char character_p;

    printf("Enter a string: ");
    scanf("%s", string_p);
    printf("String read: %s\n", string_p);

    printf("Enter a character: ");
    scanf("%c", &character_p);
    printf("Character read: %c\n", character_p);

    printf("Enter an unsigned integer: ");
    scanf("%u", &number_p);
    printf("Number read: %u\n", number_p);
   return 0;

}


