#include <stdio.h>
using namespace std;

int main(){
  int count;
  int sum;
  char arr[10] = {0};

  while(1){
    count = 0;
    sum = 0;
    scanf("%s", arr);

    for(int j = 0; arr[j] !=0; j++){
      if(arr[j] == 'o'){
        count++;
        sum += count;
      }
      else count = 0;
    }
  printf("%d\n", sum);
  }

return 0;
}
