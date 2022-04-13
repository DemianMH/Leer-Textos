#include <stdlib.h>
#include <stdio.h>

FILE *Arch;     //variable de tipo archivo
char c;
int xLetras, xMayus, xMinus, xNumeros, xEspacios;

bool EsMayus( char c) {
  if ( c>= 65 && c<= 90)
     return true;
  else
     return false;	 	
}

bool EsMinus( char c) {
  if ( c>= 97 && c<= 122)
     return true;
  else
     return false;	 	
}

bool EsLetra( char c) {
  if ( EsMayus(c) || EsMinus(c) )	
     return true;
  else
     return false;	 	
}

bool EsEspacio( char c) {
  if ( c== 32 )
     return true;
  else
     return false;	 	
}

bool EsNumero( char c) {
  if ( c>= 48 && c<= 57)
     return true;
  else
     return false;	 	
}
bool SigPun(char c){
	if(c==44 && c==46 && c==58 && c==59 && c==96 && c==147 && c==168 && c==161 && c==63 )
	return true;
	else
	return false;
}
bool SimbEsp(char c){
	if(c>= 1 && c<=15)
	return true;
	else
	return false;
}
bool SimbArit(char c){
	if(c==42 && c==45 && c==246 && c==43 && c==47 && c==241)
	return true;
	else
	return false;
}
bool SimbArit(char c){
	if(c==42 && c==45 && c==246 && c==43 && c==47 && c==241)
	return true;
	else
	return false;
}
int main()
{
  Arch= fopen("Hola.txt","r");
  if (Arch != NULL) {

	 while ( feof( Arch ) ==0 ) {
	   c= fgetc( Arch );
	   printf("%c", c);
	   // Conteo de caracteres
       if (EsLetra(c)) xLetras++;
       if (EsMayus(c)) xMayus++;
       if (EsMinus(c)) xMinus++;
       if (EsNumero(c)) xNumeros++;
       if (EsEspacio(c)) xEspacios++;
	 }
     // Imprimir conteo
     printf("\nTotal letras: %i \n", xLetras);
     printf("Total Mayusculas: %i \n", xMayus);
     printf("Total Minusculas: %i \n", xMinus);
     printf("Total Numeros: %i \n", xNumeros);
     printf("Total Espacios en blanco: %i \n", xEspacios);
     
  }
  fclose( Arch );
}
