int installments(float price){
	int choice;
	
		printf("Escolha as parcelas:\n[1] - 1X de R$%.2f\n[2] - 2X de R$%.2f sem juros\n[3] - 3X de R$%.2f sem juros", price, price / 2, price / 3);
		printf("\n[4] - 4X de R$%.2f sem juros\n[5] - 5X de R$%.2f\n[6] - 6X de R$%.2f\n", price / 4 + (price*0.08), price / 5 + (price*0.15), price / 6 + (price*0.20));
		scanf("%d", &choice);
	
	return choice;
}

