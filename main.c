/*
 * test_przesuniecia_bitoweg_w_lewo.c
 *
 * Created: 07.04.2020 17:05:54
 * Author : Pimpuk
 */ 

#include <avr/io.h>
#include <avr/eeprom.h>

const EEMEM unsigned char adres;

long load()
{
	long cztery = eeprom_read_byte(& adres);
	long trzy = eeprom_read_byte(& adres + 1);
	long dwa = eeprom_read_byte(& adres + 2);
	long jeden = eeprom_read_byte(& adres + 3);

	return (((long)cztery << 0) & 0xFF) + (((long)trzy << 8) & 0xFFFF) + (((long)dwa << 16) & 0xFFFFFF) + (((long)jeden << 24) & 0xFFFFFFFF);
}

int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
    }
}

