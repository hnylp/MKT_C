#include <stdio.h>

struct Produto
{
    char nome[20];
    float preco;
    int quantidade;
};

int main()
{
    struct Produto arroz;

    sprintf(arroz.nome, "arroz");
    arroz.preco = 3.23;
    arroz.quantidade = 10;

    struct Produto feijao;

    sprintf(feijao.nome, "feijão");
    feijao.preco = 5.52;
    feijao.quantidade = 20;

    printf("O preço é R$: %.2f\n", feijao.preco);
    
    return 0;


}