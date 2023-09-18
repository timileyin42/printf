#include <stdarg.h>
#include "main.h"

int main() {
    int length = 0;
    unsigned int octalValue = 42; 

    _printf("Octal Value: %o\n", octalValue);
    
    handle_octal(octalValue, &length);

    _printf("\nLength: %d\n", length;)
    
    return 0;
}

