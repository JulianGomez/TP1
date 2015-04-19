/* 0 Grados Celsius es igual a  32.00 Grados Faharenheit.
  20 Grados Celsius es igual a  68.00 Grados Faharenheit.
  40 Grados Celsius es igual a 104.00 Grados Faharenheit.
  60 Grados Celsius es igual a 140.00 Grados Faharenheit.
  80 Grados Celsius es igual a 176.00 Grados Faharenheit.
  100 Grados Celsius es igual a 212.00 Grados Faharenheit.
  120 Grados Celsius es igual a 248.00 Grados Faharenheit.
  140 Grados Celsius es igual a 284.00 Grados Faharenheit.
  160 Grados Celsius es igual a 320.00 Grados Faharenheit.
  180 Grados Celsius es igual a 356.00 Grados Faharenheit.
  200 Grados Celsius es igual a 392.00 Grados Faharenheit.
  220 Grados Celsius es igual a 428.00 Grados Faharenheit.
  240 Grados Celsius es igual a 464.00 Grados Faharenheit.
  260 Grados Celsius es igual a 500.00 Grados Faharenheit.
  280 Grados Celsius es igual a 536.00 Grados Faharenheit.
  300 Grados Celsius es igual a 572.00 Grados Faharenheit.
  Julian Gomez 153.605-9
  20150419
*/

#include <stdio.h>
#include <conio.h>
int c;
double f;
FILE* doc;

main ()
{
doc=fopen("prueba.txt", "w");
	
printf ("\n Tabla que convierte de Grados Celsius a Grados Faharenheit.\n\n");
printf("\n Celius    Fahrenheit \n");
for(c=0;c<=300;c+=20)
{
f=(((c)*1.8)+32);
printf("\n   %3d      %6.0f\n",c,f);
fprintf(doc,"\n   %3d      %6.0f\n",c,f);
getch();
}
fclose(doc);
}