/*
Beecrowd: 2006 - Identificando o chá
Degustação de chá às escuras é a habilidade de identificar um chá usando apenas seus sentidos do olfato e paladar.
Isto faz parte da Competição Ideal de Consumidores de Chá Puro (da sigla em inglês ICPC), que um programa de TV local está organizando. Durante o show, um bule de chá completo é preparado e são entregues uma xícara de chá para cada um dos cinco competidores. Os participantes devem cheirar, saborear e avaliar a amostra, de modo a identificar o tipo de chá, que pode ser: (1) o chá branco; (2) chá verde; (3) chá preto; ou (4) chá de ervas. No final, as respostas são verificadas para determinar o número de suposições corretas.

Dado o tipo de chá real e as respostas fornecidas, determinar o número de participantes que receberam a resposta correta.

Entrada
A primeira linha contém um inteiro T representando o tipo de chá (1 ≤ T ≤ 4). A segunda linha contém cinco inteiros A, B, C, D e E, que indica a resposta dada por cada competidor (1 ≤ A, B, C, D, E ≤ 4).

Saída
A saída contém um inteiro representando o número de concorrentes que obtiveram a resposta correta.
*/

#include <stdio.h>

int main(){
    int tipoCha = 0, A = 0, B = 0, C = 0, D = 0, E = 0, corretos = 0;

    scanf("%d\n", &tipoCha);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if(tipoCha <= 4 && tipoCha >= 1){
        if(A >= 1 && A <= 4 && B >= 1 && B <= 4 && C >= 1 && C <= 4 && D >= 1 && D <= 4 && E >= 1 && E <= 4){
            if(A == tipoCha){
                corretos++;
            }
            if(B == tipoCha){
                corretos++;
            }
            if(C == tipoCha){
                corretos++;
            }
            if(D == tipoCha){
                corretos++;
            }
            if(E == tipoCha){
                corretos++;
            }
        }
    } else{
        return 0;
    }

    printf("%d\n", corretos);

    return 0;
}
