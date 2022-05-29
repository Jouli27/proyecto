#include<stdio.h>
#include<conio.h>
#include<windows.h>

void iraxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }

int main(){


int reto[30];
int jugador[30];
int avanza=0;
int termina=1;

iraxy(30,1);
    printf("Juego de memoria Ulises Sanchez Rosas LIA A2");
    iraxy(15,4);
 printf("Reto");

 iraxy(70,4);
 printf("Jugador");
do{
for(int i=0; i<=avanza; i++){
        srand(time(NULL));//permite inicializar un numero aleatorio diferente cada vez
reto[i]=rand()%10;
iraxy(15,5);
printf("%d", reto[i]);
Sleep(1000);
iraxy(15,5);
printf(" ");

}

for(int a=0;a<=termina;a++){

iraxy(70,5);
jugador[a]=getche()-48;

}
}
while(termina!=avanza);
}








