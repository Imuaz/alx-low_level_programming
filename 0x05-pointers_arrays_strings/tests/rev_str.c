#include "main.h"
#include <string.h>


void rev_string(char *s) {
    int len = strlen(s);
    char temp;
    int i, j;
    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
