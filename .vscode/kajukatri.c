#include <stdio.h>
int main(){
  int i,j;
  for(i=1;i<=5;i++){
      for(j=i;j<=5-1;j++){
          printf(" ");
      }
      for(j=1;j<=i;j++){
          printf("* ");
      }
      printf("\n");
  }
    for(i=4;i>=1;i--){
      for(j=i;j<=5-1;j++){
          printf(" ");
      }
      for(j=1;j<=i;j++){
          printf("* ");
      }
      printf("\n");
  }



    return 0;
}