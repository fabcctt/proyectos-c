#include <stdio.h>
int main(void)
{
  int cantidad;
  int suma = 0;
  float promedio;
  int numeros[100];

  printf("Ingrese la cantidad de numeros que calcularas.\n");
  scanf("%d", &cantidad);

  for(int i = 0; i < cantidad; i++)
  {
    printf("Numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }
  for(int i = 0; i < cantidad; i++)
  {
  suma += numeros[i];
  }
  promedio = (float)suma / cantidad;
  printf("Resultados.\n");
  printf("%d\n", suma);
  printf("Promedio: %d/%d : %.2f\n", suma, cantidad, promedio);


    return 0;
}
