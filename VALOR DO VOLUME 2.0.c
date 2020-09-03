#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
  int main(){
 	float r,aAltura, vVolume;
 	printf ("Qual o Valor de R: ");
 	scanf("%f", &r );
 	printf("Entre agora com o valor da altura : ");
 	scanf("%f", &aAltura);
 	
  vVolume = 3.14* r *2*aAltura;
 	printf("o resuldado do volume é : %f\n ",  vVolume );
 	
 	system ("pause");
   return 0 ;
 }
