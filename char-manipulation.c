#include <stdio.h>

/* READING AND WRITING CHARS
   int main()
   {
      char c = getchar();
      putchar(c);
   }
*/

/*
int main()
{
   int c;
   // BUFFER IS EMPTY
   c = getchar();
   // BUFFER HAS 'A-G-N-E-S-\n'
   putchar(c);
   // BUFFER HAS 'A-G-N-E-S-\n'
   c = getchar();
   // BUFFER HAS 'G-N-E-S-\n'
   putchar(c);
   // BUFFER HAS 'G-N-E-S-\n'
   c = getchar();
   // BUFFER HAS 'N-E-S-\n'
   putchar(c);
   // BUFFER HAS 'N-E-S-\n'
   c = getchar();
   // BUFFER HAS 'E-S-\n'
   putchar(c);
   // BUFFER HAS 'E-S-\n'
   c = getchar();
   // BUFFER HAS 'S-\n'
   putchar(c);
   // BUFFER HAS 'S-\n'
   c = getchar();
   // BUFFER HAS '\n'
   
   c = getchar();
   putchar(c);
   c = getchar();
   putchar(c);
   c = getchar();
   putchar(c);
   c = getchar();
   putchar(c);
   c = getchar();
   putchar(c);
}
*/

/*
   // Contar caracteres - LONG/INT
   int main() {
      long charcounter;
      charcounter = 0;
      while (getchar() != '\n') {
         ++charcounter;
      }

      printf("Existem %ld caracteres nessa sentenca", charcounter);
   }
*/

/*
   // Contar caracteres - DOUBLE
   int main() {
      double charcounter;
      for (charcounter = 0; getchar() != '\n'; ++charcounter);
      printf("Existem %.0f caracteres nessa sentenca", charcounter);
   }
*/

/*
   // Contar linhas
   // Anotacoes: "" e '' sao diferentes em C, '' e um pequeno integer que represente o valor numero de caracteres = character constant A = 65 e é melhor escrever A do que 65. "" e uma string constant 
   int main() {
      int c, linecounter;
      linecounter = 0;
      while ((c = getchar()) != EOF) {
         if (c == '\n') {
            ++linecounter;
         }
      }
      printf("Existem %d linhas", linecounter);
   }
*/

/*
   // Exercicio 1-8: contador de blanks, tabs e newlines
   // Annotations: nao e possivel fazer multiple variable set
   int main() {
      int c, newlinecounter = 0, tabcounter = 0, blankcounter = 0;
      while ((c = getchar()) != EOF) {
         if (c == '\n') {
            ++newlinecounter;
         } else if (c == '\t') {
            ++tabcounter;
         } else if (c == ' ') {
            ++blankcounter;
         }
      }
      printf("Quantidade de \\n: %d\nQuantidade de \\t: %d\nQuantidade de ' ': %d", newlinecounter, tabcounter, blankcounter);
   }
*/

/*
   // Exercicio 1-9: Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank
   // Annotations: blank e um espaco em branco ' ' e nao "\n"
   int main() {
      int c, blankcounter = 0;
      while ((c = getchar()) != EOF) { // Enquanto o programa nao for encerrado, pega-se o caractere do string buffer do input
         if (c == ' ') {   // Se o caractere for blank, ' '
            while ((c = getchar()) == ' ') {}; // Um laco WHILE pega o proximo caractere do string buffer e compara se ele e blank e faz isso ate que nao seja mais um caractere vazio
            putchar(' ');  // Substitui-se os caracteres blank por apenas um caractere blank
         }
         putchar(c); // Por fim, printa aquele proximo caractere do laco WHILE
      };
   }
*/

/*
   // Exercicio 1-10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
   // Annotations: o exercicio queria que nos exibissemos cada tab por um simbolo que representasse, e depois de apresentar o simbolo, ele era de fato printado

   int main() {
      int c;
      while ((c = getchar()) != EOF) {
         if (c == '\t') {
            putchar('\\');
            putchar('t');
         } else if (c == '\b') {
            putchar('\\');
            putchar('b');
         } else if (c == '\\') {
            putchar('\\');
         }
         putchar(c);
      }
   }
*/

