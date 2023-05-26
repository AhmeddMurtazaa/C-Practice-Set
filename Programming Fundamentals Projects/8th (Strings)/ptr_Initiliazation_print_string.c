#include<stdio.h>
#include<conio.h>
int main(){
	char str[]="Ahmed";
	char str2[]={'A','h','m','e','d','\0'};
	
	char *ptr=str2; //taking address of string 2[0] and assigning to *ptr.
	
	while(*ptr!='\0'){
	printf("%c",*ptr);
	ptr++;}

	//
}
