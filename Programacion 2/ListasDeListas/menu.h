void menuListas();

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
    SetConsoleTextAttribute(hConsole, 1);

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
		int pos = 0, i = 1;
		Listas *aux = primeraLista;
		mostrarListas(aux->primero, aux->ultimo, pos);
		pos = validaEntero("\n\nNo. De Lista: ");
		
		while(aux != NULL && i != pos){
			aux = aux->sig;
			i++;
		}
		
		system("cls");
		
		while(opc != 15){
		cuadro(42, 2, 78, 4, 15);
 	   	SetConsoleTextAttribute(hConsole, 0x0F);
		centrarTexto("Listas", 1);
		centrarTexto("    Agregar elemento al inicio   ", 3);
		centrarTexto("    Agregar elemento al fianl    ", 6);
		centrarTexto("  Agregar elemento por posicion  ", 9);
		centrarTexto("    Agregar elemento ordenado    ", 12);
		centrarTexto("     Eliminar primer elemento    ", 15);
		centrarTexto("     Eliminar ultimo elemento    ", 18);
		centrarTexto("  Eliminar elemento por posicion ", 21);
		centrarTexto("Eliminar elemento por ID empleado", 24);
		centrarTexto("     Eliminar lista completa     ", 27);
		centrarTexto("Mostrar elementos por ID empleado", 30);
		centrarTexto("    Mostrar lista de elementos   ", 33);
		centrarTexto("    Odenar lista de elementos    ", 36);
		centrarTexto("   Modificar por ID de empleado  ", 39);
		centrarTexto("   Agregar o Seleccionar Lista   ", 42);
		centrarTexto("        Salir del programa       ", 45);
		menu(41,3,1,15);
		SetConsoleTextAttribute(hConsole, 0x0F);
		system("cls");
		switch(opc){
			case OPC1:
				agregar_elemento_inicio(aux->primero, aux->ultimo, pos);
				system("cls");
				break;
			case OPC2:
				agregar_elemento_final(aux->primero, aux->ultimo, pos);
				system("cls");
				break;
			case OPC3:
				agregar_elemento_posicion(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC4:
				agregar_elemento_ordenado(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC5:
				eliminar_primer_elemento(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC6:
				eliminar_ultimo_elemento(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC7:
				eliminar_elemento_posicion(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC8:
				eliminar_elemento_id(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC9:
				eliminar_lista(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC10:
				mostrar_lista_id(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC11:
				mostrar_lista(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC12:
				ordenar_lista(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC13:
				modificar_lista_id(aux->primero, aux->ultimo, pos);
				getch();
				system("cls");
				break;
			case OPC14:
				menuListas();
				getch();
				system("cls");
			case OPC15:
				cout<<"Saliste del programa";
				exit(1);
		}
	}
}

void menuListas(){
	primeraLista = NULL;
	ultimaLista = NULL;
	
	while(opc != 2 ){
		cuadro(42, 2, 78, 4, 2);
 	   	SetConsoleTextAttribute(hConsole, 0x0F);
		centrarTexto("Listas", 1);
		centrarTexto("    Agregar Listas    ", 3);
		centrarTexto("Ir al menu de la lista", 6);
		menu(41,3,1,2);
		SetConsoleTextAttribute(hConsole, 0x0F);
		system("cls");
		switch(opc){
			case OPC1:
				agregarLista();
				system("cls");
				break;
			case OPC2:
				menu();
				system("cls");
				break;
				
		}
	}
}
