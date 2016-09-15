#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarmat(int mat[5][5]);

int main(){
	
	int i,c;
	int v[10], mat[5][5];
	char s;
	
	srand(time(0));
	
	printf("letras \t\t vector con letras rand");
	for(i=0; i<10; i++){
		v[i]=rand()%(('Z' - 'A')+1);
		printf("\nLa Letra es: %c\t\t %c", 'A'+rand()%(('Z' - 'A')+1), 'A'+v[i]);
	}
	system ("pause");
	system ("cls");
	
	cargarmat(mat);
	
	return 0;
}

void cargarmat(int mat[5][5]){
int i,j;

printf("Matriz con Letras Rand\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			mat[i][j]=rand()%(('Z'-'A')+1);
		}
	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%c ",'A'+mat[i][j]);
		}
		printf("\n");
	}
}
