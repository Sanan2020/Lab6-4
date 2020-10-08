#include <stdio.h>
int main(void){
  int a,b,answer;
  int x[4],y[4];

  for(a=0;a<=9999;a++){
    x[0] = (a / 1000);
    x[1] = (a / 100) % 10;
    x[2] = (a / 10) % 10;
    x[3] = (a % 10);

    for(b=0;b<4;b++){
      y[b] = x[b] *x[b] *x[b] *x[b];
    }
    answer = y[0] + y[1] + y[2] + y[3];

    if(answer==a){
      printf("Answer : %d\n",answer);
    }
  }
}