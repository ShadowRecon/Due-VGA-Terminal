#include <avr/pgmspace.h>

#define S_MAX           8
#define S_ERROR         0
#define S_DEBUG         1
#define S_WINDOW        2
#define S_OPEN          3
#define S_CLOSE         4
#define S_EXIT          5
#define S_SERIAL_OUTPUT 6
#define S_TITLE         7

prog_char string_0[] PROGMEM = "ERROR"; 
prog_char string_1[] PROGMEM = "DEBUG"; 
prog_char string_2[] PROGMEM = "Window"; 
prog_char string_3[] PROGMEM = "Open"; 
prog_char string_4[] PROGMEM = "Close";
prog_char string_5[] PROGMEM = "Exit";
prog_char string_6[] PROGMEM = "Serial Output";


PROGMEM const char *string_table[] = 	   
{   
  string_0,
  string_1,
  string_2,
  string_3,
  string_4,
  string_5
};

char* retriveStr(int i)
{
  if (i < S_MAX)
  {
    char* buffer;
    strcpy_P(&buffer, (char*)pgm_read_word(&(string_table[i])));
    return buffer;
  } else
    return;
}
