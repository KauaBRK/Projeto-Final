void summary(float price, int op, char nomeProduto[]){
	printf("Nome do produto: %s\nValor do produto: %.2f\n", nomeProduto, price);
	if(op == 1 || op == 2 || op == 3) 
		printf("Meio de pagamento: %dX de R$%.2f\n\n", op, price / op);
	else if(op == 4)
		printf("Meio de pagamento: %dX de R$%.2f\n\n", op, price / op + (price*0.08));
	else if(op == 5)
		printf("Meio de pagamento: %dX de R$%.2f\n\n", op, price / op + (price*0.15));
	else if(op == 6)
		printf("Meio de pagamento: %dX de R$%.2f\n\n", op, price / op + (price*0.21));
	system("pause");
}