/* 0          32
   20          68
   40         104
   60         140
   80         176
  100         212
  120         248
  140         284
  160         320  
  180         356
  200         392
  220         428
  240         464
  260         500
  280         536
  300         572
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