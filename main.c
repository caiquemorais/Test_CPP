#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
  int V[2];
  int p;

   for(int i=0 ;i<10;i++){
    V[i]=i;
  }
  for(int i=0 ;i<9;i++){
    V[i]=(V[(i+1)]);
    printf("%d\n",V[i]);
  }

}

//}




/*int n=4;

int dist (int q,int i,int v[][n]){
int u=sqrt(pow((v[0][i]-v[0][q]),2)+ pow((v[1][i]-v[1][q]),2));
return(u);
}
int func(int q,int c,int t[],int v[]){
int min = 9999;
int k,e,a,pmin;
    for (int i=0;i<n;i++){
        t[c]=i;
        for (k=c;k<n;k++){
            int e=1;
            if (t[k]==i){
            e=0;
            }}

            if (e=1)
            a = dist(q,i,v);
            if(min>a){
            min = a;
            int pmin = i;
            }
        }
    return(dist(pmin,q,v));
        }


 int main(){
int v[2][5] = {{0,1,1,1,0},{1,1,0,-1,-1}};
int t[n];
int  x=func(4,0,t,v);

printf("%d ",x);


}












   /* int v[2][5] = {{1,2,3,4,5},{1,2,3,4,5}};
    int i,j;
    int n = 5;
    int M[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            M[j][i]=9;
        }
        }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            M[j][i]=sqrt(pow((v[0][i]-v[0][j]),2)+ pow((v[1][i]-v[1][j]),2));

        }
        }


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("%d%d ",i,j);
        }
        printf("\n");
}
  /*int n = 10;
  int i, j, min, temp;
  for(i = 0;  i<(n-1);  i++){
    min = i;
    for(j = (i+1);  j<n;  j++){ // Procura por valores menores que o valor atual
       if( v[j] < v[min] ){
           min = j; // Atualiza índice que contém valor mínimo
       }}
    //printf("%d\n",min);

    if( v[i] > v[min] ){ // Verifica se os números não são iguais
       temp = v[i]; // Armazena valor em variável auxiliar
       v[i] = v[min]; // Swap de números
       v[min] = temp;
       //printf("%d\n",j);

     }}
for(i = 0;  i<10;  i++){
printf("%d\n",v[i]);*/
//}



