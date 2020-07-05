/**************************************************************************/
//TELEGRAM : https://t.me/tempestas_73
//string processing (for get coordinates)

#include <stdio.h>
#include <conio.h>
#include <string.h>

int coor(char w[10]){
  int x;
  int y;
     int v;
     char cx [10];
     char cy [10];
 for(int i=0;i<strlen(w);i++){
 if(w[i]==','){
    v=i;
 for(int j=0;j<v;j++){
     cx[j]=w[j];
 }
 int say=0;
 for(int k=v+1;k<strlen(w);k++){
     cy[say]=w[k];
     say++;
 }

 }

 }

x = atoi(cx);
y = atoi(cy);


 return ((x*100)+y);
 }



 int main(){
   while(1){
    int arr[50];
    char t[10];
    char u[10];

    printf("[1. coordinates] x,y: ");
    scanf("%s",&t);
    int xyfirst = coor(t);
    printf("[2. coordinates] x,y: ");
    scanf("%s",&u);
    int xysecond = coor(u);

 arr[0]=xyfirst;
 arr[1]=xysecond;
 int xa = arr[0]/100;
 int ya = arr[0]%100;
 int xb = arr[1]/100;
 int yb = arr[1]%100;
 printf("1: x[%d] , y[%d]",xa,ya);
 printf("\n2: x[%d] , y[%d]",xb,yb);

printf("\n\nPress 'e' For Exit\n");
  char var =  getch();
    if(var == 'e')
    return 0;
}
}
