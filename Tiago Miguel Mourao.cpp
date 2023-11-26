#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

void gotoxy(int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

void textocentrado(string text, int y){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int width = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    gotoxy((width - text.length()) / 2, y);
    cout << text;
}

void animacaoPaiNatal(){
	for (int i = 0; i < 200; ++i) {
system("cls"); 

gotoxy(i,26);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<"         ______"<<endl;
gotoxy(i,27);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<"      ._/      | "<<endl;
gotoxy(i,28);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<"     o (_-_-_-_/"<<endl;
gotoxy(i,29);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"         | O ^|"<<endl;
gotoxy(i,30);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"         |  v |"<<endl;
gotoxy(i,31);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"         |____/           ."<<endl;
gotoxy(i,32);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"           | |        __oº"<<endl;
gotoxy(i,33);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
cout<<"       ___/   ]   ___/   -/"<<endl;
gotoxy(i,34);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
cout<<"*\____/ /______--/       |"<<endl;
gotoxy(i,35);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
cout<<" L     \ \____           /"<<endl;
gotoxy(i,36);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<"  |      \_____-o     _-"<<endl;
gotoxy(i,37);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<"   L________________-"<<endl;
gotoxy(i,38);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"    (_____//_______\\____)"<<endl;
gotoxy(i,39);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"    \____-_________-___/"<<endl;
gotoxy(i,40);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"     vvvv vvvvvvvvv vvv "<<endl;  
Sleep(1);
    }
}

void animacaoPresente(){
	for (int i = 0; i < 50; ++i) {
system("cls");

gotoxy(90,i-16);
cout<<"    _    _"<<endl;

gotoxy(90,i-15);
cout<<"   (O\\  /O)"<<endl;

gotoxy(90,i-14);
cout<<" ___\\\\==//___"<<endl;

gotoxy(90,i-13);
cout<<"|____________|"<<endl;

gotoxy(90,i-12);
cout<<" |    ||    |"<<endl;

gotoxy(90,i-11);
cout<<" |____||____|"<<endl;

gotoxy(90,i-10);
cout<<" |____  ____|"<<endl;

gotoxy(90,i-9);
cout<<" |    ||    |"<<endl;

gotoxy(90,i-8);
cout<<" |____||____|"<<endl;

Sleep(400);
system("cls");
}

system("cls");
gotoxy(91,35);
cout<<"."<<endl;
Sleep(299);
system("cls");
gotoxy(91,35);
cout<<".."<<endl;
Sleep(299);
system("cls");
gotoxy(91,35);
cout<<"..."<<endl;
Sleep(299);
system("cls");
gotoxy(91,35);
cout<<"."<<endl;
Sleep(299);
system("cls");
gotoxy(91,35);
cout<<".."<<endl;
Sleep(299);
system("cls");
gotoxy(91,35);
cout<<"..."<<endl;
Sleep(299);


system("cls");
gotoxy(80,25);
cout<<"O teu presente é...(*tambores*)"<<endl;
Sleep(1000);
system("cls");
gotoxy(70,15);
cout<<"                                                                                 /$$"<<endl;
gotoxy(70,16);
cout<<" /$$   /$$ /$$$$$$/$$$$         /$$$$$$$  /$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$ | $$"<<endl;
gotoxy(70,17);
cout<<"| $$  | $$| $$_  $$_  $$       /$$_____/ |____  $$ /$$__  $$ /$$__  $$ /$$__  $$| $$"<<endl;
gotoxy(70,18);
cout<<"| $$  | $$| $$ \\ $$ \\ $$      | $$        /$$$$$$$| $$  \\__/| $$  \\__/| $$  \\ $$|__/"<<endl;
gotoxy(70,19);
cout<<"| $$  | $$| $$ | $$ | $$      | $$       /$$__  $$| $$      | $$      | $$  | $$ "<<endl;
gotoxy(70,20);
cout<<"|  $$$$$$/| $$ | $$ | $$      |  $$$$$$$|  $$$$$$$| $$      | $$      |  $$$$$$/ /$$"<<endl;
gotoxy(70,21);
cout<<" \______/ |__/ |__/ |__/        \\_______/ \\_______/|__/      |__/       \\______/ |__/"<<endl;
gotoxy(85,30);
cout<<"         _______"<<endl;
gotoxy(85,31);
cout<<"      __//__|___\\___===="<<endl;
gotoxy(85,32);
cout<<"     |  ___\\/ \\_-| ___  /)= ="<<endl;
gotoxy(85,33);
cout<<"     |_/\\|/\\______/\\|/\\_/"<<endl;
gotoxy(85,34);
cout<<"       |-O-|      |-O-|"<<endl;
gotoxy(85,35);
cout<<"       \\/|\\/      \\/|\\/"<<endl;
Sleep(3000);
}

void animacaoArvore(){
int i;
int n;

n = rand() % 15;

for (i = 0; i <= 150; i++){
system("cls");
n = rand() % 15;
gotoxy(91,27);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" __/\\__"<<endl;
gotoxy(91,28);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" \\ /\\ /"<<endl;
gotoxy(91,29);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" /_\\/_\\"<<endl;
gotoxy(91,30);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" /  \\"<<endl;
gotoxy(91,31);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" /    \\"<<endl;
gotoxy(91,32);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" /    \\"<<endl;
gotoxy(91,33);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<"     /      \\"<<endl;
gotoxy(91,34);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" /    \\"<<endl;
gotoxy(91,35);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<"    /        \\"<<endl;
gotoxy(91,36);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<"    /        \\"<<endl;
gotoxy(91,37);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<"   /__________\\"<<endl;
gotoxy(91,38);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<"  /// /    \\ \\\\\\"<<endl;
gotoxy(91,39);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<"      | /\\ |   "<<endl;
gotoxy(91,40);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" | C) |"<<endl;
gotoxy(91,41);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" | V  |"<<endl;
gotoxy(91,42);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" | b  |"<<endl;
gotoxy(91,43);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" |    |"<<endl;
gotoxy(91,44);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
cout<<" |____|"<<endl;
}	
}

void creditos(){
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado(" ######  ########  ######## ########  #### ########  #######   ######  ", 10);
	textocentrado("##    ## ##     ## ##       ##     ##  ##     ##    ##     ## ##    ## ", 11);
	textocentrado("##       ##     ## ##       ##     ##  ##     ##    ##     ## ##       ", 12);
	textocentrado("##       ########  ######   ##     ##  ##     ##    ##     ##  ######  ", 13);
	textocentrado("##       ##   ##   ##       ##     ##  ##     ##    ##     ##       ## ", 14);
	textocentrado("##    ## ##    ##  ##       ##     ##  ##     ##    ##     ## ##    ## ", 15);
	textocentrado(" ######  ##     ## ######## ########  ####    ##     #######   ######  ", 16);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	textocentrado("d888888Poo                           8888ba.88ba    ", 20);
	textocentrado("   88                                88  `8b  `8b   ", 21);
	textocentrado("   88   dP.d8888b..d8888b. .d8888b.  88   88   88   ", 22);
	textocentrado("   88   8888'  `8888'  `88 88'  `88  88   88   88   ", 23);
	textocentrado("   88   8888.  .8888.  .88 88.  .88  88   88   88dP ", 24);
	textocentrado("   dP   dP`88888P8`8888P88 `88888P'  dP   dP   dP88 ", 25);
	textocentrado("ooooooooooooooooooo~~~~.88~ooooooooooooooooooooooooo", 26);
	textocentrado("                   d8888P                           ", 27);
	                                
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	textocentrado(" ooo        ooooo  o8o                                   oooo      ooooooooooooo   ", 30);
	textocentrado("`88.       .888'  `''                                   `888      8'   888   `8    ", 31);
	textocentrado(" 888b     d'888  oooo   .oooooooo oooo  oooo   .ooooo.   888           888         ", 32);
	textocentrado(" 8 Y88. .P  888  `888  888' `88b  `888  `888  d88' `88b  888           888         ", 33);
	textocentrado(" 8    Y     888   888  `88bod8P'   888   888  888    .o  888           888      .o.", 34);
	textocentrado("o8o        o888o o888o `8oooooo.   `V88V'V8P' `Y8bod8P' o888o         o888o     Y8P", 35);
	textocentrado("                       d'     YD                                                   ", 36);
	textocentrado("                       'Y88888P'                                                   ", 37);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	textocentrado(">=>                                                              >=>                 >=>       >=>    ", 40);
	textocentrado(">=>                                                              >=>                 >> >=>   >>=>    ", 41);
	textocentrado(">=>         >==>       >=>     >==>>==>     >=> >=>  >> >==>     >=>    >=>          >=> >=> > >=>    ", 42);
	textocentrado(">=>       >>   >=>   >=>  >=>   >=>  >=>  >=>   >=>   >=>     >=>>=>  >=>  >=>       >=>  >=>  >=>    ", 43);
	textocentrado(">=>       >>===>>=> >=>    >=>  >=>  >=> >=>    >=>   >=>    >>  >=> >=>    >=>      >=>   >>  >=>    ", 44);
	textocentrado(">=>       >>         >=>  >=>   >=>  >=>  >=>   >=>   >=>    >>  >=>  >=>  >=>       >=>       >=>    ", 45);
	textocentrado(">=======>  >====>      >=>     >==>  >=>   >==>>>==> >==>     >=>>=>    >=>          >=>       >=> >=>", 46);
	
	Sleep(2000);
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	textocentrado(" '||'''''||''''|'||'    '|||'''''||   '|.   '|'  | |''||''| |   '||'     ", 20);
	textocentrado("  ||  .  ||  .   ||      ||    .|'     |'|   |  |||   ||   |||   ||      ", 21);
	textocentrado("  ||''|  ||''|   ||      ||   ||       | '|. | |  ||  ||  |  ||  ||      ", 22);
	textocentrado("  ||     ||      ||      || .|'        |   |||.''''|. || .''''|. ||      ", 23);
	textocentrado(" .||.   .||......||......||||......|  .|.   '.|.  .||.||.|.  .||.||.....|", 24);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    Sleep(1000);                
}                                                         

void desenharmenu(){
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
		
		gotoxy(136, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
		
		gotoxy(137, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
		
		gotoxy(138, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado(" '||'''''||''''|'||'    '|||'''''||   '|.   '|'  | |''||''| |   '||'     ", 20);
	textocentrado("  ||  .  ||  .   ||      ||    .|'     |'|   |  |||   ||   |||   ||      ", 21);
	textocentrado("  ||''|  ||''|   ||      ||   ||       | '|. | |  ||  ||  |  ||  ||      ", 22);
	textocentrado("  ||     ||      ||      || .|'        |   |||.''''|. || .''''|. ||      ", 23);
	textocentrado(" .||.   .||......||......||||......|  .|.   '.|.  .||.||.|.  .||.||.....|", 24);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 207);  
	
	textocentrado("                                                           ", 29);
	textocentrado("        .aMMMb  dMMMMb  .aMMMb  .aMMMb  dMMMMMP .dMMMb     ", 30);
	textocentrado("       dMP dMP dMP.dMP dMP VMP dMP  MP dMP     dMP  VP     ", 31);
	textocentrado("      dMP dMP dMMMMP  dMP     dMP dMP dMMMP    VMMMb       ", 32);
	textocentrado("     dMP.aMP dMP     dMP.aMP dMP.aMP dMP     dP .dMP       ", 33);
	textocentrado("     VMMMP  dMP      VMMMP   VMMMP  dMMMMMP  VMMMP         ", 34);
	textocentrado("                                                           ", 35);
	textocentrado("                                                           ", 36);
	textocentrado("             1. Minijogos          2. Animações            ", 37);
	textocentrado("                                                           ", 38);
	textocentrado("                3. ???               4. Sair               ", 39);
	textocentrado("                                                           ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Escolha:    ", 42);

}

void mjjdpn(){
	
	string op = "";
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
		
		gotoxy(136, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
		
		gotoxy(137, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
		
		gotoxy(138, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("      #                                                              ", 20);
	textocentrado("      # #    # #       ####    ##   #    # ###### #    # #####  #### ", 21);
	textocentrado("      # #    # #      #    #  #  #  ##  ## #      ##   #   #   #    #", 22);
	textocentrado("      # #    # #      #      #    # # ## # #####  # #  #   #   #    #", 23);
	textocentrado("#     # #    # #      #  ### ###### #    # #      #  # #   #   #    #", 24);
	textocentrado("#     # #    # #      #    # #    # #    # #      #   ##   #   #    #", 25);
	textocentrado(" #####   ####  ######  ####  #    # #    # ###### #    #   #    #### ", 26);
	textocentrado("                 ######              #     #                         ", 27);
	textocentrado("#####   ####     #     #   ##   #    ##    #   ##   #####   ##   #   ", 28);
	textocentrado("#    # #    #    #     #  #  #  #    # #   #  #  #    #    #  #  #   ", 29);
	textocentrado("#    # #    #    ######  #    # #    #  #  # #    #   #   #    # #   ", 30);
	textocentrado("#    # #    #    #       ###### #    #   # # ######   #   ###### #   ", 31);
	textocentrado("#    # #    #    #       #    # #    #    ## #    #   #   #    # #   ", 32);
	textocentrado("#####   ####     #       #    # #    #     # #    #   #   #    # ####", 33);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	float nota = 0, soma = 0, media = 0;
	
	textocentrado("Descrição: Escreva a nota que teve nas disciplinas abaixo!", 37);
	textocentrado("Mentirosos nao recebem nada!", 38);
	
	textocentrado("Escreva a nota de Programação: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Escolha:    ", 42);
	
	cin >> nota;
	
	soma = soma + nota;
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
		
		gotoxy(136, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
		
		gotoxy(137, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
		
		gotoxy(138, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("      #                                                              ", 20);
	textocentrado("      # #    # #       ####    ##   #    # ###### #    # #####  #### ", 21);
	textocentrado("      # #    # #      #    #  #  #  ##  ## #      ##   #   #   #    #", 22);
	textocentrado("      # #    # #      #      #    # # ## # #####  # #  #   #   #    #", 23);
	textocentrado("#     # #    # #      #  ### ###### #    # #      #  # #   #   #    #", 24);
	textocentrado("#     # #    # #      #    # #    # #    # #      #   ##   #   #    #", 25);
	textocentrado(" #####   ####  ######  ####  #    # #    # ###### #    #   #    #### ", 26);
	textocentrado("                 ######              #     #                         ", 27);
	textocentrado("#####   ####     #     #   ##   #    ##    #   ##   #####   ##   #   ", 28);
	textocentrado("#    # #    #    #     #  #  #  #    # #   #  #  #    #    #  #  #   ", 29);
	textocentrado("#    # #    #    ######  #    # #    #  #  # #    #   #   #    # #   ", 30);
	textocentrado("#    # #    #    #       ###### #    #   # # ######   #   ###### #   ", 31);
	textocentrado("#    # #    #    #       #    # #    #    ## #    #   #   #    # #   ", 32);
	textocentrado("#####   ####     #       #    # #    #     # #    #   #   #    # ####", 33);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Escreva a nota que teve nas disciplinas abaixo!", 37);
	textocentrado("Mentirosos nao recebem nada!", 38);
	
	textocentrado("Escreva a nota de Sistemas Operativos: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Escolha:    ", 42);
	
	cin >> nota;
	
	soma = soma + nota;
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
		
		gotoxy(136, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
		
		gotoxy(137, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
		
		gotoxy(138, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("      #                                                              ", 20);
	textocentrado("      # #    # #       ####    ##   #    # ###### #    # #####  #### ", 21);
	textocentrado("      # #    # #      #    #  #  #  ##  ## #      ##   #   #   #    #", 22);
	textocentrado("      # #    # #      #      #    # # ## # #####  # #  #   #   #    #", 23);
	textocentrado("#     # #    # #      #  ### ###### #    # #      #  # #   #   #    #", 24);
	textocentrado("#     # #    # #      #    # #    # #    # #      #   ##   #   #    #", 25);
	textocentrado(" #####   ####  ######  ####  #    # #    # ###### #    #   #    #### ", 26);
	textocentrado("                 ######              #     #                         ", 27);
	textocentrado("#####   ####     #     #   ##   #    ##    #   ##   #####   ##   #   ", 28);
	textocentrado("#    # #    #    #     #  #  #  #    # #   #  #  #    #    #  #  #   ", 29);
	textocentrado("#    # #    #    ######  #    # #    #  #  # #    #   #   #    # #   ", 30);
	textocentrado("#    # #    #    #       ###### #    #   # # ######   #   ###### #   ", 31);
	textocentrado("#    # #    #    #       #    # #    #    ## #    #   #   #    # #   ", 32);
	textocentrado("#####   ####     #       #    # #    #     # #    #   #   #    # ####", 33);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Escreva a nota que teve nas disciplinas abaixo!", 37);
	textocentrado("Mentirosos nao recebem nada!", 38);
	
	textocentrado("Escreva a nota de Redes de Comunicação: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Escolha:    ", 42);
	
	cin >> nota;
	
	soma = soma + nota;
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
		
		gotoxy(136, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
		
		gotoxy(137, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
		
		gotoxy(138, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("      #                                                              ", 20);
	textocentrado("      # #    # #       ####    ##   #    # ###### #    # #####  #### ", 21);
	textocentrado("      # #    # #      #    #  #  #  ##  ## #      ##   #   #   #    #", 22);
	textocentrado("      # #    # #      #      #    # # ## # #####  # #  #   #   #    #", 23);
	textocentrado("#     # #    # #      #  ### ###### #    # #      #  # #   #   #    #", 24);
	textocentrado("#     # #    # #      #    # #    # #    # #      #   ##   #   #    #", 25);
	textocentrado(" #####   ####  ######  ####  #    # #    # ###### #    #   #    #### ", 26);
	textocentrado("                 ######              #     #                         ", 27);
	textocentrado("#####   ####     #     #   ##   #    ##    #   ##   #####   ##   #   ", 28);
	textocentrado("#    # #    #    #     #  #  #  #    # #   #  #  #    #    #  #  #   ", 29);
	textocentrado("#    # #    #    ######  #    # #    #  #  # #    #   #   #    # #   ", 30);
	textocentrado("#    # #    #    #       ###### #    #   # # ######   #   ###### #   ", 31);
	textocentrado("#    # #    #    #       #    # #    #    ## #    #   #   #    # #   ", 32);
	textocentrado("#####   ####     #       #    # #    #     # #    #   #   #    # ####", 33);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Escreva a nota que teve nas disciplinas abaixo!", 37);
	textocentrado("Mentirosos nao recebem nada!", 38);
	
	textocentrado("Escreva a nota de Português: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Escolha:    ", 42);
	
	cin >> nota;
	
	soma = soma + nota;
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
		
		gotoxy(136, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
		
		gotoxy(137, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
		
		gotoxy(138, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("      #                                                              ", 20);
	textocentrado("      # #    # #       ####    ##   #    # ###### #    # #####  #### ", 21);
	textocentrado("      # #    # #      #    #  #  #  ##  ## #      ##   #   #   #    #", 22);
	textocentrado("      # #    # #      #      #    # # ## # #####  # #  #   #   #    #", 23);
	textocentrado("#     # #    # #      #  ### ###### #    # #      #  # #   #   #    #", 24);
	textocentrado("#     # #    # #      #    # #    # #    # #      #   ##   #   #    #", 25);
	textocentrado(" #####   ####  ######  ####  #    # #    # ###### #    #   #    #### ", 26);
	textocentrado("                 ######              #     #                         ", 27);
	textocentrado("#####   ####     #     #   ##   #    ##    #   ##   #####   ##   #   ", 28);
	textocentrado("#    # #    #    #     #  #  #  #    # #   #  #  #    #    #  #  #   ", 29);
	textocentrado("#    # #    #    ######  #    # #    #  #  # #    #   #   #    # #   ", 30);
	textocentrado("#    # #    #    #       ###### #    #   # # ######   #   ###### #   ", 31);
	textocentrado("#    # #    #    #       #    # #    #    ## #    #   #   #    # #   ", 32);
	textocentrado("#####   ####     #       #    # #    #     # #    #   #   #    # ####", 33);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Escreva a nota que teve nas disciplinas abaixo!", 37);
	textocentrado("Mentirosos nao recebem nada!", 38);
	
	textocentrado("Escreva a nota de Matematica: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Escolha:    ", 42);
	
	cin >> nota;
	
	soma = soma + nota;
	
	media = soma / 5;
	
	if (media == 0)
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	
	textocentrado("##       ####  ######  ########    ###      ##    ## ########  ######   ########     ###   ", 20);
	textocentrado("##        ##  ##    ##    ##      ## ##     ###   ## ##       ##    ##  ##     ##   ## ##  ", 21);
	textocentrado("##        ##  ##          ##     ##   ##    ####  ## ##       ##        ##     ##  ##   ## ", 22);
	textocentrado("##        ##   ######     ##    ##     ##   ## ## ## ######   ##   #### ########  ##     ##", 23);
	textocentrado("##        ##        ##    ##    #########   ##  #### ##       ##    ##  ##   ##   #########", 24);
	textocentrado("##        ##  ##    ##    ##    ##     ##   ##   ### ##       ##    ##  ##    ##  ##     ##", 25);
	textocentrado("######## ####  ######     ##    ##     ##   ##    ## ########  ######   ##     ## ##     ##", 26);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	gotoxy(80, 30);
	system("Pause");
	}
	else if(media > 0 && media < 10)
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	
	textocentrado(" ######  ######## ##     ##   ########  ########  ######## ##    ## ########     ###     ###### ", 20);
	textocentrado("##    ## ##       ###   ###   ##     ## ##     ## ##       ###   ## ##     ##   ## ##   ##    ##", 21);
	textocentrado("##       ##       #### ####   ##     ## ##     ## ##       ####  ## ##     ##  ##   ##  ##      ", 22);
	textocentrado(" ######  ######   ## ### ##   ########  ########  ######   ## ## ## ##     ## ##     ##  ###### ", 23);
	textocentrado("      ## ##       ##     ##   ##        ##   ##   ##       ##  #### ##     ## #########       ##", 24);
	textocentrado("##    ## ##       ##     ##   ##        ##    ##  ##       ##   ### ##     ## ##     ## ##    ##", 25);
	textocentrado(" ######  ######## ##     ##   ##        ##     ## ######## ##    ## ########  ##     ##  ###### ", 26);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	gotoxy(80, 30);
	system("Pause");
	}
	else if(media >= 10 && media < 15)
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("########  ########  ######## ##    ## ########     ###     ######  ", 20);
	textocentrado("##     ## ##     ## ##       ###   ## ##     ##   ## ##   ##    ## ", 21);
	textocentrado("##     ## ##     ## ##       ####  ## ##     ##  ##   ##  ##       ", 22);
	textocentrado("########  ########  ######   ## ## ## ##     ## ##     ##  ######  ", 23);
	textocentrado("##        ##   ##   ##       ##  #### ##     ## #########       ## ", 24);
	textocentrado("##        ##    ##  ##       ##   ### ##     ## ##     ## ##    ## ", 25);
	textocentrado("##        ##     ## ######## ##    ## ########  ##     ##  ######  ", 26);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	gotoxy(80, 30);
	system("Pause");	
	}
	else if(media >= 15 && media < 18)
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	
	textocentrado("########     ###    ########     ###    ########  ######## ##    ##  ###### ", 20);
	textocentrado("##     ##   ## ##   ##     ##   ## ##   ##     ## ##       ###   ## ##    ##", 21);
	textocentrado("##     ##  ##   ##  ##     ##  ##   ##  ##     ## ##       ####  ## ##      ", 22);
	textocentrado("########  ##     ## ########  ##     ## ########  ######   ## ## ##  ###### ", 23);
	textocentrado("##        ######### ##   ##   ######### ##     ## ##       ##  ####       ##", 24);
	textocentrado("##        ##     ## ##    ##  ##     ## ##     ## ##       ##   ### ##    ##", 25);
	textocentrado("##        ##     ## ##     ## ##     ## ########  ######## ##    ##  ###### ", 26);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); 
	
	gotoxy(80, 30);
	system("Pause");	
	}
	else if(media >= 18 && media < 20)
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	
	textocentrado("######## ##     ##  ######  ######## ##       ######## ##    ## ######## ########", 20);
	textocentrado("##        ##   ##  ##    ## ##       ##       ##       ###   ##    ##    ##      ", 21);
	textocentrado("##         ## ##   ##       ##       ##       ##       ####  ##    ##    ##      ", 22);
	textocentrado("######      ###    ##       ######   ##       ######   ## ## ##    ##    ######  ", 23);
	textocentrado("##         ## ##   ##       ##       ##       ##       ##  ####    ##    ##      ", 24);
	textocentrado("##        ##   ##  ##    ## ##       ##       ##       ##   ###    ##    ##      ", 25);
	textocentrado("######## ##     ##  ######  ######## ######## ######## ##    ##    ##    ########", 26);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	gotoxy(80, 30);
	system("Pause");
	}
	else if(media == 20)
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	
	textocentrado("#### ##    ##  ######  ########  #### ##     ## ######## ##     ", 20);
	textocentrado(" ##  ###   ## ##    ## ##     ##  ##  ##     ## ##       ##     ", 21);
	textocentrado(" ##  ####  ## ##       ##     ##  ##  ##     ## ##       ##     ", 22);
	textocentrado(" ##  ## ## ## ##       ########   ##  ##     ## ######   ##     ", 23);
	textocentrado(" ##  ##  #### ##       ##   ##    ##   ##   ##  ##       ##     ", 24);
	textocentrado(" ##  ##   ### ##    ## ##    ##   ##    ## ##   ##       ##     ", 25);
	textocentrado("#### ##    ##  ######  ##     ## ####    ###    ######## #######", 26);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	gotoxy(80, 30);
	system("Pause");	
	}
	else if(media > 20)
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	
	textocentrado("##     ## ######## ##    ## ######## #### ########   #######   ######   ####### ", 20);
	textocentrado("###   ### ##       ###   ##    ##     ##  ##     ## ##     ## ##    ## ##     ##", 21);
	textocentrado("#### #### ##       ####  ##    ##     ##  ##     ## ##     ## ##       ##     ##", 22);
	textocentrado("## ### ## ######   ## ## ##    ##     ##  ########  ##     ##  ######  ##     ##", 23);
	textocentrado("##     ## ##       ##  ####    ##     ##  ##   ##   ##     ##       ## ##     ##", 24);
	textocentrado("##     ## ##       ##   ###    ##     ##  ##    ##  ##     ## ##    ## ##     ##", 25);
	textocentrado("##     ## ######## ##    ##    ##    #### ##     ##  #######   ######   ####### ", 26);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	gotoxy(80, 30);
	system("Pause");
	 	
	}
}

void mjmn(){
	string op = "";
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("##     ##    ###    ######## ######## ##     ##    ###    ######## ####  ######     ###   ", 20);
	textocentrado("###   ###   ## ##      ##    ##       ###   ###   ## ##      ##     ##  ##    ##   ## ##  ", 21);
	textocentrado("#### ####  ##   ##     ##    ##       #### ####  ##   ##     ##     ##  ##        ##   ## ", 22);
	textocentrado("## ### ## ##     ##    ##    ######   ## ### ## ##     ##    ##     ##  ##       ##     ##", 23);
	textocentrado("##     ## #########    ##    ##       ##     ## #########    ##     ##  ##       #########", 24);
	textocentrado("##     ## ##     ##    ##    ##       ##     ## ##     ##    ##     ##  ##    ## ##     ##", 25);
	textocentrado("##     ## ##     ##    ##    ######## ##     ## ##     ##    ##    ####  ######  ##     ##", 26);
	textocentrado("         ##    ##    ###    ########    ###    ##       #### ##    ##    ###              ", 27);
	textocentrado("         ###   ##   ## ##      ##      ## ##   ##        ##  ###   ##   ## ##             ", 28);
	textocentrado("         ####  ##  ##   ##     ##     ##   ##  ##        ##  ####  ##  ##   ##            ", 29);
	textocentrado("         ## ## ## ##     ##    ##    ##     ## ##        ##  ## ## ## ##     ##           ", 30);
	textocentrado("         ##  #### #########    ##    ######### ##        ##  ##  #### #########           ", 31);
	textocentrado("         ##   ### ##     ##    ##    ##     ## ##        ##  ##   ### ##     ##           ", 32);
	textocentrado("         ##    ## ##     ##    ##    ##     ## ######## #### ##    ## ##     ##           ", 33);          
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	float r = 0;
	int certas = 0, erradas = 0;
	
	textocentrado("Descrição: Resolva os calculos matematicos", 37);
	
	textocentrado("1 + 1: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Resposta:    ", 42);
	
	cin >> r;
	
	if (r == 2)
	{
		certas++;	
	}
	else
	{
		erradas++;
	}
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("##     ##    ###    ######## ######## ##     ##    ###    ######## ####  ######     ###   ", 20);
	textocentrado("###   ###   ## ##      ##    ##       ###   ###   ## ##      ##     ##  ##    ##   ## ##  ", 21);
	textocentrado("#### ####  ##   ##     ##    ##       #### ####  ##   ##     ##     ##  ##        ##   ## ", 22);
	textocentrado("## ### ## ##     ##    ##    ######   ## ### ## ##     ##    ##     ##  ##       ##     ##", 23);
	textocentrado("##     ## #########    ##    ##       ##     ## #########    ##     ##  ##       #########", 24);
	textocentrado("##     ## ##     ##    ##    ##       ##     ## ##     ##    ##     ##  ##    ## ##     ##", 25);
	textocentrado("##     ## ##     ##    ##    ######## ##     ## ##     ##    ##    ####  ######  ##     ##", 26);
	textocentrado("         ##    ##    ###    ########    ###    ##       #### ##    ##    ###              ", 27);
	textocentrado("         ###   ##   ## ##      ##      ## ##   ##        ##  ###   ##   ## ##             ", 28);
	textocentrado("         ####  ##  ##   ##     ##     ##   ##  ##        ##  ####  ##  ##   ##            ", 29);
	textocentrado("         ## ## ## ##     ##    ##    ##     ## ##        ##  ## ## ## ##     ##           ", 30);
	textocentrado("         ##  #### #########    ##    ######### ##        ##  ##  #### #########           ", 31);
	textocentrado("         ##   ### ##     ##    ##    ##     ## ##        ##  ##   ### ##     ##           ", 32);
	textocentrado("         ##    ## ##     ##    ##    ##     ## ######## #### ##    ## ##     ##           ", 33);          
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Resolva os calculos matematicos", 37);
	
	textocentrado("10 + 5: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Resposta:    ", 42);
	
	cin >> r;
	
	if (r == 15)
	{
		certas++;	
	}
	else
	{
		erradas++;
	}
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("##     ##    ###    ######## ######## ##     ##    ###    ######## ####  ######     ###   ", 20);
	textocentrado("###   ###   ## ##      ##    ##       ###   ###   ## ##      ##     ##  ##    ##   ## ##  ", 21);
	textocentrado("#### ####  ##   ##     ##    ##       #### ####  ##   ##     ##     ##  ##        ##   ## ", 22);
	textocentrado("## ### ## ##     ##    ##    ######   ## ### ## ##     ##    ##     ##  ##       ##     ##", 23);
	textocentrado("##     ## #########    ##    ##       ##     ## #########    ##     ##  ##       #########", 24);
	textocentrado("##     ## ##     ##    ##    ##       ##     ## ##     ##    ##     ##  ##    ## ##     ##", 25);
	textocentrado("##     ## ##     ##    ##    ######## ##     ## ##     ##    ##    ####  ######  ##     ##", 26);
	textocentrado("         ##    ##    ###    ########    ###    ##       #### ##    ##    ###              ", 27);
	textocentrado("         ###   ##   ## ##      ##      ## ##   ##        ##  ###   ##   ## ##             ", 28);
	textocentrado("         ####  ##  ##   ##     ##     ##   ##  ##        ##  ####  ##  ##   ##            ", 29);
	textocentrado("         ## ## ## ##     ##    ##    ##     ## ##        ##  ## ## ## ##     ##           ", 30);
	textocentrado("         ##  #### #########    ##    ######### ##        ##  ##  #### #########           ", 31);
	textocentrado("         ##   ### ##     ##    ##    ##     ## ##        ##  ##   ### ##     ##           ", 32);
	textocentrado("         ##    ## ##     ##    ##    ##     ## ######## #### ##    ## ##     ##           ", 33);          
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Resolva os calculos matematicos", 37);
	
	textocentrado("43 - 4: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Resposta:    ", 42);
	
	cin >> r;
	
	if (r == 39)
	{
		certas++;	
	}
	else
	{
		erradas++;
	}
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("##     ##    ###    ######## ######## ##     ##    ###    ######## ####  ######     ###   ", 20);
	textocentrado("###   ###   ## ##      ##    ##       ###   ###   ## ##      ##     ##  ##    ##   ## ##  ", 21);
	textocentrado("#### ####  ##   ##     ##    ##       #### ####  ##   ##     ##     ##  ##        ##   ## ", 22);
	textocentrado("## ### ## ##     ##    ##    ######   ## ### ## ##     ##    ##     ##  ##       ##     ##", 23);
	textocentrado("##     ## #########    ##    ##       ##     ## #########    ##     ##  ##       #########", 24);
	textocentrado("##     ## ##     ##    ##    ##       ##     ## ##     ##    ##     ##  ##    ## ##     ##", 25);
	textocentrado("##     ## ##     ##    ##    ######## ##     ## ##     ##    ##    ####  ######  ##     ##", 26);
	textocentrado("         ##    ##    ###    ########    ###    ##       #### ##    ##    ###              ", 27);
	textocentrado("         ###   ##   ## ##      ##      ## ##   ##        ##  ###   ##   ## ##             ", 28);
	textocentrado("         ####  ##  ##   ##     ##     ##   ##  ##        ##  ####  ##  ##   ##            ", 29);
	textocentrado("         ## ## ## ##     ##    ##    ##     ## ##        ##  ## ## ## ##     ##           ", 30);
	textocentrado("         ##  #### #########    ##    ######### ##        ##  ##  #### #########           ", 31);
	textocentrado("         ##   ### ##     ##    ##    ##     ## ##        ##  ##   ### ##     ##           ", 32);
	textocentrado("         ##    ## ##     ##    ##    ##     ## ######## #### ##    ## ##     ##           ", 33);          
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Resolva os calculos matematicos", 37);
	
	textocentrado("8/2: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Resposta:    ", 42);
	
	cin >> r;
	
	if (r == 4)
	{
		certas++;
	}
	else
	{
		erradas++;
	}
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("##     ##    ###    ######## ######## ##     ##    ###    ######## ####  ######     ###   ", 20);
	textocentrado("###   ###   ## ##      ##    ##       ###   ###   ## ##      ##     ##  ##    ##   ## ##  ", 21);
	textocentrado("#### ####  ##   ##     ##    ##       #### ####  ##   ##     ##     ##  ##        ##   ## ", 22);
	textocentrado("## ### ## ##     ##    ##    ######   ## ### ## ##     ##    ##     ##  ##       ##     ##", 23);
	textocentrado("##     ## #########    ##    ##       ##     ## #########    ##     ##  ##       #########", 24);
	textocentrado("##     ## ##     ##    ##    ##       ##     ## ##     ##    ##     ##  ##    ## ##     ##", 25);
	textocentrado("##     ## ##     ##    ##    ######## ##     ## ##     ##    ##    ####  ######  ##     ##", 26);
	textocentrado("         ##    ##    ###    ########    ###    ##       #### ##    ##    ###              ", 27);
	textocentrado("         ###   ##   ## ##      ##      ## ##   ##        ##  ###   ##   ## ##             ", 28);
	textocentrado("         ####  ##  ##   ##     ##     ##   ##  ##        ##  ####  ##  ##   ##            ", 29);
	textocentrado("         ## ## ## ##     ##    ##    ##     ## ##        ##  ## ## ## ##     ##           ", 30);
	textocentrado("         ##  #### #########    ##    ######### ##        ##  ##  #### #########           ", 31);
	textocentrado("         ##   ### ##     ##    ##    ##     ## ##        ##  ##   ### ##     ##           ", 32);
	textocentrado("         ##    ## ##     ##    ##    ##     ## ######## #### ##    ## ##     ##           ", 33);          
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Resolva os calculos matematicos", 37);
	
	textocentrado("6 * 3: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Resposta:    ", 42);
	
	cin >> r;
	
	if (r == 18)
	{
		certas++;	
	}
	else
	{
		erradas++;
	}
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("##     ##    ###    ######## ######## ##     ##    ###    ######## ####  ######     ###   ", 20);
	textocentrado("###   ###   ## ##      ##    ##       ###   ###   ## ##      ##     ##  ##    ##   ## ##  ", 21);
	textocentrado("#### ####  ##   ##     ##    ##       #### ####  ##   ##     ##     ##  ##        ##   ## ", 22);
	textocentrado("## ### ## ##     ##    ##    ######   ## ### ## ##     ##    ##     ##  ##       ##     ##", 23);
	textocentrado("##     ## #########    ##    ##       ##     ## #########    ##     ##  ##       #########", 24);
	textocentrado("##     ## ##     ##    ##    ##       ##     ## ##     ##    ##     ##  ##    ## ##     ##", 25);
	textocentrado("##     ## ##     ##    ##    ######## ##     ## ##     ##    ##    ####  ######  ##     ##", 26);
	textocentrado("         ##    ##    ###    ########    ###    ##       #### ##    ##    ###              ", 27);
	textocentrado("         ###   ##   ## ##      ##      ## ##   ##        ##  ###   ##   ## ##             ", 28);
	textocentrado("         ####  ##  ##   ##     ##     ##   ##  ##        ##  ####  ##  ##   ##            ", 29);
	textocentrado("         ## ## ## ##     ##    ##    ##     ## ##        ##  ## ## ## ##     ##           ", 30);
	textocentrado("         ##  #### #########    ##    ######### ##        ##  ##  #### #########           ", 31);
	textocentrado("         ##   ### ##     ##    ##    ##     ## ##        ##  ##   ### ##     ##           ", 32);
	textocentrado("         ##    ## ##     ##    ##    ##     ## ######## #### ##    ## ##     ##           ", 33);          
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Resolva os calculos matematicos", 37);
	
	textocentrado("5 / 2.5: ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Resposta:    ", 42);
	
	cin >> r;
	
	if (r == 2)
	{
		certas++;	
	}
	else
	{
		erradas++;
	}
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("##     ##    ###    ######## ######## ##     ##    ###    ######## ####  ######     ###   ", 20);
	textocentrado("###   ###   ## ##      ##    ##       ###   ###   ## ##      ##     ##  ##    ##   ## ##  ", 21);
	textocentrado("#### ####  ##   ##     ##    ##       #### ####  ##   ##     ##     ##  ##        ##   ## ", 22);
	textocentrado("## ### ## ##     ##    ##    ######   ## ### ## ##     ##    ##     ##  ##       ##     ##", 23);
	textocentrado("##     ## #########    ##    ##       ##     ## #########    ##     ##  ##       #########", 24);
	textocentrado("##     ## ##     ##    ##    ##       ##     ## ##     ##    ##     ##  ##    ## ##     ##", 25);
	textocentrado("##     ## ##     ##    ##    ######## ##     ## ##     ##    ##    ####  ######  ##     ##", 26);
	textocentrado("         ##    ##    ###    ########    ###    ##       #### ##    ##    ###              ", 27);
	textocentrado("         ###   ##   ## ##      ##      ## ##   ##        ##  ###   ##   ## ##             ", 28);
	textocentrado("         ####  ##  ##   ##     ##     ##   ##  ##        ##  ####  ##  ##   ##            ", 29);
	textocentrado("         ## ## ## ##     ##    ##    ##     ## ##        ##  ## ## ## ##     ##           ", 30);
	textocentrado("         ##  #### #########    ##    ######### ##        ##  ##  #### #########           ", 31);
	textocentrado("         ##   ### ##     ##    ##    ##     ## ##        ##  ##   ### ##     ##           ", 32);
	textocentrado("         ##    ## ##     ##    ##    ##     ## ######## #### ##    ## ##     ##           ", 33);          
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("Descrição: Resolva os calculos matematicos", 37);
	
	textocentrado("2 * (188 - 180): ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Resposta:    ", 42);
	
	cin >> r;
	
	if (r == 16)
	{
		certas++;	
	}
	else
	{
		erradas++;
	}
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("##     ##    ###    ######## ######## ##     ##    ###    ######## ####  ######     ###   ", 20);
	textocentrado("###   ###   ## ##      ##    ##       ###   ###   ## ##      ##     ##  ##    ##   ## ##  ", 21);
	textocentrado("#### ####  ##   ##     ##    ##       #### ####  ##   ##     ##     ##  ##        ##   ## ", 22);
	textocentrado("## ### ## ##     ##    ##    ######   ## ### ## ##     ##    ##     ##  ##       ##     ##", 23);
	textocentrado("##     ## #########    ##    ##       ##     ## #########    ##     ##  ##       #########", 24);
	textocentrado("##     ## ##     ##    ##    ##       ##     ## ##     ##    ##     ##  ##    ## ##     ##", 25);
	textocentrado("##     ## ##     ##    ##    ######## ##     ## ##     ##    ##    ####  ######  ##     ##", 26);
	textocentrado("         ##    ##    ###    ########    ###    ##       #### ##    ##    ###              ", 27);
	textocentrado("         ###   ##   ## ##      ##      ## ##   ##        ##  ###   ##   ## ##             ", 28);
	textocentrado("         ####  ##  ##   ##     ##     ##   ##  ##        ##  ####  ##  ##   ##            ", 29);
	textocentrado("         ## ## ## ##     ##    ##    ##     ## ##        ##  ## ## ## ##     ##           ", 30);
	textocentrado("         ##  #### #########    ##    ######### ##        ##  ##  #### #########           ", 31);
	textocentrado("         ##   ### ##     ##    ##    ##     ## ##        ##  ##   ### ##     ##           ", 32);
	textocentrado("         ##    ## ##     ##    ##    ##     ## ######## #### ##    ## ##     ##           ", 33);  
    
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    gotoxy(80, 38);
    
    cout << "Questoes certas: " << certas << endl;
    
    gotoxy(80, 39);
    
    cout << "Questoes erradas: " << erradas << endl;
    
    gotoxy(80, 42);
    
    system("Pause");
}

void mjcobdn(){
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 16);
    textocentrado("===============================================================================", 17);
    
    textocentrado("===============================================================================", 47);
    textocentrado("===============================================================================", 48);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado(" #####  ####### #     #  #####  ####### ######  #     #    #   ", 20);
	textocentrado("#     # #     # ##    # #     #    #    #     # #     #   # #  ", 21);
	textocentrado("#       #     # # #   # #          #    #     # #     #  #   # ", 22);
	textocentrado("#       #     # #  #  #  #####     #    ######  #     # #     #", 23);
	textocentrado("#       #     # #   # #       #    #    #   #   #     # #######", 24);
	textocentrado("#     # #     # #    ## #     #    #    #    #  #     # #     #", 25);
	textocentrado(" #####  ####### #     #  #####     #    #     #  #####  #     #", 26);
	textocentrado("#######   ######  ####### #     # #######  #####  #######", 28);
	textocentrado("#     #   #     # #     # ##    # #       #     # #     #", 29);
	textocentrado("#     #   #     # #     # # #   # #       #       #     #", 30);
	textocentrado("#     #   ######  #     # #  #  # #####   #       #     #", 31);
	textocentrado("#     #   #     # #     # #   # # #       #       #     #", 32);
	textocentrado("#     #   #     # #     # #    ## #       #     # #     #", 33);
	textocentrado("#######   ######  ####### #     # #######  #####  #######", 34);
	textocentrado("######  #######   #     # ####### #     # #######", 36);
	textocentrado("#     # #         ##    # #       #     # #      ", 37);
	textocentrado("#     # #         # #   # #       #     # #      ", 38);
	textocentrado("#     # #####     #  #  # #####   #     # #####  ", 39);
	textocentrado("#     # #         #   # # #        #   #  #      ", 40);
	textocentrado("#     # #         #    ## #         # #   #      ", 41);
	textocentrado("######  #######   #     # #######    #    #######", 42);                      
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	gotoxy(80, 44);
	
	system("Pause");
	
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 16);
    textocentrado("===============================================================================", 17);
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    textocentrado("Construa o boneco de neve!", 20);
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 47);
    textocentrado("===============================================================================", 48);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	string cor = "", cab = "", corp = "", per = "", pes = "";
	
	textocentrado("Descrição: Construa o boneco de neve com as opções abaixo!", 22);
	
	textocentrado("Cor(1 - Branco | 2 - Azul | 3 - Verde): ", 25);
	cin >> cor;
	
	textocentrado("Cabeça(1 - Normal | 2 - Gorro | 3 - Chapeu): ", 27);	
	cin >> cab;
	
	textocentrado("Corpo(1 - Normal | 2 - Fino | 3 - Grande): ", 29);	
	cin >> corp;
	
	textocentrado("Pernas(1 - Normal | 2 - Fino | 3 - Grande): ", 31);	
	cin >> per;
	
	textocentrado("Sapatos(1 - Sem | 2 - Botas | 3 - Executivos): ", 33);	
	cin >> pes;
	
	system("CLS");
	
	if (cor == "1")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);	
	}
	else if(cor == "2")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);	
	}
	else if(cor == "3")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);	
	}
	
	if (cab == "1")
	{
		cout << "     __" << endl;
	}
	else if(cab == "2")
	{
		cout << "     __" << endl;
		cout << "    |==| " << endl;
	}
	else if(cab == "3")
	{
		cout << "     __" << endl;
		cout << "   _|==|_ " << endl;
	}
	
	cout << "    ('')___/" << endl;
	
	if (corp == "1")
	{
		   cout << ">--(`^^')" << endl;
		   cout << "  (`^'^'`)" << endl;
	}
	else if(corp == "2")
	{
		   cout << ">-- !^ !" << endl;
		   cout << "  ` !^ !" << endl;
	}
	else if(corp == "3")
	{
		   cout << ">--( `^^' )" << endl;
		   cout << "`(          )" << endl;
	}
	
	if (per == "1")
	{
		cout << "  `||  ||'" << endl;
	}
	else if(per == "2")
	{
		cout << "  `|    | '" << endl;
	}
	else if(per == "3")
	{
		cout << "  `||||||'" << endl;
	}
	
	if (pes == "1")
	{
		cout << "" << endl;
	}
	else if(pes == "2")
	{
		cout << "   [_] [_]" << endl;
	}
	else if(pes == "3")
	{
		cout << "  `_| |_' " << endl;
	}
	
	cout << "" << endl;
	system("Pause");
}

void minijogo(){
	
	bool on = true;
	string op = "";
	
	while (on == true)
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
		
		gotoxy(136, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
		
		gotoxy(137, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
		
		gotoxy(138, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("#     #                                              ", 20);
	textocentrado("##   ## # #    # #      #  ####   ####   ####   #### ", 21);
	textocentrado("# # # # # ##   # #      # #    # #    # #    # #     ", 22);
	textocentrado("#  #  # # # #  # #      # #    # #      #    #  #### ", 23);
	textocentrado("#     # # #  # # #      # #    # #  ### #    #      #", 24);
	textocentrado("#     # # #   ## # #    # #    # #    # #    # #    #", 25);
	textocentrado("#     # # #    # #  ####   ####   ####   ####   #### ", 26);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 207);  
	
	textocentrado("                                                           ", 29);
	textocentrado("        .aMMMb  dMMMMb  .aMMMb  .aMMMb  dMMMMMP .dMMMb     ", 30);
	textocentrado("       dMP dMP dMP.dMP dMP VMP dMP  MP dMP     dMP  VP     ", 31);
	textocentrado("      dMP dMP dMMMMP  dMP     dMP dMP dMMMP    VMMMb       ", 32);
	textocentrado("     dMP.aMP dMP     dMP.aMP dMP.aMP dMP     dP .dMP       ", 33);
	textocentrado("     VMMMP  dMP      VMMMP   VMMMP  dMMMMMP  VMMMP         ", 34);
	textocentrado("                                                           ", 35);
	textocentrado("                 1. Julgameto do Pai Natal                 ", 36);
	textocentrado("                   2. Matematica Natalina                  ", 37);
	textocentrado("                3. Contrua o boneco de neve                ", 38);
	textocentrado("                   4. Voltar para o menu                   ", 39);
	textocentrado("                                                           ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Escolha:    ", 42);
	
	gotoxy(103, 42);
	cin >> op;
		
		if (op == "1")
		{
			mjjdpn();
		}
		else if(op == "2")
		{
			mjmn();
		}
		else if(op == "3")
		{
			mjcobdn();
		}
		else if(op == "4")
		{
			on = false;
		}
		else
		{
			
		}
	}	
}

void animacoes(){
	bool on = true;
	string op = "";
	
	while (on == true)
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 17);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
    textocentrado("===============================================================================", 47);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
		
		gotoxy(136, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 255);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
		
		gotoxy(137, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
		
		gotoxy(138, i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	textocentrado("    #    #     # ### #     #    #     #####  ####### #######  #####  ", 20);
	textocentrado("   # #   ##    #  #  ##   ##   # #   #     # #     # #       #     # ", 21);
	textocentrado("  #   #  # #   #  #  # # # #  #   #  #       #     # #       #       ", 22);
	textocentrado(" #     # #  #  #  #  #  #  # #     # #       #     # #####    #####  ", 23);
	textocentrado(" ####### #   # #  #  #     # ####### #       #     # #             # ", 24);
	textocentrado(" #     # #    ##  #  #     # #     # #     # #     # #       #     # ", 25);
	textocentrado(" #     # #     # ### #     # #     #  #####  ####### #######  #####  ", 26);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 207);  
	
	textocentrado("                                                           ", 29);
	textocentrado("        .aMMMb  dMMMMb  .aMMMb  .aMMMb  dMMMMMP .dMMMb     ", 30);
	textocentrado("       dMP dMP dMP.dMP dMP VMP dMP  MP dMP     dMP  VP     ", 31);
	textocentrado("      dMP dMP dMMMMP  dMP     dMP dMP dMMMP    VMMMb       ", 32);
	textocentrado("     dMP.aMP dMP     dMP.aMP dMP.aMP dMP     dP .dMP       ", 33);
	textocentrado("     VMMMP  dMP      VMMMP   VMMMP  dMMMMMP  VMMMP         ", 34);
	textocentrado("                                                           ", 35);
	textocentrado("                        1. Pai natal                       ", 36);
	textocentrado("                        2. Presente                        ", 37);
	textocentrado("                    3. Arvore de natal                     ", 38);
	textocentrado("                   4. Voltar para o menu                   ", 39);
	textocentrado("                                                           ", 40);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("Escolha:    ", 42);
	
	gotoxy(103, 42);
	cin >> op;
		
		if (op == "1")
		{
			animacaoPaiNatal();
		}
		else if(op == "2")
		{
			animacaoPresente();
		}
		else if(op == "3")
		{
			animacaoArvore();
		}
		else if(op == "4")
		{
			on = false;
		}
		else
		{
			
		}
	}
}

void inigma(){
	system("CLS");
	string codigo = "";
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 17);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 25);
    textocentrado("===============================================================================", 26);
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    
    textocentrado("Escreva o codigo secreto: ", 20);
    cin >> codigo;
    
    if (codigo == "2512")
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    textocentrado("===============================================================================", 17);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    textocentrado("===============================================================================", 47);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		cout << "|";
		
		gotoxy(136, i);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		cout << "|";
		
		gotoxy(137, i);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		cout << "|";
		
		gotoxy(138, i);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	
	textocentrado("Para proceder ao nivel seguinte resolva todas as", 20);
	textocentrado("as questoes e depois some o resultado!", 21);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
	textocentrado("1+1", 23);
	textocentrado("11-3", 25);
	textocentrado("444-400", 27);
	textocentrado("500/20", 29);
	textocentrado("0-14", 31);
	
	textocentrado("Resposta: ", 33);
	
    cin >> codigo;
    
    if (codigo == "75")
	{
	system("CLS");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 204);
    textocentrado("===============================================================================", 16);
    textocentrado("===============================================================================", 17);
    textocentrado("===============================================================================", 18);
    
	textocentrado("===============================================================================", 46);
    textocentrado("===============================================================================", 47);
    textocentrado("===============================================================================", 48);
    
    for (int i = 18; i <= 46; i++)
	{
		gotoxy(61, i);
		cout << "|";
		
		gotoxy(136, i);
		cout << "|";
	}
	
	for (int i = 17; i <= 47; i++)
	{
		gotoxy(60, i);
		cout << "|";
		
		gotoxy(137, i);
		cout << "|";
	}
	
	for (int i = 16; i <= 48; i++)
	{
		gotoxy(59, i);
		cout << "|";
		
		gotoxy(138, i);
		cout << "|";
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	
	textocentrado("Para proceder ao nivel seguinte resolva a encriptação seguinte", 20);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	
	textocentrado("CFV_r_n_zryube_qvfpvcyvan", 22);
	
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	textocentrado("!DICA!", 25);
	textocentrado("'A cifra de César é um método de criptografia de texto'", 26);
	
	textocentrado("Resposta: ", 33);
	
    cin >> codigo;
    
    if (codigo == "PSI_e_a_melhor_disciplina")
	{
		system("CLS");
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	
		textocentrado("COMPLETOU O INIGMA!", 22);
		
		textocentrado("", 26);
		
		system("Pause");
	}
	else
	{
		system("CLS");
		textocentrado("ERRADO!", 20);
		Sleep(1000);
	}
	}
	else
	{
		system("CLS");
		textocentrado("ERRADO!", 20);
		Sleep(1000);
	}
	}
	else
	{
		system("CLS");
		textocentrado("ERRADO!", 20);
		Sleep(1000);
	}
}

int main() {
	 
 	system("Mode 650");
	system("Color 0D");
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	string op = "";
	bool on = false;
	
	Sleep(1000);
	
    //Animação inicial
    
	animacaoPaiNatal();
	
	on = true;
	
	while (on == true)
	{
		desenharmenu();
	
		gotoxy(103, 42);
		cin >> op;
		
		if (op == "1")
		{
			minijogo(); // Tela de minijogos!
		}
		else if(op == "2")
		{
			animacoes(); // Tela de animacoes!	
		}
		else if(op == "3")
		{
			inigma(); //Tela de inigma
		}
		else if(op == "4")
		{
			on = false;
			creditos(); //Tela de creditos
		}
	}	
	
    return 0;
}