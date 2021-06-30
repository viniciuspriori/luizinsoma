#include <stdio.h>
#define MAX 2021

int criaNumerao(int n, int num[]){
  int tamNum = 0;
  int resto = 0;
  if(n<0) {
    n*=-1;
    num[0] = 1;
  } else {
    num[0] = 0;
  }
  if(n==0){
    num[0]=1;
    num[1]=0;
    tamNum++;
  }
  for(int i=1; n>0; i++){
    resto=n%10;
    num[i]=resto;
    n=n/10;
    tamNum++;
    }
    for(int i=tamNum+1; i<tamNum+10; i++){
      num[i]=0;
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
   if(tamA>=tamB){maiorTam = tamA;}
    if (tamA<tamB){
        maiorTam=tamB;
    }


  if((a[0]==0 && b[0]==0) || (a[0]==1 && b[0]==1)){

  for(int i=1; i<=maiorTam; i++){

    if(a[i]+b[i]<10){
      a[i]=a[i]+b[i];
      qD++;
    }else{
      sobe1 = (a[i]+b[i])/10;
      a[i]=(a[i]+b[i])%10;
      a[i+1]+=sobe1;
      qD++;
     if(i==maiorTam && sobe1==1){
          a[i+1]=1;
          qD++;
         }
     }
 }
}
  if(a[0]==1&&b[0]==0){
      if(tamA>tamB){
        for(int i=1; i<=maiorTam; i++){
        if(a[i]-b[i]==0){qD--;}

        if(a[i]-b[i]>0){
          a[i]=a[i]-b[i];
          qD++;
        }
        else{
          sobe1=a[i]+10;
          a[i+1]--;
          a[i]=sobe1-b[i];
          qD++;
          if(a[i]==0){
                qD--;
                    }
        }
        if(i==maiorTam){
               a[maiorTam]*= -1 ;
             }
       }

      }
      else if(tamA<tamB){
          for(int i=1; i<=maiorTam; i++){
            if(b[i]-a[i]==0){
              if(i==maiorTam)
              qD--;
            }
             if(b[i]-a[i]>=0){
               a[i]=b[i]-a[i];
               qD++;
             }
           else {
               sobe1=b[i]+10;
               b[i+1]--;
               a[i]=sobe1-a[i];
               qD++;
               if(a[i]==0){
                 qD--;
               }
             }
             if(i==maiorTam){
               a[qD]*= -1 ;
             }

          }

      } else if(tamA==tamB) {
              for(int i=1; i<=maiorTam; i++){
                if(a[tamA]>=b[tamB]){
                    if(a[i]-b[i]==0){
                        if(i==maiorTam)
                            qD--;
                          }

                if(a[i]-b[i]>=0){
                    a[i]=a[i]-b[i];
                    qD++;
                    }
                else{
                    sobe1=a[i]+10;
                    a[i+1]--;
                    a[i]=sobe1-b[i];
                    qD++;
                    if(a[i]==0){
                    qD--;
                    }
                 }
                }
                else {
                if(b[i]-a[i]==0){
                    if(i==maiorTam)
                    qD--;}

                if(b[i]-a[i]>=0){
                    a[i]=b[i]-a[i];
                    qD++;
                    }
                else {
                    sobe1=b[i]+10;
                    b[i+1]--;
                    a[i]=sobe1-a[i];
                    qD++;
                    if(a[i]==0){
                        qD--;
                        }
                    }
             if(i==maiorTam){
               a[qD]*= -1 ;
             }
                    }

               }
             }

  }
  if(a[0]==0 && b[0]==1){
    if(tamA>tamB){
        for(int i=1; i<=maiorTam; i++){
        if(a[i]-b[i]==0){
          if(i==maiorTam)
          qD--;
         }

        if(a[i]-b[i]>=0){
          a[i]=a[i]-b[i];
          qD++;
        }
        else{
          sobe1=a[i]+10;
          a[i+1]--;
          a[i]=sobe1-b[i];
           qD++;
           if(a[i]==0){
             qD--;
           }
        }
       }
      }
      else if(tamA<tamB){
          for(int i=1; i<=maiorTam; i++){
             if(b[i]-a[i]==0){
               if(i==maiorTam)
               qD--;}

             if(b[i]-a[i]>=0){
               a[i]=b[i]-a[i];
               qD++;
             } else {
               sobe1=b[i]+10;
               b[i+1]--;
               a[i]=sobe1-a[i];
               qD++;
               if(a[i]==0){
                 qD--;
               }
             }
             if(i==maiorTam){
               a[qD]*= -1 ;
             }
             }

           }
            if(tamA==tamB) {
              for(int i=1; i<=maiorTam; i++){
                if(a[tamA]>=b[tamB]){
                    if(a[i]-b[i]==0){
                        if(i==maiorTam)
                            qD--;
                            }

                if(a[i]-b[i]>=0){
                    a[i]=a[i]-b[i];
                    qD++;
                    }
                else{
                    sobe1=a[i]+10;
                    a[i+1]--;
                    a[i]=sobe1-b[i];
                    qD++;
                    if(a[i]==0){
                    qD--;
                    }
                }
                    }
                else {
                if(b[i]-a[i]==0){
                    if(i==maiorTam)
                    qD--;}

                if(b[i]-a[i]>=0){
                    a[i]=b[i]-a[i];
                    qD++;
                    }
                else {
                    sobe1=b[i]+10;
                    b[i+1]--;
                    a[i]=sobe1-a[i];
                    qD++;
                    if(a[i]==0){
                        qD--;
                        }
                    }
             if(i==maiorTam){
               a[qD]*= -1 ;
             }
                    }

               }
             }

  }

  return qD;

}

    int somaNaturais(int n, int a[], int tamA, int b[], int tamB){

    tamA = soma(a, tamA, b, tamB);

    return somaNaturais(n, a, tamA, b, tamB);
 }


int main() {

  int n1=0, n2=0, tam1=0, tam2=0;
  int num1[MAX], num2[MAX], qDigitos = 0;
  int opcao = 0, acumula=0;

  for(int i=0; i<100; i++){
    num1[i]=0;
    num2[i]=0;
  }
  printf("Digite 0 (soma) ou 1 (soma naturais): ");
  scanf("%d", &opcao);

  if(opcao==0){
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);


  tam1 = criaNumerao(n1, num1);



  tam2 = criaNumerao(n2, num2);


  printf("\nSoma: ");
  qDigitos = soma(num1, tam1, num2, tam2);

  imprimeNum(num1, qDigitos);
  printf("\n");
}
if (opcao==1){
  printf("Entre com valor de n para soma dos n primeiros naturais: ");
  scanf("%d", &n1);
  int g= n1;
  tam1 = criaNumerao(n1, num1);
  while(n1>0){
    n2 = n1 - 1;

      tam2=criaNumerao(n2, num2);
      tam1=soma(num1, tam1, num2, tam2);
      if(n2==1) {
       printf("Soma dos %d primeiros naturais = ", g);
       imprimeNum(num1, tam1);
       printf("\n");
     }
     n1--;
  }
}

  return 0;
}
