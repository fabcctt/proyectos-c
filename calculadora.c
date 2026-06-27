#include <stdio.h>

int main(void)
{
  int opcion;
  float num1, num2;

  printf("Escoja su operacion.\n");
  printf("1. Sumar\n");
  printf("2. Restar\n");
  printf("3. Dividir\n");
  printf("4. Multiplicar\n");
  scanf("%d", &opcion);

  if (opcion >= 1 && opcion <= 4)
  {
    printf("Ingrese el primer numero:\n");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero:\n");
    scanf("%f", &num2);

    switch (opcion)
    {
        case 1:
        printf("Calculo: %.2f + %.2f: %.2f.\n", num1, num2, num1 + num2);
        break;

        case 2:
        printf("Calculo: %.2f - %.2f: %.2f.", num1, num2, num1 - num2);
        break;

        case 3:
        printf("Calculo: %.2f / %.2f: %.2f.", num1, num2, num1 / num2);
        break;

        case 4:
        printf("Calculo: %.2f . %.2f: %.2f.", num1, num2, num1 * num2);

    }
  }
    else
    {
      printf("Opcion Invalida, eliga entre 1 al 4.\n");
    }
    return 0;
}