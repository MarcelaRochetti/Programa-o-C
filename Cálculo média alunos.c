#include <stdio.h>

int main () {
char aluno1[50];
float nota1, nota2, nota3, media;

//média aluno 1;
printf ("Entre com o nome do primeiro aluno\n");
scanf ("%s", aluno1);

//pedir entrada da nota 1 e mostrar nota;

printf ("Insira a nota da primeira avaliação do aluno 1: \n");
scanf ("%f", &nota1);


//pedir entrada da nota 2 e mostrar nota;

printf ("Insira a nota da segunda avaliação do aluno 1: \n");
scanf ("%f", &nota2);

// pedir entrada da nota 3 e mostrar nota;

printf ("Insira a nota da terceira avaliação do aluno 1: \n");
scanf ("%f", &nota3);


//media das notas;


media = (nota1 + nota2 + nota3) / 3; 

printf ("Nome: %s\n", aluno1);
printf ("Nota na primeira avaliação foi: %.2f\n", nota1);
printf ("Nota na segunda avaliação foi: %.2f\n", nota2);
printf ("Nota na terceira avaliação foi: %.2f\n", nota3);
printf ("A média das notas é: %.2f\n", media);
return 0; 

}
