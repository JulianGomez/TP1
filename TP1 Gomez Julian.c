/*  Celsius:	Fahrenheit:
      -20		      4.00
         0                    32.00                                                                                                                                                
       20                    68.00                                                                                                                                                
       40                  104.00                                                                                                                                                
       60                  140.00                                                                                                                                                
       80                  176.00                                                                                                                                                
     100                  212.00                                                                                                                                                
     120                  248.00                                                                                                                                                
     140                  284.00                                                                                                                                                
     160                  320.00                                                                                                                                                
     180                  356.00                                                                                                                                                
     200                  392.00                                                                                                                                                
     220                  428.00                                                                                                                                                
     240                  464.00                                                                                                                                                
     260                  500.00                                                                                                                                                
     280                  536.00                                                                                                                                                
     300                  572.00      
  Julian Gomez 153.605-9
  20160224
*/

#include <stdio.h>

#include <stdlib.h> 



int main(void){
float fah, celsius;
 
int lower, upper, step;
lower = -20;  
upper = 300;
  
step = 20;


celsius = lower;

printf ("\t   Celsius:\t\t  Fahrenheit:\n");

while (celsius <= upper){
     fah = (celsius*9/5)+32;         
     printf ("%16.f %25.2f\n" , celsius , fah);

     celsius = celsius + step;
}

return 0;

}