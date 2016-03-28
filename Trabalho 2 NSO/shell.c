#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
struct histori{
	char hist[9];
};
void shunb();


char cmdo_name[10];
struct histori historico[10];
int i;
int main(){
	while(1==1){
	shunb();	
	scanf("%[^\n]",cmdo_name);
	getchar();
/*	(*historico[1]).hist[0]* -> *historico[0].hist[0];
	historico[2].hist[0]* -> *historico[1].hist[0];
	historico[3].hist[0]* -> *historico[2].hist[0];
	historico[4].hist[0]* -> *historico[3].hist[0];
	historico[5].hist[0]* -> *historico[4].hist[0];
	historico[6].hist[0]* -> *historico[5].hist[0];
	historico[7].hist[0]* -> *historico[6].hist[0];
	historico[8].hist[0]* -> *historico[7].hist[0];
	historico[9].hist[0]* -> *historico[8].hist[0];
	historico[0].hist[0]* -> cmdo_name;*/
		if(strcmp(cmdo_name, "exit") == 0){	
			printf("Até logo!\n");
			exit(0);
			return 0;}

		else if(strcmp(cmdo_name, "historico") == 0){
			printf("Lista dos ultimos 10 comandos utilizados:\n");}	
	
		else {
			printf("Comando não encontrado\n");}
}
}

void shunb(){
	printf("shUnB>");
	}

