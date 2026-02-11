#include<stdio.h>

int main(){

  int num, sum=0;


  do{

    scanf("%d", &num);

    for (int div = 1; div <= num; ++div)
    {
      if(num%div == 0){
        sum++;
      }
    }

  } while (num > 0);


  printf("%d", sum);


  return 0;
}