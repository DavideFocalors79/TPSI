#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	char stringa1[20],stringaDisp[20],stringaPari[20],stringa2[20];
	int numCons=0,numCons2=0;
	int numVocal=0,numVocal2=0;
	bool check=false,check2=false;
	char letteraUser;
	int numLetUser=0;
	char lettereRipetute[20];

	do {
		printf("inserisci una stringa di caratteri");
		scanf("%s",stringa1);
		for(int i=0;i<strlen(stringa1);i++){
			if(stringa1[i]<'a'||stringa1[i]>'z'){
				check=true;
				break;
			}
			else{
				check=false;
			}
		}
	}while(check);
	
	
	for(int i=0;i<strlen(stringa1);i++){
		if(stringa1[i]=='a'||stringa1[i]=='e'||stringa1[i]=='i'||stringa1[i]=='o'||stringa1[i]=='u'){
			numVocal++;
		}
		else{
			numCons++;
		}
	}
	
	printf("\nil numero di consonanti e':'%d\nil numero di vocali e':'%d\n",numCons,numVocal);
	printf("\ninserisci la lettera da confrontare");
	letteraUser=getchar();
	letteraUser=getchar();
	for(int i=0;i<strlen(stringa1);i++){
		if(stringa1[i]==letteraUser){
			numLetUser++;
		}
	}
	printf("\nil numero di questa lettera nella stringa e': '%d",numLetUser);
	
		for(int i=0;i<strlen(stringa1);i++){
		int z=0,k=0;
		if(i%2==0){
			stringaPari[z]=stringa1[i];
			z++;
		}else{
			stringaDisp[k]=stringa1[i];
			k++;
		}
	
	}
	printf("\nstringa pari:%s\nstringa dispari:%s",stringaPari,stringaDisp);
	
	for(int i=0;i<strlen(stringa1);i++){
		int k=0;
		for(int z=0;z<strlen(stringa1);z++){
			if(stringa1[z]==stringa1[i]){
				lettereRipetute[k]=stringa1[z];
				k++;
			}
		}
	}
	printf("\nle lettere ripetute sono: %s",lettereRipetute);
	
		do {
		printf("\ninserisci una seconda stringa di caratteri\n");
		scanf("%s",stringa1);
		for(int i=0;i<strlen(stringa1);i++){
			if(stringa1[i]<'a'||stringa1[i]>'z'){
				check2=true;
				break;
			}
			else{
				check2=false;
			}
		}
	}while(check2);
	
	if(strlen(stringa1)>strlen(stringa2)){
		printf("\nLa stringa 1 e' piu' lunga");
	}
	else if(strlen(stringa1)<strlen(stringa2)){
		printf("\nLa stringa 2 e' piu' lunga");
	}else{
		printf("\nLa stringa 1 e 2 sono uguali");
	}
	
		for(int i=0;i<strlen(stringa2);i++){
		if(stringa2[i]=='a'||stringa2[i]=='e'||stringa2[i]=='i'||stringa2[i]=='o'||stringa2[i]=='u'){
			numVocal2++;
		}
		else{
			numCons2++;
		}
	}
	
	if(numVocal>numVocal2){
		printf("\nLa stringa 1 contiene piu' vocali");
	}
	else if(numVocal<numVocal2){
		printf("\nLa stringa 2 contiene piu' vocali");
	}else{
		printf("\nLa stringa 1 e 2 contengono le stesse vocali");
	}
	
	if(numCons>numCons2){
		printf("\nLa stringa 1 contiene piu' consonanti");
	}
	else if(numCons<numCons2){
		printf("\nLa stringa 2 contiene piu' consonanti");
	}else{
		printf("\nLa stringa 1 e 2 contengono le stesse consonanti");
	}	
	
	return 0;
}
