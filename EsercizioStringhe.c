#include <stdio.h>
#include <string.h>

int main(){

    int consonanti=0,vocali=0;

    char Caratteri[20];
    int lung=20;

    printf("inserisci una stringa");
    scanf("%s",&Caratteri);
    printf("la stringa e:%s",Caratteri);
    for(int i=0;i<=lung;i++){
        if(Caratteri[i]==97||Caratteri[i]==101||Caratteri[i]==105||Caratteri[i]==117||Caratteri[i]==111){
            vocali++;
        }
        else if(97<=Caratteri[i]<=122||65<=Caratteri[i]<=90){
            consonanti++;
        }
        else if(97>Caratteri[i]>122||65>Caratteri[i]>90){
            break;
        }
    }

    printf("\n%d\n%d",vocali,consonanti);

    return 0;
}