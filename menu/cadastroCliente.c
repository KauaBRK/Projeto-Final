typedef struct{
	char name[20];
	char surname[50];
	char email[50];
	char password[20];
} Register;

Register client[30];

int clientList(){
	char op[1];
	int i = 0;
	
	system("cls");
	printf("Você já possui cadastro?(S/N): ");
	scanf("%c", &op);
	fflush(stdin);
	strupr(op);
	
	switch(op[0]){
		case 'S': //login (checa o documento retorna se há email cadastrado ou senha correta)			
			printf("\nDigite o seu email:\n");
			gets(client[i].email);
			printf("Digite a sua senha:\n");
			scanf("%d", &client[i].password);
			break;
		case 'N': //cadastro (escreve no documento)			
			printf("\nNome:\n");
			gets(client[i].name);
			printf("Sobrenome:\n");
			gets(client[i].surname);
			printf("Email:\n");
			gets(client[i].email);
			printf("Senha:\n");
			scanf("%d", &client[i].password);
			fflush(stdin);
			break;
		default:
			break;
	}
	system("pause");
}