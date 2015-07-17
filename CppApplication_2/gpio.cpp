/* 
 * File:   gpio.cpp
 * Author: andre
 *
 * Created on 17. juli 2015, 21:54
 */

#include <bcm2835.h>
#include <stdio.h>

#define LED RPI_GPIO_P1_12

int main(int argc, char **argv){

if(!bcm2835_init())return 1;

bcm2835_gpio_fsel(LED, BCM2835_GPIO_FSEL_OUTP);
unsigned int delay = 1000;
while(1){
	bcm2835_gpio_set(LED);
	printf("Hello Syltegjerdet1\n");
	bcm2835_delay(delay);
	bcm2835_gpio_clr(LED);
	printf("Hello Syltegjerdet2\n");
	bcm2835_delay(delay);
	
}
}