// BEECROWD: 1132
// Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.
#include <stdio.h>
#include <math.h>

int main(){
	int val1 = 0, val2 = 0, res = 0;
	
	scanf("%d", &val1);
	scanf("%d", &val2);
	
	if(val1 < val2){
	   for(int i = val1; i <= val2; i++){
		if(i % 13 == 0){
			res += 0;
		} else {
			res += i;
		}
	   }
	} else {
	   for(int i = val2; i <= val1; i++){
		if(i % 13 == 0){
			res += 0;
		} else {
			res += i;
		}
	   }
	}
	
	printf("%d\n", res);
	
	return 0;
}
