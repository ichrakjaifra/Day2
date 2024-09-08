#include <stdio.h>

int main() {
  int i,j;
  int l;
  printf("veuillez saisir nombre de lignes:");
  scanf("%d",&l);
  for(i=0;i<l;i++){
    for(j=0;j<l-1-i;j++){
      printf(" ");
    }
      for(j=0;j<2*i+1;j++){
        printf("*");
      }
      printf("\n");
    }
    return 0;
  }
