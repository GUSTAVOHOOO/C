#include <stdlib.h>
#include <stdio.h>


int main(){


    char str1[30];
    int  ask[255]={0};
    int fim[30];


    printf("Digite uma palavra: ");
    gets(str1);


        int i = 0;
        for( i = 0 ; str1[i] != '\0'; i++){
            for(int j = 0 ; j != 255; j++){
                if(str1[i] == j ){
                    ask[j]++;
                }
            }
        }

          for(int a = 'A'; a <= 'Z'; a++){
            if(ask[a]!= 0){
                ask[a+32] += ask[a];
            }
        }



        int aux = 0;
        for(int j = 0 ; j != 255; j++){
            if(ask[j] >= aux && ask[j] != 0 ){
                fim[0] = j;
                aux = ask[j];
            }
        }


        int k = 1;
        for( int j = 0; j != 255; j++){
            if(ask[j] == aux && j != fim[0]){
                fim[k] = j;
                k++;
            }
        }


        printf("A palavra digitada possui %d letras , as letras que se repetem sao:  ",i);
        for(int r = 0 ; r < k ; r++){
            if(r != k - 1){
            printf("%c ,", fim[r]);
            }else{
            printf(" %c.", fim[r]);

            }
        }








return 0;


}
