/*
 * main.c
 *
 * Created: 4/10/2022 6:47:09 PM
 * Author: CUYUBAMBA ZACARIAS LUIS SEBASTIAN
 * Dispositivo: ATmega328PB.
 * Frecuencia: 16MHz trabajamos con 5V.
 * Descripcion: Encender el pin 5 del puerto B.	
 * Otros: Pruebas realizadas en ATmega328PB Xplained Mini.
 */ 

#include <xc.h>
#include <avr/io.h>

int main(void)
{
	//Configuraciones Iniciales
	DDRB |= (1<<DDRB5);//0b00100000;//Configuramos el pin PB5 como salida digital
	PORTB |= (1<<PORTB5);//0b00100000;//Mandamos un 1 logico al pin PB5.
    while(1)
    {
        //TODO:: Please write your application code 
    }
}