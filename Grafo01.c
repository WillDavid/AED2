#include <stdio.h>
#include <stdlib.h>
typedef int** MatrizAdjacencia;
MatrizAdjacencia CriaGrafo(int vertices){
	int i,j;
	
	MatrizAdjacencia M;
	
	M = malloc(vertices * sizeof(int*));
	for(i = 0;i<vertices;i++){
		M[i] = malloc(vertices * sizeof(int));
		for(j=0;j<vertices;j++){
			
            scanf("%d", &M[i][j]);
			
		}
	}	
	return M;
	
	
}

void mostra_matriz(int vertices,MatrizAdjacencia m){
    int i,j;
    for(i = 0;i<vertices;i++){
		for(j=0;j<vertices;j++){
			printf("%d", m[i][j] );
		}
         printf("\n");
	}	
       
}

int verificacao(MatrizAdjacencia m, int v1, int v2){
    if(m[v1][v2]){
    	
		return 1;
	}else{
		return 0;
	}
    
 
   
}



int main(){
    int veri, vertices, v1, v2;
	MatrizAdjacencia G;
	
	printf("Informe o numero de vertices:");
	scanf("%d", &vertices);
	G = CriaGrafo(vertices);
    mostra_matriz(vertices,G);
    printf("\nInforme a primeira posicao na matriz[Linha]:");
    scanf("\n%d", &v1);
    printf("\nInforme a segunda posicao na matriz[Coluna]:");
    scanf("\n%d", &v2);
    veri = verificacao(G, v1 , v2);
    printf("%d", veri);
}
