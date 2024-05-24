#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

#include"dadosDoCartao.c"
#include"parcelas.c"
#include"resumo.c"
#include"qrCode.c"
#include"endere�o.c"

int main(){
	setlocale(LC_ALL, "");
	int op, cpf, choice;
	char name[8] = "Produto";
	float price = 75.99;
	
		printf("Escolha o m�todo de pagamento:\n[1] - Cart�o de d�bito\n[2] - Cart�o de cr�dito\n[3] - PIX\n");
		scanf("%d", &op);
		fflush(stdin);
		
		switch(op){
			case 1:
				cardData();
				adress();
				summary(price, 9, name);
				break;
			case 2:
				cardData();
				adress();
				choice = installments(price);
				summary(price, choice, name);
				break;
			case 3:
				printf("Digite o seu CPF:\n");
				scanf("%d", cpf);
				adress();
				summary(price, 0, name);
				pix();
				break;
		}
}