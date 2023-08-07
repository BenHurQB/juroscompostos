
#include <stdio.h>
#include <math.h>

/*Quanto pagará ao final de 12 meses 
pelo empréstimo de R$ 1.000,00 
sabendo que a taxa e juros 
compostos é 5% a.m. ?
Fórmula: F = P * (1 + i)^n*/
//F= 1000*(1 + 0,05)^12 = R$ 1.795,86
void entraDados(float *p, float *i, float *n){

  printf("\nCALCULO DE JUROS COMPOSTOS");
  printf("\n----------------------------------");
  printf("\nInforme o valor principal R$ ");
  scanf(" %f", *&p);
  printf("\nInforme a taxa mensal %%  ");
  scanf(" %f", *&i);
  printf("\nInforme o prazo em meses:  ");
  scanf(" %f", *&n);
  
  
}
void calcula(float p, float i, float n,  float *f ){

  
  *f = p * pow(1 + (i/100), n);


  
}
void saidaDados(float f){

  printf("\nO valor futuro sera R$ %.2f", f);
}


int main(void) {

  float f, p, i, n;
  
  
  entraDados(&p, &i, &n);
  calcula(p, i, n, &f);
  saidaDados(f);
  
  
  
  return 0;
}

