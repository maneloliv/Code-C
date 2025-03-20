#include <stdio.h>

struct Conta {
    char nomeCliente[50];
    float saldo;
};

void atualizarSaldo(struct Conta* conta, char operacao, float valor) {
    if (operacao == 'D') {
        conta->saldo -= valor;
    } else if (operacao == 'C') {
        conta->saldo += valor;
    }
}

int main() {
    struct Conta conta;
    char operacao;
    float valor;

    printf("Digite o nome do cliente: ");
    scanf("%s", conta.nomeCliente);

    printf("Digite o saldo inicial: ");
    scanf("%f", &conta.saldo);

    do {
        printf("Digite o tipo de operação (D para débito, C para crédito, S para sair): ");
        scanf(" %c", &operacao);

        if (operacao != 'S') {
            printf("Digite o valor: ");
            scanf("%f", &valor);
            atualizarSaldo(&conta, operacao, valor);
        }
    } while (operacao != 'S');

    printf("Saldo atual da conta: %.2f\n", conta.saldo);

    return 0;
}