#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#define CAR 219
#define L 11

void color(int x){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, x);	 
}

char M[L][L];
void riduci(){
	int x;
	int col;
	col = rand()%14+1;
	
	for(x = 0; x<L/2+1; x++){
		for(int j=x; j<L-x; j++){
			M[x][j] = CAR;
			M[L-1-x][j] = CAR;
			M[j][x] = CAR;
			M[j][L-1-x] = CAR;
		}
	
		for(int i=0; i<L; i++){
			for(int j=0; j<L; j++){
				color(col);
				printf("%c%c", M[i][j], M[i][j]);
				color(15);
				M[i][j] =32;
			}
			printf("\n");
		}
		Sleep(25);
		system("cls");
	}

}

void apri(){
	int x;
	int col;
	col = rand()%14+1;
	for(x = L/2; x>=0; x--){
		for(int j=x; j<L-x; j++){
			M[x][j] = CAR;
			M[L-1-x][j] = CAR;
			M[j][x] = CAR;
			M[j][L-1-x] = CAR;
		}
	
		for(int i=0; i<L; i++){
			for(int j=0; j<L; j++){
				color(col);
				printf("%c%c", M[i][j], M[i][j]);
				color(15);
				M[i][j] =32;
			}
			printf("\n");
		}
		Sleep(25);
		system("cls");
	}
}


int main(){
	srand(time(NULL));
	
	for(int i = 0; i<L; i++){
		for(int j = 0; j<L; j++){
			M[i][j] = 32;
		}
	}
	while(1){
		printf("working a new feature 1...\n");
		riduci();
		apri();
	}

	
	return 0;
}


