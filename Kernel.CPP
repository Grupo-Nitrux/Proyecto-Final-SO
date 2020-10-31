#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void main(){
	printf("Hola mundo, somos el grupo Nitrux: \n");
   printf("Oscar Galindo \n");
   printf("Angel Mohr \n");
   printf("Marco Lopez \n");
   printf("Anner Delgado \n \n");
	printf("Menu Principal \n");
   printf("Ingrese el numero de la opcion deseada: \n \n");
   printf("1) Calculadora \n");
   printf("2) Emitir sonido \n");
   printf("3) Apagar \n \n");
   int s1;
   int s2;
	scanf("%d", &s1);
	switch(s1){
		case 1:
      	printf("\nCalculadora \n");

         printf("\nIngrese primer numero: ");
         float n1;
         scanf("%f", &n1);
         printf("Ingrese segundo numero: ");
         float n2;
         scanf("%f", &n2);
         float n3;

         s2 = 0;
         do{

         printf("\nIngrese el numero de la opcion deseada: \n \n");
         printf("1) Sumar \n");
         printf("2) Restar \n");
         printf("3) Multiplicar \n");
         printf("4) Dividir \n");
         printf("5) Salir \n \n");

         scanf("%d", &s2);
			switch(s2){
				case 1:
               n3 = n1 + n2;
               printf("\nResultado: %f \n", n3);
            	break;
            case 2:
            	n3 = n1 - n2;
               printf("\nResultado: %f \n", n3);
            	break;
            case 3:
            	n3 = n1 * n2;
               printf("\nResultado: %f \n", n3);
            	break;
            case 4:
            	n3 = n1 / n2;
               printf("\nResultado: %f \n", n3);
            	break;
            case 5:
               printf("\nSaliendo...", n3);
            	break;
            default:
            	printf("\nError");
         }

         }while(s2 != 5);

			break;
		case 2:
      	printf("\nEmitiendo sonido... \n");
         //putchar('\a');
         Beep(600, 2000);
			break;
		case 3:
      	printf("\nApagar \n");
         printf("La computadora se apagara al presionar una tecla" );
         getch();
    		system("shutdown -s -t 00 -f");
			break;
		default:
      	printf("\nError");
   }
	getch();
}