#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>
#include<windows.h>
#include<conio.h>
#define NL 2
#define NC 2

int main(){
	
  	int i=1, j=1, op;
	int k=0, t=0;
	int A, B, C, D;
	int numeros[NL][NC];
	int resposta[NL][NC];
	int acertos=0;
	char c, nome[20];
	
  
do{
  	for(i=1; i<=11; i++){
    	for(j=1; j<=60; j++){
      		if(i==1 || i==3 || i==10 || i==11){
        		printf("#");
    		}
      		else if (i==2){
        		if(j>=1 && j<=20){
            		printf("#");
        		}
        	else if(j>37){
        		printf("#");
			}
        	else if(j>=21 && j<=37){
            	printf(" JOGO DA MEMORIA ");
            	j=37;
        	}
      		}
      		else if(i==5){
        		if(j==1 || j==2 || j==59 || j==60){
            		printf("#");
        		}
        		else if(j>22){
        			printf(" ");
				}
        		else{
        			printf(" Escolha uma opcao: ");
        			j=22;
        		}
      		}
      		else if(i==7){
        		if(j==1 || j==2 || j==59 || j==60){
            		printf("#");
        		}
        		else if(j>12){
        			printf(" ");
				}
        		else{
        			printf(" 1. Jogar ");
        			j=12;
        		}
      		}
      		else if(i==8){
        		if(j==1 || j==2 || j==59 || j==60){
            		printf("#");
        		}
        		else if(j>11){
        			printf(" ");
				}
        	else{
        		printf(" 2. Sair ");
        		j=11;
        	}
      		}
      
      		else {
        		if (j==1 || j==2 || j==59 || j==60){
        		printf("#");
        		}
        		else{
            	printf(" ");
        		}
    		}
  		}
  printf("\n");
	} //até aqui é o menu feito
printf("\n    Opcao: ");
scanf("%d", &op);
printf("\n");

switch (op){
	
	
	case 1:
		printf("Jogador, digite seu nome: ");
		scanf("%s", nome);
		i=0;
		j=0;
		for(k=0; k<5; k++){
		printf("\nJogada %d: \n", k+1);
		printf("Memorize os numeros abaixo: \n");
		printf("PRESSIONE ENTER PARA INICIAR.\n");
		do{
        	c = getch();
    	}
		while (c != 13);
		
		for(i=0; i<NL; i++){
			for(j=0; j<NC; j++){
				numeros[i][j] = (rand() % 30);
				}
		}
		
		t=5;
		do{
			system("cls");
			printf("Tempo: %d\n\n", t);
			t--;
			for(i=0; i<NL; i++){
				printf("   ");
				for(j=0; j<NC; j++){
					printf("%d ", numeros[i][j]);
				}
			printf("\n");	
			}
			Sleep(1000);
		}
		while(t>0);
		system("cls");
		printf("\nInsira os numeros memorizados de acordo com a matriz: \n");
		printf("\n  |A  B|\n  |C  D|\n\n");
		printf("  A = ");
		scanf("%d", &resposta[0][0]);
		printf("  B = ");
		scanf("%d", &resposta[0][1]);
		printf("  C = ");
		scanf("%d", &resposta[1][0]);
		printf("  D = ");
		scanf("%d", &resposta[1][1]);
		printf("\n");
		Sleep(1000);
		system("cls");
		for(i=0; i<NL; i++){
			for(j=0; j<NC; j++){
				if(resposta[i][j] == numeros[i][j]){
					acertos++;
				}
				else{
					break;
				}
			}
		}
		}
		printf("Cada acerto vale um ponto. \n");
		printf("%s, TOTAL DE PONTOS = %d de 24\n\n", nome, acertos);
	case 2: 
	return 0;
	break;

}
}
while(op!=2);

system("pause");
return 0;
}
