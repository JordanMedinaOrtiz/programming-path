void menu(int x, int y, int inicio, int fin){
	char tecla = '\0';
	opc = 1;
	gotoxy(x,y);
	printf("%c",16);
	do{
		if(kbhit()){
			tecla =  getch();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			gotoxy(x,y);
			printf("%c",16);
			if(opc > inicio && tecla == 72){
				y = y - 3;
				opc--;
			}
			if(opc < fin && tecla == 80){
				y = y + 3;
				opc++;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
			gotoxy(x,y);
			printf("%c", 16);
		}
	}while(tecla != 13);
}

void centrarTexto(const char *texto, int y){
	int longitud = strlen(texto);
	gotoxy(60-(longitud/2),y);
	printf(texto);
}

void cuadro(int xs, int ys, int xi, int yi, int opciones){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);

	for(int i=0; i<opciones; i++){
		for(int i=xs; i <= xi; i++){
			gotoxy(i,ys);
			printf("%c",196);
			gotoxy(i,yi);
			printf("%c",196);
		}

		for(int i=ys; i <= yi; i++){
			gotoxy(xs,i);
			printf("%c",179);
			gotoxy(xi,i);
			printf("%c",179);
		}

		gotoxy(xs,ys);
		printf("%c",218);
		gotoxy(xi,yi);
		printf("%c",217);
		gotoxy(xi,ys);
		printf("%c",191);
		gotoxy(xs,yi);
		printf("%c",192);
		gotoxy(71,17);

		ys= ys + 3;
		yi= yi + 3;
	}
}
