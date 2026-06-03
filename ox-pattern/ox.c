
// ! Print
// O O X O O
// O O X O O
// X X X X X
// O O X O O
// O O X O O


#include<stdio.h>
int main(){
  int n = 5;
  for(int i = 1; i <= n; i++){
    for(int j= 1; j <= n; j++){
      if(i == (n/2)+1 || j == (n/2)+1){
        printf("X ");
      }else{
        printf("O ");
      }
    }
    printf("\n");
  }
  return 0;
}