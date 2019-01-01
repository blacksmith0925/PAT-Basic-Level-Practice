#include <stdio.h>
#include <string.h>

int getsum(char* num){
  int sum = 0;
  for(int i=0;i<strlen(num);i++)
  {
      int snum = num[i]-'0';
      sum = sum + snum;
  }
  return sum;
}

void change_num_to_char(int num){
    if(num==0){
        printf("ling");
    }else if(num==1){
        printf("yi");
    }else if(num==2){
        printf("er");
    }else if(num==3){
        printf("san");
    }else if(num==4){
        printf("si");
    }else if(num==5){
        printf("wu");
    }else if(num==6){
        printf("liu");
    }else if(num==7){
        printf("qi");
    }else if(num==8){
        printf("ba");
    }else if(num==9){
        printf("jiu");
    }
}

void getstr(int sum){
    int i;
    if(sum/10){
        i = sum/10;
        getstr(i);
        printf(" ");
    }
    change_num_to_char(sum%10);
}



int main(){
    char num[105];
    scanf("%s",num);
    int sum_result = getsum(num);
    getstr(sum_result);
    return 0;
}
