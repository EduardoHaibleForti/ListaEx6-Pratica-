#include <stdio.h>
#include <stdlib.h>

int main (){
    int a,b,c,d,e,f,g,h,i;
    int X1,X2,R1,R2,P,Q;

    printf("Digite os 9 digitos do CPF (sem os digitos verificadores):");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);

    X1=10*a+9*b+8*c+7*d+6*e+5*f+4*g+3*h+2*i;
    R1=X1%11;

    if(R1<2){
        P=0;
    }else{
    P=11-R1;
    }
    X2=11*a+10*b+9*c+8*d+7*e+6*f+5*g+4*h+3*i+2*P;
    R2=X2%11;

    if(R2<2){
        Q=0;
    }else{
    Q=11-R2;
    }

    printf("Os digitos verificadores do CPF: %d%d",P,Q);
    return 0;
}
