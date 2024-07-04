# exerciciosC


---------Exercicio 07= 29/05
Escreva um programa em C para resolver os problemas da Intersecção e da União de conjuntos, conforme descrito no Exercício 5 da Lista de Exercícios "Variáveis Compostas Homogêneas - Vetores e Matrizes".

Seu programa deve operar com três conjuntos A, B e C de números inteiros não negativos, não ordenados, tal que cada conjunto tem até 8 elementos e que, dentro de cada conjunto, não há elementos repetidos. Cada linha da entrada contém os números que compõem A, B e C, nessa ordem. Cada conjunto é encerrado pelo número '-1'. A entrada é encerrada pelo número -2. 

A saída deve ser a sequência de números que compõem o conjunto correspondente à intersecção entre os conjuntos A, B e C, apresentando os elementos na mesma ordem em que eles são apresentados no conjunto A. Além da sequência de números que compõem o conjunto intersecção, seu programa deve computar e exibir a sequência de números que compõem o conjunto correspondente à União entre os conjuntos A, B e C, apresentando primeiro os elementos do conjunto A (na mesma ordem em que eles são apresentados no conjunto A), seguidos pelos elementos que pertencem ao conjunto B, mas não ao conjunto A (na mesma ordem em que eles são apresentados no conjunto B) e, por fim, os elementos que pertencem ao conjunto C, mas não aos conjuntos A e B (na mesma ordem em que eles são apresentados no conjunto C).

Exemplo de entrada:

1 2 3 4 5 -1 2 3 4 -1 1 2 5 -1
1 2 3 -1 2 3 4 -1 1 2 3 -1
-2

Exemplo de saída: 

2
1 2 3 4 5
2 3
1234