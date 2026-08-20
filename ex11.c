#include <stdio.h>

int main() {

 int number;

 printf("Enter numbers (0-15) to form the hex code. Enter 99 to finish.\n");

 while (1) {

 printf("Enter a number: ");

 scanf("%d", &number);

 if (number == 99) {

 break; // stop the loop

 }

 if (number < 0 || number > 15) {

 printf("Invalid number! Must be 0-15.\n");

 continue; // skip invalid input

 }

 char hex_digit;

 // TODO: use switch to convert number to hex

 switch (number) {

  case 0:
    hex_digit = '0';
    break;

  case 1:
    hex_digit = '1';
    break;

  case 2:
    hex_digit = '2';
    break;

  case 3:
    hex_digit = '3';
    break;

  case 4:
    hex_digit = '4';
    break;

  case 5:
    hex_digit = '5';
    break;

  case 6:
    hex_digit = '6';
    break;

  case 7:
    hex_digit = '7';
    break;

  case 8:
    hex_digit = '8';
    break;

  case 9:
    hex_digit = '9';
    break;

  case 10:
    hex_digit = 'A';
    break;

  case 11:
    hex_digit = 'B';
    break;

  case 12:
    hex_digit = 'C';
    break;

  case 13:
    hex_digit = 'D';
    break;

  case 14:
    hex_digit = 'E';
    break;

  case 15:
    hex_digit = 'F';
    break;

  default:
    hex_digit = '?';
    break;

}
 printf("Hex digit: %c\n", hex_digit);

 }

 printf("Hex code entry complete!\n");

 return 0;

}