//Definimos la frecuencia de trabajo
//Etiqueta de frecuencia : F_CPU
//UL: Unsigned Long
#define F_CPU 16000000UL

//Librerias
#include <xc.h>
//Esta libreria contiene archivos generales y registros del microcontrolador
#include <util/delay.h>
//Libreria para retardos por software

//Macros
//Etiquetas que se utilizan dentro del programa
#define BtnUser() (PINB &(1<<7))
#define LedHigh() PORTB |=(1<<5)
#define LedLow() PORTB &= ~(1<<5)


//Funcion principal
int main(void)
{
    //Configuracion del MCU
    DDRB |= (1<<5);//DDRB|(1<<5);//DDRB |0b00100000; //Corrimiento de 5 posiciones en el bit5
    PORTB &= ~(1<<5);//El pin PB5 inicia apagado
    
    DDRB &= ~(1<<7);//El pin PB7 lo configuramos como entrada
    
    //Se ejecuta infinitamente
    while(1)//LOOP principal
    {
        //Enmascar pin 7
        if(BtnUser()==0)//Consultar por el boton
        {
            LedHigh();//LED ON
        }else{
            LedLow();//LED OFF
        }
        
//        PORTB |= (1<<5);//led ON
//        _delay_ms(500);//Retardo de 500 milisegundos
//        PORTB &= ~(1<<5);//led OFF
//        _delay_ms(500);
    }
    
}
