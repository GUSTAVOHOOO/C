
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MaxVet 51

  // Estrutura Produtos
  typedef struct { //struct de produtos
        char nome_produto[20];
        float valor_compra;
        float valor_venda;
        float lucro;
        int numero_venda;

    }Produtos;


// Funcao Tamanho CMD
void tamanho_tela(int largura , int altura){

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT janela_tamanho;
    COORD tamanho_buffer;

    tamanho_buffer.X = largura;
    tamanho_buffer.Y = altura;
    SetConsoleScreenBufferSize(console, tamanho_buffer);


    janela_tamanho.Top = 0 ;
    janela_tamanho.Left = 0 ;
    janela_tamanho.Right = largura - 1;
    janela_tamanho.Bottom = altura - 1;
    SetConsoleWindowInfo(console, TRUE, &janela_tamanho);
}




// Funcao Cabecalho
void printHeader(const char* title) {
    system("color 0A");  //Fundo preto com caracter verde
    printf("\n========================================\n");
    printf("  %s\n", title);
    printf("========================================\n");
setlocale(LC_ALL, "Portuguese_Brazil.1252");
}



int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    printHeader("Controle de Estoque e Relatório");
    tamanho_tela(100,40);




//declaração de variaveis
Produtos produtos[MaxVet];
int n;
int i;
int j;

printf("digite a quantidade de produtos que voce deseja cadastrar: ");
    scanf("%d",&n);

for(i=0;i<n;i++){ //loop para receber as informações sobre o produto
    printf("Digite o nome do produto %d : ",i+1);
        scanf("%19s",produtos[i].nome_produto);
    printf("Digite o valor da compra do: ");
        scanf("%f",&produtos[i].valor_compra);
    printf("Digite o valor de venda do produto: ");
        scanf("%f",&produtos[i].valor_venda);
    printf("Digite o numero de vendas do produto: ");
        scanf("%d",&produtos[i].numero_venda);

    produtos[i].lucro=(produtos[i].valor_venda - produtos[i].valor_compra);
}

int maior_lucro = 0;


for(i=0;i<n;i++){

    if(produtos[i].lucro>produtos[maior_lucro].lucro){
        maior_lucro=i;
    }
}

    Produtos temp;
    for(i = 0 ; i<n -1 ; i++){
        for(j= i + 1 ; j < n; j++){
            if(produtos[j].lucro<produtos[i].lucro){
                 temp = produtos[i];
                produtos[i] = produtos[j];
                produtos[j] = temp;
            }
        }
    }

int maior_vendas = 0;
int menor_venda = 0;

    for(i=0;i<n;i++){


        if(produtos[i].numero_venda > produtos[maior_vendas].numero_venda){
            maior_vendas=i;
    }
   if(produtos[i].numero_venda < produtos[menor_venda].numero_venda){
        menor_venda=i;
        }
     }

     system("cls");

    printf("\no maior lucro obtido foi: %.2f\n",produtos[maior_lucro].lucro);
    printf("\no produto com o maior lucro foi o %s\n",produtos[maior_lucro].nome_produto);



    printf("\no produto com o maior numero de vendas foi %s \n",produtos[maior_vendas].nome_produto);
    printf("\nQue foi %d\n",produtos[maior_vendas].numero_venda);

    printf("\no produto com o menor numero de vendas foi %s \n",produtos[menor_venda].nome_produto);
    printf("\nQue foi %d\n",produtos[menor_venda].numero_venda);


   return 0;

}
