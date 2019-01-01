#include <stdio.h>

int count = 0;
int counting(int n){
  while(n!=1){
    count +=1;
    if(n%2 ==1){

      n = (3*n+1)/2;
    }else{
      n = n/2;
    }
  }
return count;
}

int main(void){
  int num;
  scanf("%d",&num);
  int result = counting(num);
  printf("%d",result);
  return 0;
}
