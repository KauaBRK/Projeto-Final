void fileOpenPrint(FILE * file){
	char text[30];
	int i = 0;
	if(file){
		while(!feof(file)){
			if(fgets(text,500,file)){
				printf("%s", text[i]);
				i++;
			}	
		}
	}
}
