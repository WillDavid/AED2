// Author: William David Martins de Almeida
// Date: 23.08.2020
// Link GitHub: https://github.com/WillDavid/Algoritmos-e-Estruturas-de-Dados-2/tree/dev_william
#include <stdio.h>
#include <stdlib.h>


int main(){
	int pesoMaximoPendrive = 10;
	int pesoPendrive = 0;
	int numeroElementos = 5;
    int pesoElemento[5];
    int valorMaximoPendrive;
    int numeroPendrives = 0;
    int enchimento = 0;
    int resto;

    int i, j, k;
    
    printf("Este e um teste em baixa escala do Desafio 03, sendo assim,\ntestaremos apenas com valores pequenos\n");
    printf("Numero de elementos do Vetor: 5\nGB maxima de cada Pendrive: 10\nDe entrada nos 5 pesos:\n");
    printf("Por favor, coloque apenas numeros entre 1 e 10\n\n");
    
    for(i= 0;i<numeroElementos;i++){
        int pesoTeste;
        scanf("%d", &pesoTeste);
    	pesoElemento[i] = pesoTeste;
	}
	
	
	for(k=0; k<=numeroElementos;k++){
		resto = enchimento;
		if(((enchimento + pesoElemento[k]) <= pesoMaximoPendrive) && pesoElemento[k] <= pesoMaximoPendrive){
			enchimento = enchimento + pesoElemento[k];
		}
		else{
			numeroPendrives++;
			printf("Peso total desse pendrive: %d\n", enchimento);
			printf("Quantidade de Pendrives: %d\n", numeroPendrives);
			enchimento = 0;
			k = k - 1;
			
		}
		
		
		
		
		
		
		
	}
	
	if(resto != 0 && resto <= 10){
		numeroPendrives++;
	}
	
	if(numeroPendrives == 0){
		numeroPendrives = 1;
	}
	

	printf("\n---------------------\n");
	printf("\n\nResultado Final\nPendrives: %d\n",numeroPendrives);
	
	
	return 0;
	
	
	
	
	//valorMaximoPendrive = knapsack(pesoMaximoPendrive, pesoElemento, numeroElementos);
    
}
