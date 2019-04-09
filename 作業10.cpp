//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char word[100];
	int i=0;
	char option;
	
	while(true){
		printf("¿é¤J¦r¦ê\n");
		scanf("%s",&word);
		while(i<100&&word[i]>=65){

			if(word[i]>=65&&word[i]<=90){
				word[i]+=32;
				printf("%c",word[i]);
			}
			else if(word[i]>=97&&word[i]<=122){
				word[i]-=32;
				printf("%c",word[i]);
			}
			i++;
			
			}
		printf("\n");
		i=0;
	}
}
