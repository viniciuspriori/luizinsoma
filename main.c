#include <stdio.h>
#define MAX 10

int criaNumerao(int n, int num[]){
  int tamNum = 0;
  int resto = 0;
  if(n<0) {
    n*=-1;
    *num = 1;
  } else {
    *num = 0; 
  }

  for(int i=0; n>0; i++){
    resto=n%10;
    *num=resto;
    n=n/10;
    //printf("\n%d", *num);
    num++;
    tamNum++;
    } 
    return tamNum;
}

void imprimeNum(int num[], int tamNum){
    //  if(*num==1){
    //    num[tamNum]=num[tamNum]*(-1);
    //  }
    for(int i = 0; i<tamNum; i++){
          printf("%d", *(num + i));
     }
}
int soma(int a[], int tamA, int b[], int tamB){
  int sobe1;
  int qD = 0; 
  int maiorTam = 0;

  if (tamA>tamB) maiorTam=tamA;
  if (tamA<tamB) maiorTam=tamB;
  if (tamA==tamB) maiorTam=tamA;

  if((*a==0 && *b==0) || (*a==1 && *b==1)){
        for(int i=1; i<=maiorTam; i++){
            *a=*a+*b;

            a++;
            b++;
            qD++;
        }
  }
  return qD;
}

int main() {
  
  int n1=0, n2=0, tam1=0, tam2=0;
  int num1[MAX], num2[MAX], qDigitos = 0;
  int opcao = 0; 
  
  //printf("Digita -1 p/ sair, 0 (soma) ou 1 (soma naturais): ");
  //scanf("%d", &opcao); 
  opcao=0;
  if(opcao==0){
  printf("digite numero 1: ");
  scanf("%d", &n1);
  //printf("digite numero 2: ");
  //scanf("%d", &n2);
  
  printf("\nno1:\n");
  tam1 = criaNumerao(n1, num1);
  imprimeNum(num1, tam1);
  
   //printf("\nno2\n");
   //tam2 = criaNumerao(n2, num2);
   //imprimeNum(num2, tam2);

  printf("\nsoma: ");
  //qDigitos = soma(num1, tam1, num2, tam2);
  //printf("\nqDigitos: %d\n", qDigitos);
  //imprimeNum(num1, qDigitos);
  printf("\n");
}
if (opcao==1){
  printf("digite numero: ");
  scanf("%d", &n1); 
  tam1 = criaNumerao(n1, num1);
  while(n1>0){
    n2 = (n1-1);
    tam2 = criaNumerao(n2, num2);
    tam1 = soma(num1, tam1, num2, tam2);
      //if(n2==1) {
       printf("soma: ");
       imprimeNum(num1, tam1);
       printf(" [n1]: %d, [n2]: %d ", n1, n2);
       printf("\n");
     //}
     n1--;   
  }
}  
  return 0;
}