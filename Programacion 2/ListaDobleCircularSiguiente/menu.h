void menu(int x, int y, int inicio, int fin){
	char tecla = '\0';
	opc = 1;
	gotoxy(x,y);
	printf("%c", 175);
	do{
		if(kbhit()){
			tecla =  getch();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
			gotoxy(x,y);
			//cout<<175;
			printf("%c", 175);
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
			printf("%c", 175);
		}
	}while(tecla != 13);
}

void centrarTexto(const char *texto, int y){
	int longitud = strlen(texto);
	gotoxy(60-(longitud/2),y);
	printf(texto);
}

void cuadro(int xs, int ys, int xi, int yi, int opciones){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);

	for(int i=0; i<opciones; i++){
		for(int i=xs; i <= xi; i++){
			gotoxy(i,ys);
			printf("%c", 196);
			gotoxy(i,yi);
			printf("%c", 196);
		}

		for(int i=ys; i <= yi; i++){
			gotoxy(xs,i);
			printf("%c", 179);
			gotoxy(xi,i);
			printf("%c", 179);
		}

		gotoxy(xs,ys);
		printf("%c", 218);
		gotoxy(xi,yi);
		printf("%c", 217);
		gotoxy(xi,ys);
		printf("%c", 191);
		gotoxy(xs,yi);
		printf("%c", 192);
		gotoxy(71, 17);

		ys= ys + 3;
		yi= yi + 3;
	}
}

void menu(){
		while(opc != 7){
		cuadro(40, 2, 79, 4, 7);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		centrarTexto("Listas", 1);
		centrarTexto("      Agregar elemento al inicio    ", 3);
		centrarTexto("      Agregar elemento al fianl     ", 6);
		centrarTexto("       Eliminar primer elemento     ", 9);
		centrarTexto("       Eliminar ultimo elemento     ", 12);
		centrarTexto("Mostrar lista de elementos siguiente", 15);
		centrarTexto(" Mostrar lista de elementos anterior", 18);
		centrarTexto("          Salir del programa        ", 21);
		menu(39,3,1,7);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		switch(opc){
			case OPC1:
				agregar_elemento_inicio();
				system("cls");
				break;
			case OPC2:
				agregar_elemento_final();
				system("cls");
				break;
			case OPC3:
				eliminar_primer_elemento();
				getch();
				system("cls");
				break;
			case OPC4:
				eliminar_ultimo_elemento();
				getch();
				system("cls");
				break;
			case OPC5:
				mostrar_lista_siguiente();
				getch();
				system("cls");
				break;
			case OPC6:
				mostrar_lista_anterior();
				getch();
				system("cls");
				break;
			case OPC7:
				cout<<"Saliste del programa";
				exit(1);
		}
	}
}
