// Author: William David Martins de Almeida
// Date: 23.08.2020
// Link GitHub: https://github.com/WillDavid/Algoritmos-e-Estruturas-de-Dados-2/tree/dev_william
#include <stdio.h>
#include <stdlib.h>
int main(){
	// Variaveis usadas em todas as operaçoes
	int pesoMaximoPendrive = 64;
	int pesoPendrive = 0;
	int numeroElementos = 1000;
    int pesoElemento[1000];
    int valorMaximoPendrive;
    int numeroPendrives = 0;
    int enchimento = 0;
    int resto;
    int i, j, k;
    
    printf("Os 1000 elementos e seus respectivos pesos sao gerados de forma pseudo-Randomica com a funçao 'rand(),'\neles sempre retornarao os mesmos valores.");
    printf("\nPensando nos testes, deixei um versao de baixa escala junto do arquivo\n");
    
    // Trecho de alocacao de numeros 'Alatorios'
    // A funcao Rand() sempre gera os mesmos numeros
    // Eles sao alocados em uma posicao do Vetor
    for(i= 0;i<numeroElementos;i++){
    	pesoElemento[i] = 5+rand()%(45-5);
    	
    	
    	// Para alocacao de valores de forma manual:
			    	/*
					int pesoTeste;
			        scanf("%d", &pesoTeste);
			    	pesoElemento[i] = pesoTeste; */
	}
	
	
	
	
	// Trecho que gera a comparacao e aloca no espaco do Pendrive
	// Se o enchimento + peso do Elemento for menor ou igual a 64
	// o enchimento vai ate o limite do pendrive
	// se um peso de um elemento somado com o enchimento for maior que o peso maximo,
	// ele é barrado pela operacao e entra no Else
	for(k=0; k<=numeroElementos;k++){
		resto = enchimento;
		if(((enchimento + pesoElemento[k]) <= pesoMaximoPendrive) && pesoElemento[k] <= pesoMaximoPendrive){
			enchimento = enchimento + pesoElemento[k];
		}
		else{
			
			// se o valor do pendrive for ultrapassado, então um pendrive é contabilizado
			// o peso do elemento e do enchimento é zerado
			// entao o k retorna umm laço na operacao, fazendo com que o elemento que foi barrado tenha mais
			// uma chance de entrar no enchimento, como o enchimento é zero desta vez, ele é contabilizado
			numeroPendrives++;
			pesoElemento[k] = 0;
			enchimento = 0;
			k = k - 1;
		}	
	}
	
	// Este trecho busca o restante dos numeros que não foram alocados em um pendrive e 
	// contabiliza mais um pendrive com esses elementos
	if(resto != 0 || resto <= 64){
		numeroPendrives++;
	}
	
	// Se por acaso a soma de todos os valores for abaixo de 64 (no caso, pendrive 0)
	// Pelo enunciado é impossivel, mas deixei aqui para fim de testes com
	// numeros menores
	if(numeroPendrives == 0){
		numeroPendrives = 1;
	}
	
	printf("\n---------------------\n");
	// print quantidade de pendrives
	printf("\n\nPendrives: %d\n",numeroPendrives);
	
	
	return 0;
	
	
	
	
	//valorMaximoPendrive = knapsack(pesoMaximoPendrive, pesoElemento, numeroElementos);
    
}
