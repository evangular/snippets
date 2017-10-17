#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
double degreetorad(double a){
	double c=a*3.141592/180;
	return c;
}

void main(){
int *digit=malloc(sizeof(int)*26001);
	int bla='a';
	int poo='A'-'a';
	int fullWidth=300;
	for(int i=0; i<26001; i++){	
		digit[i]=(int)(sin(degreetorad(i%720)/2)*100);
	}
	for(int z=0; z<26001; z++){
		int waveWidth=digit[z]+100;
		for(int s=0; s<waveWidth; s++){
			printf(s%(waveWidth/5)?(s%2?"/":"\\"):"=");
		} 
		printf("+");
		for(int s=0; s<(fullWidth-waveWidth)-1; s++){
			printf("#");
		}
printf("\n");
	usleep(5000);
	//	printf("%c %d %d\n", digit[z], digit[z], z);
	}
}







	
