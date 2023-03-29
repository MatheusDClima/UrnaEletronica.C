#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  int main()
{
    setlocale(LC_ALL, "Portuguese");



  int idade, alfabetizado, titulo, usuario;
  int v=6, cont=0, c1=0, c2=0, vb=0, vn=0;

  printf("Informe sua idade: ");
  scanf("%d", &idade);
  if(idade >= 16 && idade < 18) {
    printf("\nVoto não obrigatório!\n\n");

  }

  if(idade >= 18 && idade <= 70) {
        printf("\nApto a votar!\n\n");
  }

  printf("Você é alfabetizado? \nTecle 1 para 'sim' ou \ntecle 2 para 'não': ");
  scanf("%d", &alfabetizado);


  if(alfabetizado == 1){
    printf("\nSim \n\n");
  }
  if(alfabetizado == 2) {
    printf("\nVoto não obrigatório! \n\n");
  }
  printf("Informe o numero do titulo: ");
  scanf("%d", &titulo);

  printf("\ninforme o número de usuario: ");
  scanf("%d", &usuario);

  if(usuario == 1)
  {
      printf("\nCamille Rodrigues\n");
  }
  if(usuario == 2)
  {
      printf("\nThiago Henrique\n");
  }
  if(usuario == 3)
  {
      printf("\nAlessandra Dias\n");
  }
  if(usuario == 4)
  {
      printf("\nAfranio Ribeiro\n");
  }
  if(usuario == 5)
  {
      printf("\nCélia Maria\n");
  }
  if(usuario == 6)
  {
      printf("\nUlisses Dias\n");
  }

  printf("\nBEM VINDO! INICIE AS VOTAÇÕES!");


   while(cont<=6)
  {
      printf("\n\n 1010 - Gustavo Lima\n 2020 - Neymar\n 3  -   voto em branco\n 4  -   Voto nulo\n");
      printf("Digite o número corresponente ao seu voto e aperte ENTER: ");
      scanf("%d", &v);
      system("cls");

      switch(v)
      {

          case 1010: {
               c1 = c1+1;
               printf("Gustavo Lima - Voto registrado! Obrigado!");
               system("cls");
               system("pause");
               printf("\nInforme o número de usuário: \n");
               scanf("%d", &usuario);

  if(usuario == 1)
  {
      printf("\nCamille Rodrigues\n");
  }
  if(usuario == 2)
  {
      printf("\nThiago Henrique\n");
  }
  if(usuario == 3)
  {
      printf("\nAlessandra Dias\n");
  }
  if(usuario == 4)
  {
      printf("\nAfranio Ribeiro\n");
  }
  if(usuario == 5)
  {
      printf("\nCélia Maria\n");
  }
  if(usuario == 6)
  {
      printf("\nUlisses Dias\n");
  }
               break;
               }

               case 2020: {
               c2 = c2+1;
               printf("Neymar - Voto registrado! Obrigado!");
               system("cls");
               system("pause");
               printf("\nInforme o número de usuário: \n");
               scanf("%d", &usuario);
               if(usuario == 1)
  {
      printf("\nCamille Rodrigues\n");
  }
  if(usuario == 2)
  {
      printf("\nThiago Henrique\n");
  }
  if(usuario == 3)
  {
      printf("\nAlessandra Dias\n");
  }
  if(usuario == 4)
  {
      printf("\nAfranio Ribeiro\n");
  }
  if(usuario == 5)
  {
      printf("\nCélia Maria\n");
  }
  if(usuario == 6)
  {
      printf("\nUlisses Dias\n");
  }
               break;
               }

               case 3: {
               vb = vb+1;
               printf("Voto em branco registrado! Obrigado!");
               system("cls");
               system("pause");
               printf("\nInforme o número de usuário: \n");
               scanf("%d", &usuario);
               if(usuario == 1)
  {
      printf("\nCamille Rodrigues\n");
  }
  if(usuario == 2)
  {
      printf("\nThiago Henrique\n");
  }
  if(usuario == 3)
  {
      printf("\nAlessandra Dias\n");
  }
  if(usuario == 4)
  {
      printf("\nAfranio Ribeiro\n");
  }
  if(usuario == 5)
  {
      printf("\nCélia Maria\n");
  }
  if(usuario == 6)
  {
      printf("\nUlisses Dias\n");
  }
               break;
               }


                case 4: {
                vn = vn+1;
                printf("Voto nulo registrado! Obrigado!");
                system("cls");
                system("pause");
                break;
               }
                default: ///caso o usuário digitar um valor inexistente dentre
                //as nossas opções
                printf("**** Opção inválida! ****");


      }
   cont=cont+1;
  }


printf("\nRESULTADOS:\n Gustavo Lima\t %i\n Neymar\t %i\n Voto em branco\t %i\n Voto nulo\t %i\n", c1, c2, vb, vn);
 if(c1 > c2) {
                printf(" \n**** GUSTAVO LIMA É O CANDIDATO VENCEDOR! ****");
               }
 if(c2 > c1) {
    printf(" \n***** NEYMAR É O CANDIDATO VENCEDOR! **** ");
 }


  getchar();
  printf("\n\n");
  return(0);
}