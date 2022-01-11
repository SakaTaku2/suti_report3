#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n;
int count = 0;
int i = 100000; //試行回数
double x,y,z,pi;

int main(void){

  printf("乱数生成の結果は次のようになる\n(i=試行回数)\n");

  srand(time(NULL)); //乱数の種を初期化

  for(n=1; n<=i; n++){ //乱数を生成する
    x = (double)rand() / RAND_MAX;
    y = (double)rand() / RAND_MAX;
    z = x*x + y*y;
    if(z<1) count++; //円の中に入った点の数を数える
    if(n%1000==0) //printf文の表示数を制限
      printf("i=%d: x=%f, y=%f\n", n, x, y); //乱数生成の結果を表示
  }

  pi = (double)count / i * 4; //円周率を計算する
  printf("\n円周率は %f です\n", pi); //求めた円周率を表示する

  return 0;
}
