# Chess Movements Simulator

Este repositório contém o programa `xadrez.c`, que simula movimentos de peças de xadrez (Torre, Bispo, Rainha e Cavalo) usando recursividade e loops complexos.

## Pré-requisitos

* GCC instalado (pacote `build-essential` no Ubuntu)
* `make` (opcional)

## Como compilar

### Usando GCC direto

```bash
gcc -std=c11 -Wall -Wextra -o xadrez xadrez.c
```

### Usando Makefile

Se desejar, crie um arquivo `Makefile` com:

```makefile
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra

all: xadrez

xadrez: xadrez.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f xadrez
```

E então execute:

```bash
make        # Compila o executável 'xadrez'
make clean  # Remove o binário
```

## Como executar

No diretório contendo o executável:

```bash
./xadrez
```

## Saída esperada

Com a variável `moves` definida como `3` (valor padrão em `main()`), o programa deve imprimir:

```text
Movimento da Torre:

Direita
Direita
Direita

Movimento do Bispo:

Cima
Direita
Cima
Direita
Cima
Direita

Movimento da Rainha:

Direita
Cima
Direita
Direita
Cima
Direita
Direita
Cima
Direita

Movimento do Cavalo:

Cima
Cima
Direita
```

Cada seção está separada por uma linha em branco para melhor legibilidade.
