EX 1 -

int main(void){

int i,j;
int matriz[5][5];

    //Criacao da matriz
    for(i= 0 ; i < 5 ;i++){
        for(j=0; j< 5 ;j ++){
            if(i == j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0 ;
            }
        }
    }
     //Print da matriz
     for(i= 0 ; i < 5 ;i++){
        for(j=0; j< 5 ;j ++){
            printf("%d ", matriz[i][j]);
        }
            printf("\n");
     }

return 0;
}


EX 2- 
int main (void){

int mat[4][3];
int i,j,num;

    //Montar a matriz
    printf("Digite os valores da matriz 4x3:\n");
    for(i = 0; i < 4 ; i++ ){
        for(j = 0 ; j < 3 ; j++){
          scanf("\n%d", &mat[i][j]);
        }
    }
    //Valor a ser avaliado na matriz
    printf("Digite um valor: ");
    scanf("%d",&num);

    // verificador de posição
     printf("A posicao que o %d apareceu : ", num);



     for(i = 0; i < 4 ; i++ ){
        for(j = 0 ; j < 3 ; j++){
        if(mat[i][j]== num){
            printf("%d , %d ", i,j);
            }
         }
     }
return 0;
}


EX 3- 
int main (void){

int mat[2][5];
int i,j,num;

    //Montar a matriz
    printf("Digite os valores da matriz 2x5:\n");
     for(i = 0; i < 2 ; i++ ){
        for(j = 0 ; j < 5 ; j++){
          scanf("\n%d", &mat[i][j]);
        }
    }
    //verificador de numeros pares e print dos mesmos
    printf("Os elementos pares da matris sao: \n");
     for(i = 0; i < 2 ; i++ ){
        for(j = 0 ; j < 5 ; j++){
        if(mat[i][j] % 2 == 0){
            printf("%d ", mat[i][j]);
            }
         }
     }
return 0;
}

EX 4 - 
int main (void){

int mat[15][15];
int i,j,soma = 0 ;

    //Montar a matriz
    printf("Digite os valores da matriz 15x15:\n");
     for(i = 0; i < 15 ; i++ ){
        for(j = 0 ; j < 15 ; j++){
          scanf("\n%d", &mat[i][j]);
        }
    }
    //verificador de numeros pares da diagonal principal
   
     for(i = 0; i < 15 ; i++ ){
       if(mat[i][i] % 2 == 0){
           soma += mat[i][i];
            }
         }
        //Print dos numero pares da diagonal principal da matriz
    printf("O somatorio dos numero pares da diagonal principal e : %d ", soma);


return 0;
}

EX 5 - 

int main (void){

int mat[5][5];
int i,j,soma = 0 ;

    //Montar a matriz
    printf("Digite os valores da matriz 5x5:\n");
     for(i = 0; i < 5 ; i++ ){
        for(j = 0 ; j < 5 ; j++){
          scanf("\n%d", &mat[i][j]);
        }
     }


   soma = mat[0][0] + mat[2][2] + mat[4][4];



        //Print dos numero pares da diagonal principal da matriz
    printf("O somatorio dos numero nas posicoes impares da matriz : %d ", soma);


return 0;
}

EX 6 -
int main (void){

int mat[5][5];
int mat2[5][5];
int i,j ;

    //Montar a matriz
    printf("Digite valores para a matriz A 5x5:\n");
     for(i = 0; i < 5 ; i++ ){
        for(j = 0 ; j < 5 ; j++){
          scanf("\n%d", &mat[i][j]);
        }
     }
     
     //Montagem damatriz B
     for(i = 0; i < 5 ; i++ ){
        for(j = 0 ; j < 5 ; j++){
      if( i == j ){
        mat2[i][j] = mat[i][j] * 3;
            }else{
        mat2[i][j] = mat[i][j] * 2;
            }
        }
    }
      //print da matriz B
      printf("Matriz B criada a partir da matriz A :\n");
      for(i = 0; i < 5 ; i++ ){
        for(j = 0 ; j < 5 ; j++){
        printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

return 0;
}

EX 7- 
int main (void){

int mat[2][3];
int mat2[3][2];
int i,j ;

    //Montar a matriz A
    printf("Digite valores para a matriz A 2x3:\n");
     for(i = 0; i < 2 ; i++ ){
        for(j = 0 ; j < 3 ; j++){
          scanf("\n%d", &mat[i][j]);
        }
     }

     //Montagem damatriz B
     for(i = 0; i < 2 ; i++ ){
        for(j = 0 ; j < 3 ; j++){
     mat2[j][i] = mat[i][j];

        }
    }
      //print da matriz B
      printf("Matriz B criada a partir da matriz A :\n");
      for(i = 0; i < 3 ; i++ ){
        for(j = 0 ; j < 2 ; j++){
        printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

return 0;
}



