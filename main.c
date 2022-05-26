#include <stdio.h>

int main () {

int grau[5];
int i, duracao, crux;
int qtdeMin [5];

printf("Digite os graus:\n");
for (i=0;i<6;i++){
scanf("%d", &grau[i]);

if (i==0){
crux= grau[i];
} else if (grau[i]>crux){
crux= grau[i];
}

if (grau[i]==1){
qtdeMin[i] = 15;
} else if (grau[i]==2){
qtdeMin[i]= 25;
} else if (grau[i]==3){
qtdeMin[i]= 35;
} else if (grau[i]==4){
qtdeMin[i]= 45;
} else if (grau[i]==5){
qtdeMin[i]= 55;
}

}

duracao = (grau[0] * qtdeMin[0]) + (grau[1] * qtdeMin[1]) + (grau[2] * qtdeMin[2]) + (grau[3] *
qtdeMin[3]) + (grau[4] * qtdeMin[4]) + (grau[5] * qtdeMin[5]);

printf("\n");
printf("%d", crux);
printf("\n");
printf("%d", duracao);


}