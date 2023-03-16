#include<stdio.h>

int main(){
	
float precoAnterior, precoAtual;

printf("Informe o preco anterior e o preco atual da acao:");
scanf("%f%f",&precoAnterior, &precoAtual);

float diferenca = precoAtual - precoAnterior;
float variacao = (diferenca / precoAnterior) * 100;

printf("A variacao foi de %.1f%%",variacao);

return 0;
}
