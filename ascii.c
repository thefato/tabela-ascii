#include <stdio.h>

int main() {
  for (int numero = 0; numero < 255; numero++) {
    char caractere = (char)numero;
    printf("O número %d corresponde ao caractere ASCII: %c\n", numero,
           caractere);
  }

  return 0;
}