#include <stdio.h>

int solution(int n){
  int sum = n;
  while(n > 0){
    if(n==0) break;
    sum += n%10;
    n = n/10;
  }
  return sum;
}

int main(){
  int N;
  printf("N is = ");
  scanf("%d", &N);
  int i;
  for(i = solution(N); i< 5*N; i=solution(i)){
    printf("%d\n", i);
  }
  return 0;
}