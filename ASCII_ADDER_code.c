#include <stdio.h>
#include <string.h>

int main (void)
{
    int x = 0;
    char *str = "Congratulations!”";
    int len = strlen(str);
    int i;

    for (int i = 0; i < len; i++) {
        x += str[i] * len;
    }

    printf("[+] Codigo generado: %i\n", x);
    
    return 0;
}
