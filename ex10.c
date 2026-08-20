#include <stdio.h>

#include <stdint.h>

int8_t update_health(int8_t health, int8_t change){

 int8_t new_health = health + change;

 if (new_health > 100 ) {

 new_health = 100; // Max health is 100

 } else if (new_health < 0) {
 printf("Player Health: %d\n", new_health);
 new_health = 0;

 }

 return new_health;

}

int main() {

 int8_t health = 80; // Player’s current health

 int8_t potion = 100; // Health potion restores 100 health

 health = update_health(health, potion);

 if (health == 0) {

 printf("Player Died\n");

 }else {

 printf("Player Health: %d\n", health);

 }

 return 0;

}


//Problem here is that again there is overflow.  100+80 = 180 >127.  The resulting number is -76 which the program then turns into 0.