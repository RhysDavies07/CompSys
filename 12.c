#include <stdio.h>
#include <math.h>

int main() {

 int binary; // TODO: store the binary number entered by the user

 int binaryCount;

 int decimal = 0; // TODO: store the calculated decimal value

 int power = 0; // TODO: start with 2^0

 int digit; // TODO: used to extract each binary digit

 int is_valid = 1; // TODO: track whether input is valid
 
 int count = 0;
 printf("Enter a number: ");
 scanf("%d", &binary);
 binaryCount = binary;

 // TODO: Use a loop to process each digit of the binary number

 
 while (binaryCount != 0) {
        binaryCount /= 10;
        count++;
    }

 for(int i = 0; i<=count; i++) {
    digit = binary % 10;
    if(digit != 0 && digit != 1) {
        is_valid = 0;
    }
    digit = digit * pow(2,power);
    decimal += digit;
    power += 1;
    binary /= 10;
 }

 if(is_valid == 0) {
    printf("invalid input");
    return 0;
 }

 printf("value %d",decimal);


 return 0;

}