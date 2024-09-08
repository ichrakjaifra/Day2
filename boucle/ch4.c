#include<stdio.h>

int main(){
  int n;
  int inverse=0;

  printf("Veuillez saisir un nombre:");
  scanf("%d",&n);
  do{
    inverse=(inverse*10)+(n%10);
    n=n/10;
  }while(n!=0);
  printf("L'inverse est %d",inverse);
  return 0;
}