#include <stdio.h>
#define MAX 100

int criaNumerao(int n, int num[]){
  int tamNum = 0;
  int resto = 0;
  if(n<0) {
    n*=-1;
    num[0] = 1;
  } else {
    num[0] = 0; 
  }

  for(int i=1; n>0; i++){
    resto=n%10;
    num[i]=resto;
    n=n/10;
    //printf("%d", num[i]);
    tamNum++;
    }

    return tamNum;
}

void imprimeNum(int num[], int tamNum){
     if(num[0]==1){
       num[tamNum]=num[tamNum]*(-1);
     }

    for(int i = tamNum; i>0 ; i--){
    printf("%d", num[i]);
    }
}
/* Soma ’a’ e ’b’ e guarda o resultado (a+b) em ’a’
’b’ não é modificado
retorna a quantidade de dígitos do resultado */
int soma(int a[], int tamA, int b[], int tamB){
  int sobe1;
  int qD = 0; 
  int maiorTam = 0;
   if(tamA>tamB) {maiorTam = tamA;}
   else{maiorTam = tamB;} 

  if((a[0]==0 && b[0]==0) || (a[0]==1 && b[0]==1)){
  
  for(int i=1; i<=maiorTam; i++){

    if(a[i]+b[i]<10){
      a[i]=a[i]+b[i];
      qD++;
    }else{
      //printf("a[%d]:%d a[%d]: %d\n", i, a[i], i+1, a[i+1]);
     // printf("a[%d]:%d a[%d]: %d\n", i, b[i], i+1, b[i+1]);
      sobe1 = (a[i]+b[i])/10;
      a[i]=(a[i]+b[i])%10;
      printf("sobe1: %d\n", sobe1); 
      a[i+1]+=sobe1;
      //printf("a[%d]:%d a[%d]: %d\n", i, a[i], i+1, a[i+1]);
     // printf("a[%d]:%d a[%d]: %d\n", i, b[i], i+1, b[i+1]);
      qD++; 
       if(i==maiorTam && sobe1==1){
         a[i+1]=1;
         qD++;
        }
     } 
 }
}
  if(a[0]==1&&b[0]==0){
      for(int i=1; i<=maiorTam; i++){
      }
  }
  if(a[0]==0&&b[0]==1){

  }

  //printf("\nestou imprimindo na funcao: ");
  //imprimeNum(a, qD);
  return qD; 
  
}


int main() {
  
  int n1, n2, tam1=0, tam2=0;
  int num1[MAX], num2[MAX], qDigitos = 0;
  //int *p1 = num1;
  
  for(int i=0; i<100; i++){
    num1[i]=0;
    num2[i]=0;
  }

  printf("digite num:");
  scanf("%d %d", &n1, &n2);
  
  //printf("\nno1:\n");
  tam1 = criaNumerao(n1, num1);
  //imprimeNum(num1, tam1);

  //printf("\nno2\n");
  tam2 = criaNumerao(n2, num2);
  //imprimeNum(num2, tam2);

  //printf("\nsoma:\n");
  qDigitos = soma(num1, tam1, num2, tam2);
  printf("\nqDigitos: %d\n", qDigitos);
  imprimeNum(num1, qDigitos);


  return 0;
}