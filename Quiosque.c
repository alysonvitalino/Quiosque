#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{


        setlocale(LC_ALL, "Portuguese");

        char nomedocliente[100];
        int escolhamenuprincipal, escolhabebida, escolhaingrediente, escolhaprontos;
        int quantidade1, quantidade2, quantidade3, quantidade4, quantidade5, quantidade6, quantidade7, quantidade8, tamanho1, contador1;
        int quantidadebebida1, quantidadebebida2, quantidadebebida3, quantidadebebida4, quantidadebebida5, quantidadebebida6, quantidadebebida7, quantidadebebida8, quantidadebebida9;
        int repeat1, formadepagamento;
        int lanche1, lanche2, lanche3, lanche4, lanche5, lanche6, lanche7, lanche8;
        int bebida1, bebida2, bebida3, bebida4, bebida5, bebida6, bebida7, bebida8, bebida9;
        int montado1, montado2, montado3;
        float parcialmontado1, parcialmontado2, parcialmontado3;
        float unidade1=0, parcial1=0, total1=0;
        int contador2;


        //MENU INICIAL, PERGUNTA AO CLIENTE SE ELE QUER LANCHES PR� MONTADOS, MONTAR UM LANCHE OU ESCOLHER UMA BEBIDA.
        printf("-------------Bem Vindo a 'HOT DOG HOJE?'------------\n");
        printf("---------------------------------------------------\n");
        printf("Digite o nome do cliente:\n");
            scanf("%[^\n]", &nomedocliente);
            system("cls");
        printf("-------------Bem Vindo a 'HOT DOG HOJE?'------------\n");
        printf("---------------------------------------------------\n");
        printf("Digite (1) para abrir o cardapio de lanches prontos.\n");
        printf("Digite (2) para montar o seu proprio lanche.\n");
        printf("Digite (3) para abri o menu de bebidas.\n");

        //RECEBE A RESPOSTA DO CLIENTE
        scanf("%d", &escolhamenuprincipal);

        //SWITHC PARA O MENU PRINCIPAL
        switch(escolhamenuprincipal)
        {

        //CASE PARA LANCHES PRONTOS
        case 1:
        prontos1:
            system("cls");
            do
        {



        //CARDAPIO DE LANCHES PRONTOS, ATRIBUI UM NUMERO A CADA LANCHE E SEU RESPECTIVO VALOR
        //TAMB�M MOSTRA O ATALHO PARA O MENU DE MONTAGEM DE LANCHES E PARA O MENU DE BEBIDAS
        printf("Cardapio de lanches prontos:\n");

            printf("(1) Tradicional Simples - R$ 16,00\n");
            printf("(2) Tradicional Simples com duas vinas - R$ 18,00\n");
            printf("(3) Tradicional com Bacon - R$ 25,00\n");
            printf("(4) Tradicional com Calabresa - R$ 24,00\n");
            printf("(5) Tradicional com Frango - R$ 24,00\n");
            printf("(6) Tradicional Vegano  - R$ 28,00\n");
            printf("(7) Tradicional com Lombinho  - R$ 24,00\n");
            printf("(8) Tradicional Extra Carne - R$ 36,00\n");
            printf("Digite 9 para ser direcionado ao menu de montagem de lanches.\n");
            printf("Digite 10 para ser direcionado ao menu de bebidas.\n");

        //PERGUNTA PARA O CLIENTE O NUMERO DO LANCHE:
        printf("Digite o numero do lanche desejado:\n");
        //RECEBE A RESPOSTA DO CLIENTE
        scanf("%d", &escolhaprontos);


                //CASO O CLIENTE DIGITE 9 O GOTO LEVA ELE PARA O MENU DE MONTAGEM
                if(escolhaprontos==9)
                {
                    goto montagem1;
                }
                //CASO O CLIENTE DIGITE 9 O GOTO LEVA ELE PARA O MENU DE BEBIDAS
                if(escolhaprontos==10)
                {
                    goto bebidas1;
                }

        //LIMPA A TELA ASSIM QUE O CLIENTE DIGITAR O NUMERO
        system("cls");

        //SWITCH PARA OS LANCHES PRONTOS
        switch(escolhaprontos)
        {

        //PRIMEIRO LANCHE

        case 1:

            //APRESENTA O LANCHE SELECIONADO, INGREDIENTES E VALOR UNITARIO DO LANCHE
            printf("Voce selecionou o Lanche Tradicional Simples.\n");
            printf("Ingredientes: P�o, uma vina, tomate, milho, cebola, maionese, mostarda , ketchup.\n");
            printf("Pre�o: R$ 16,00\n");

            //PERGUNTA A QUANTIDADE DE LANCHES
            printf("Digite a quantidade de lanches:\n");
            //RECEBE A RESPOSTA REFERENTE A QUANTIDADE DE LANCHES
            scanf("%d", &quantidade1);

            //VARIAVEL QUE RECEBE O PRE�O DO LANCHE, MULTIPLICA A QUANTIDADE DE LANCHES PELO PRE�O UNITARIO E SOMA NO VALOR TOTAL DA COMPRA
            unidade1=16;
            parcial1=unidade1*quantidade1;
            total1+=parcial1;
            lanche1=1;

            //PERGUNTA SE O CLIENTE DESEJA ADICIONAR OUTRO LANCHE
            printf("Voc� deseja adicionar outro lanche? (1)SIM (2)N�O\n");
                scanf("%d", &repeat1);

            break;


        case 2:

            printf("Voce selecionou o Lanche Tradicional com duas vinas.\n");
            printf("Ingredientes: P�o, duas vinas, tomate, milho, cebola, maionese, mostarda , ketchup.\n");
            printf("Pre�o: R$ 18,00\n");
            printf("Digite a quantidade de lanches:\n");

            scanf("%d", &quantidade2);

            unidade1=18;
            parcial1=unidade1*quantidade2;
            total1+=parcial1;
            lanche2=1;

            printf("Voc� deseja adicionar outro lanche? (1)SIM (2)N�O\n");
                scanf("%d", &repeat1);

            break;


        case 3:

            printf("Voce selecionou o Lanche Tradicional com bacon.\n");
            printf("Ingredientes: P�o, duas vinas, bacon, batata palha, tomate, milho, cebola, farofa, maionese, mostarda, ketchup.\n");
            printf("Pre�o: R$ 25,00\n");
            printf("Digite a quantidade de lanches:\n");

            scanf("%d", &quantidade3);

            unidade1=25;
            parcial1=unidade1*quantidade3;
            total1+=parcial1;
            lanche3=1;

            printf("Voc� deseja adicionar outro lanche? (1)SIM (2)N�O\n");
                scanf("%d", &repeat1);

            break;


        case 4:

            printf("Voce selecionou o Lanche Tradicional com calabresa.\n");
            printf("Ingredientes: P�o, duas vinas, calabresa, batata palha, tomate, milho, cebola, farofa, maionese, mostarda, ketchup.\n");
            printf("Pre�o: R$ 25,00\n");
            printf("Digite a quantidade de lanches:\n");

            scanf("%d", &quantidade4);

            unidade1=24;
            parcial1=unidade1*quantidade4;
            total1+=parcial1;
            lanche4=1;

            printf("Voc� deseja adicionar outro lanche? (1)SIM (2)N�O\n");
                scanf("%d", &repeat1);

            break;


        case 5:

            printf("Voce selecionou o Lanche Tradicional com Frango.\n");
            printf("Ingredientes: P�o, duas vinas, frango, batata palha, tomate, milho, cebola, farofa, maionese, mostarda, ketchup.\n");
            printf("Pre�o: R$ 25,00\n");
            printf("Digite a quantidade de lanches:\n");

            scanf("%d", &quantidade5);

            unidade1=24;
            parcial1=unidade1*quantidade5;
            total1+=parcial1;
            lanche5=1;

            printf("Voc� deseja adicionar outro lanche? (1)SIM (2)N�O\n");
                scanf("%d", &repeat1);

            break;


        case 6:

            printf("Voce selecionou o Lanche Tradicional Vegano.\n");
            printf("Ingredientes: P�o, duas vinas veganas, batata palha, tomate, milho, farofa, cebola, mostarda, ketchup.\n");
            printf("Pre�o: R$ 28,00\n");
            printf("Digite a quantidade de lanches:\n");

            scanf("%d", &quantidade6);

            unidade1=28;
            parcial1=unidade1*quantidade6;
            total1+=parcial1;
            lanche6=1;

            printf("Voc� deseja adicionar outro lanche? (1)SIM (2)N�O\n");
                scanf("%d", &repeat1);

            break;


        case 7:

            printf("Voce selecionou o Lanche Tradicional com Lombinho.\n");
            printf("Ingredientes: P�o, duas vinas, lombinho, batata palha, tomate, milho, cebola, farofa, maionese, mostarda, ketchup.\n");
            printf("Pre�o: R$ 24,00\n");
            printf("Digite a quantidade de lanches:\n");

            scanf("%d", &quantidade7);

            unidade1=24;
            parcial1=unidade1*quantidade7;
            total1+=parcial1;
            lanche7=1;

            printf("Voc� deseja adicionar outro lanche? (1)SIM (2)N�O\n");
                scanf("%d", &repeat1);

            break;


        case 8:

            printf("Voce selecionou o Lanche Tradicional Extra Carne.\n");
            printf("Ingredientes: P�o, duas vinas, bacon, calabresa, presunto, batata palha, tomate, milho, cebola, farofa, maionese, mostarda, ketchup.\n");
            printf("Pre�o: R$ 36,00\n");
            printf("Digite a quantidade de lanches:\n");

            scanf("%d", &quantidade8);

            unidade1=36;
            parcial1=unidade1*quantidade8;
            total1+=parcial1;
            lanche8=1;

            printf("Voc� deseja adicionar outro lanche? (1)SIM (2)N�O\n");
                scanf("%d", &repeat1);

            break;

        //CASO O CLIENTE N�O SELECIONE UMA OP��O V�LIDA, RECEBE UMA NOTIFICA��O E O PROCESSO SE REPETE.
        default:

            printf("Op��o Inv�lida!\nTente novamente!\n");

        }

        //REPETE O LOOP AT� QUE O CLIENTE DIGITE 2
        }while(repeat1!=2);

        //AP�S FINALIZAR A SELE��O DE LANCHES PRONTOS VAI AUTOMATICAMENTE PARA O MENU DE BEBIDAS
        case 3:
        bebidas1:
            system("cls");

        //LA�O DE REPETI��O PARA ADICIONAR AS BEBIDAS (DO-WHILE)
        do
        {

            //PRINT ATRIBUINDO UM NUMERO A CADA BEBIDA E SEU RESPECTIVO VALOR
            printf("Cardapio de bebidas:\n");

        printf("(1) �gua Mineral - R$ 4,00\n");
        printf("(2) Suco Natural - R$ 8,00\n");
        printf("(3) Suco Natural na Jarra - R$ 18,00\n");
        printf("(4) Refrigerante Lata - R$ 7,00\n");
        printf("(5) Ch� Matte - R$ 7,00\n");
        printf("(6) Suco Del Vale - R$ 7,00\n");
        printf("(7) Refrigerante 600 mL - R$ 10,00\n");
        printf("(8) Refrigerante 1L - R$ 14,00\n");
        printf("(9) Refrigerante 2L - R$ 20,00\n");

        //PERGUNTA AO CLIENTE O ITEM QUE ELE QUER E ATRIBUI O NUMERO 10 PARA FINALIZA��O DA COMPRA
            printf("Digite o c�digo da bebida para realizar a compra:\n");
        printf("Digite (10) para finalizar a compra!\n");
            scanf("%d", &escolhabebida);


            //ESTRUTURA IF PARA CADA NUMERO ATRIBUIDO AS BEBIDAS
            if(escolhabebida==1)
            {

                //PERGUNTA QUANTAS UNIDADES DA BEBIDA SELECIONADA O CLIENTE VAI QUERER
                printf("Digite quantas unidades voc� deseja adicionar ao carrinho:\n");
                    scanf("%d", &quantidadebebida1);
                //ESTABELECE O PRE�O DA UNIDADE
                unidade1=4;
                //MULTIPLICA O PRE�O DA UNIDADE PELA QUANTIDADE ESCOLHIDA
                parcial1=unidade1*quantidadebebida1;
                //LIMPA A TELA
                system("cls");
                //CONFIRMA A BEBIDA ESCOLHIDA PARA O CLIENTE
                printf("Voc� adicionou %d Agua Mineral ao carrinho.\n",quantidadebebida1);
                //SOMA A MULTIPLICA��O AO PRE�O TOTAL DO CARRINHO
                total1+=parcial1;
                //PERGUNTA SE O CLIENTE GOSTARIA DE ADICIONAR OUTRA BEBIDA
                printf("Deseja adicionar outra bebida?\n");
                //ENQUANTO O CLIENTE N�O DIGITAR O VALOR 10 O LOOP DE REPETI��O CONTINUA FUNCIONANDO
                bebida1=1;
                //Atribui um valor a variavel bebida1 para a nota fiscal
            }
            if(escolhabebida==2)
            {

                printf("Digite quantas unidades voc� deseja adicionar ao carrinho:\n");
                    scanf("%d", &quantidadebebida2);
                unidade1=8;
                parcial1=unidade1*quantidadebebida2;
                total1+=parcial1;
                system("cls");
                printf("Voc� adicionou %d Suco Natural ao carrinho.\n",quantidadebebida2);
                printf("Deseja adicionar outra bebida?\n");
                bebida2=1;
            }
            if(escolhabebida==3)
            {

                printf("Digite quantas unidades voc� deseja adicionar ao carrinho:\n");
                    scanf("%d", &quantidadebebida3);
                unidade1=18;
                parcial1=unidade1*quantidadebebida3;
                total1+=parcial1;
                system("cls");
                printf("Voc� adicionou %d Suco Natural na Jarra ao carrinho.\n",quantidadebebida3);
                printf("Deseja adicionar outra bebida?\n");
                bebida3=1;
            }
            if(escolhabebida==4)
            {

                printf("Digite quantas unidades voc� deseja adicionar ao carrinho:\n");
                    scanf("%d", &quantidadebebida4);
                unidade1=7;
                parcial1=unidade1*quantidadebebida4;
                total1+=parcial1;
                system("cls");
                printf("Voc� adicionou %d Refrigerante Lata ao carrinho.\n",quantidadebebida4);
                printf("Deseja adicionar outra bebida?\n");
                bebida4=1;
            }
            if(escolhabebida==5)
            {

                printf("Digite quantas unidades voc� deseja adicionar ao carrinho:\n");
                    scanf("%d", &quantidadebebida5);
                unidade1=7;
                parcial1=unidade1*quantidadebebida5;
                total1+=parcial1;
                system("cls");
                printf("Voc� adicionou %d Ch� Matte ao carrinho.\n",quantidadebebida5);
                printf("Deseja adicionar outra bebida?\n");
                bebida5=1;
            }
            if(escolhabebida==6)
            {

                printf("Digite quantas unidades voc� deseja adicionar ao carrinho:\n");
                    scanf("%d", &quantidadebebida6);
                unidade1=7;
                parcial1=unidade1*quantidadebebida6;
                total1+=parcial1;
                system("cls");
                printf("Voc� adicionou %d Suco Del Valle ao carrinho.\n",quantidadebebida6);
                printf("Deseja adicionar outra bebida?\n");
                bebida6=1;
            }
            if(escolhabebida==7)
            {

                printf("Digite quantas unidades voc� deseja adicionar ao carrinho:\n");
                    scanf("%d", &quantidadebebida7);
                unidade1=10;
                parcial1=unidade1*quantidadebebida7;
                total1+=parcial1;
                system("cls");
                printf("Voc� adicionou %d Refrigerante 600ML ao carrinho.\n",quantidadebebida7);
                printf("Deseja adicionar outra bebida?\n");
                bebida7=1;
            }
            if(escolhabebida==8)
            {

                printf("Digite quantas unidades voc� deseja adicionar ao carrinho:\n");
                    scanf("%d", &quantidadebebida8);
                unidade1=14;
                parcial1=unidade1*quantidadebebida8;
                total1+=parcial1;
                system("cls");
                printf("Voc� adicionou %d Refrigerante 1L ao carrinho.\n",quantidadebebida8);
                printf("Deseja adicionar outra bebida?\n");
                bebida8=1;
            }
            if(escolhabebida==9)
            {

                printf("Digite quantas unidades voc� deseja adicionar ao carrinho:\n");
                    scanf("%d", &quantidadebebida9);
                unidade1=20;
                parcial1=unidade1*quantidadebebida9;
                total1+=parcial1;
                system("cls");
                printf("Voc� adicionou %d Refrigerante 2L ao carrinho.\n",quantidadebebida9);
                printf("Deseja adicionar outra bebida?\n");
                bebida9=1;
            }
            //SE O CLIENTE N�O ESCOLHER UMA OP��O V�LIDA, EMITE UM AVISO E REPETE A OPERA��O
if(escolhabebida!=1 && escolhabebida!=2 && escolhabebida!=3 && escolhabebida!=4 && escolhabebida!=5 && escolhabebida!=6 && escolhabebida!=7 && escolhabebida!=8 && escolhabebida!=9 && escolhabebida!=10)
            {
                system("cls");
                printf("Op��o Inv�lida!\nTente novamente.\n");
            }



        //PARA O LA�O DE REPETI��O QUANDO O CLIENTE DIGITA 10
        }while(escolhabebida!=10);



        goto cupomfiscal;
            break;


        //CASE PARA A MONTAGEM DE LANCHES PR�PRIOS
        case 2:
        montagem1:
            system("cls");

            printf("Monte seu lanche!\n");


            //LA�O DE REPETI��O PARA A MONTAGEM DE LANCHES
            do
            {

            //ATRIBUI VALORES AOS TAMANHOS DE P�ES E SEUS RESPECTIVOS PRE�OS
            printf("Selecione o tamanho do p�o:\n");
            printf("(1)Grande - R$ 12,00 \n(2)M�dio - R$ 8,00 \n(3)Pequeno - R$ 5,00\n");
            //ATRIBUI ATALHOS PARA OS MENUS DE LANCHES PRONTOS E BEBIDAS
            printf("Digite 4 para ser direcionado ao menu de lanches prontos.\n");
            printf("Digite 5 para ser direcionado ao menu de bebidas.\n");
            printf("Digite 6 para finalizar a compra.\n");

                //RECEBE A RESPOSTA DO CLIENTE
                scanf("%d", &tamanho1);

                //SE O CLIENTE N�O ESCOLHER UMA OP��O V�LIDA, EMITE UM AVISO E REPETE A OPERA��O
                if(tamanho1!=1 || tamanho1!=2 || tamanho1!=3 || tamanho1!=4 || tamanho1!=5 || tamanho1!=6)
                {
                    system("cls");
                    printf("Op��o Inv�lida!\nTente novamente.\n");
                }

                //CASO O CLIENTE RESPONDA 4 LEVA ELE PARA O MENU DE LANCHES PRONTOS
                if(tamanho1==4)
                {
                    goto prontos1;
                }
                //CASO O CLINETE RESPONDA 5 LEVA ELE PARA O MENU DE BEBIDAS
                if(tamanho1==5)
                {
                    goto bebidas1;
                }

                //CASO O CLIENTE RESPONDA 6 LEVA ELE PARA O CUPOM FISCAL
                if(tamanho1==6)
                {
                    goto cupomfiscal;
                }
                //SWITCH CASE PARA A MONTAGEM DOS LANCHES
                switch (tamanho1)
                {
                    //PRIMEIRO CASE (P�O GRANDE)
                    case 1:

                        //LIMPA A TELA AP�S A SELE��O DO TAMANHO DO P�O
                        system("cls");
                        //CONFIRMA A SELE��O DO CLIENTE
                        printf("Voc� selecionou o p�o grande.\n");
                        //ADICIONA O PRE�O DO P�O AO VALOR TOTAL DA COMPRA
                        total1+=12;
                        parcialmontado1+=12;
                        //ATRIBUI VALOR A VARIAVEL MONTADO1 PARA A NOTA FISCAL
                        montado1=1;
                        //APRESENTA PARA O CLIENTE O LIMITE DE INGREDIENTES PARA O TAMANHO DO P�O
                        printf("Voc� pode adicionar at� 8 ingredientes para o seu lanche!\n");

                        //LA�O DE REPETI��O PARA O CLIENTE SELECIONAR AT� 8 INGREDIENTS
                        for(contador1=0; contador1<8; contador1++)
                        {


                            //MENU DE INGREDIENTES DISPONIVEIS PARA A MONTAGEM DO LANCHE
                            //ATRIBUI UM NUMERO A CADA INGREDIENTE E SEU RESPECTIVO PRE�O
                            printf("Lista de Ingredientes:\n");
                            printf("(1) Vina - R$ 2,00\n");
                            printf("(2) Bacon - R$ 5,00\n");
                            printf("(3) Calabresa - R$ 4,00\n");
                            printf("(4) Frango - R$ 4,00\n");
                            printf("(5) Lombinho - R$ 4,00\n");
                            printf("(6) Presunto - R$ 3,00\n");
                            printf("(7) Tomate - R$ 2,00\n");
                            printf("(8) Milho - R$ 2,00\n");
                            printf("(9) Cebola - R$ 2,00\n");
                            printf("(10) Batata Palha - R$ 1,00\n");
                            printf("(11) Farofa - R$ 1,00\n");
                            printf("(12) Vina Vegana - R$ 6,00\n");

                            //PERGUNTA AO CLIENTE O NUMERO DO INGREDIENTE QUE ELE DESEJA ADICIONAR
                            printf("Digite o c�digo do ingrediente para adiciona-lo ao lanche:\n");

                                //APRESENTA A OP��O DE FINALIZAR A MONTAGEM ANTES DE ATINGIR O LIMITE DE INGREDIENTES
                                printf("Para finalizar o lanche antecipadamente digite 0.\n");
                                //RESETA A VARIAVEL escolhaingrediente
                                escolhaingrediente=0;
                                //RECEBE A RESPOSTA DO CLIENTE
                                scanf("%d", &escolhaingrediente);

                                //CASO O CLIENTE DIGITE 0 ENCERRA A MONTAGEM DO LANCHE
                                if(escolhaingrediente==0)
                                {
                                    escolhaingrediente=0;
                                    contador1=10;
                                }
                                //SE O CLIENTE N�O ESCOLHER UMA OP��O V�LIDA, EMITE UM AVISO E REPETE A OPERA��O
if(escolhaingrediente!=0 || escolhaingrediente!=1 || escolhaingrediente!=2 || escolhaingrediente!=3 || escolhaingrediente!=4 || escolhaingrediente!=5 || escolhaingrediente!=6 || escolhaingrediente!=7 || escolhaingrediente!=8 || escolhaingrediente!=9 || escolhaingrediente!=10 || escolhaingrediente!=11 || escolhaingrediente!=12)
                                {
                                    system("cls");
                                    printf("Op��o Inv�lida!\nTente novamente.\n");
                                    //Diminui em 1 o contador que limita a quantidade de itens.
                                    contador1-1;
                                }

                                //CASO O CLIENTE ESCOLHA UM VALOR V�LIDO
                                if(escolhaingrediente==1)
                                {
                                    //LIMPA A TELA
                                    system("cls");
                                    //CONFIRMA O INGREDIENTE ADICIONADO AO LANCHE
                                    printf("Vina adicionada ao lanche!\n");
                                    //SOMA O VALOR DO INGREDIENTE AO TOTAL DA COMPRA
                                    total1+=2;
                                    parcialmontado1+=2;
                                }
                                if(escolhaingrediente==2)
                                {
                                    system("cls");
                                    printf("Bacon adicionado ao lanche!\n");
                                    total1+=5;
                                    parcialmontado1+=5;
                                }
                                if(escolhaingrediente==3)
                                {
                                    system("cls");
                                    printf("Calabresa adicionada ao lanche!\n");
                                    total1+=4;
                                    parcialmontado1+=4;
                                }
                                if(escolhaingrediente==4)
                                {
                                    system("cls");
                                    printf("Frango adicionado ao lanche!\n");
                                    total1+=4;
                                    parcialmontado1+=4;
                                }
                                if(escolhaingrediente==5)
                                {
                                    system("cls");
                                    printf("Lombinho adicionado ao lanche!\n");
                                    total1+=4;
                                    parcialmontado1+=4;
                                }
                                if(escolhaingrediente==6)
                                {
                                    system("cls");
                                    printf("Presunto adicionado ao lanche!\n");
                                    total1+=3;
                                    parcialmontado1+=3;
                                }
                                if(escolhaingrediente==7)
                                {
                                    system("cls");
                                    printf("Tomate adicionado ao lanche!\n");
                                    total1+=2;
                                    parcialmontado1+=2;
                                }
                                if(escolhaingrediente==8)
                                {
                                    system("cls");
                                    printf("Milho adicionado ao lanche!\n");
                                    total1+=2;
                                    parcialmontado1+=2;
                                }
                                if(escolhaingrediente==9)
                                {
                                    system("cls");
                                    printf("Cebola adicionada ao lanche!\n");
                                    total1+=2;
                                    parcialmontado1+=2;
                                }
                                if(escolhaingrediente==10)
                                {
                                    system("cls");
                                    printf("Batata Palha adicionada ao lanche!\n");
                                    total1+=1;
                                    parcialmontado1+=1;
                                }
                                if(escolhaingrediente==11)
                                {
                                    system("cls");
                                    printf("Farofa adicionada ao lanche!\n");
                                    total1+=1;
                                    parcialmontado1+=1;
                                }
                                if(escolhaingrediente==12)
                                {
                                    system("cls");
                                    printf("Vina Vegana adicionada ao lanche!\n");
                                    total1+=6;
                                    parcialmontado1+=6;
                                }


                        }

                break;

                    case 2:

                        system("cls");
                        printf("Voc� selecionou o p�o m�dio.\n");
                        total1+=8;
                        parcialmontado2+=8;
                        montado2=1;
                        printf("Voc� pode adicionar at� 6 ingredientes para o seu lanche!\n");

                        for(contador1=0; contador1<6; contador1++)
                        {


                            printf("Lista de Ingredientes:\n");
                            printf("(1) Vina - R$ 2,00\n");
                            printf("(2) Bacon - R$ 5,00\n");
                            printf("(3) Calabresa - R$ 4,00\n");
                            printf("(4) Frango - R$ 4,00\n");
                            printf("(5) Lombinho - R$ 4,00\n");
                            printf("(6) Presunto - R$ 3,00\n");
                            printf("(7) Tomate - R$ 2,00\n");
                            printf("(8) Milho - R$ 2,00\n");
                            printf("(9) Cebola - R$ 2,00\n");
                            printf("(10) Batata Palha - R$ 1,00\n");
                            printf("(11) Farofa - R$ 1,00\n");
                            printf("(12) Vina Vegana - R$ 6,00\n");

                            printf("Digite o c�digo do ingrediente para adiciona-lo ao lanche:\n");
                            printf("Para finalizar o lanche antecipadamente digite 0.\n");
                                escolhaingrediente=0;
                                scanf("%d", &escolhaingrediente);

if(escolhaingrediente!=0 || escolhaingrediente!=1 || escolhaingrediente!=2 || escolhaingrediente!=3 || escolhaingrediente!=4 || escolhaingrediente!=5 || escolhaingrediente!=6 || escolhaingrediente!=7 || escolhaingrediente!=8 || escolhaingrediente!=9 || escolhaingrediente!=10 || escolhaingrediente!=11 || escolhaingrediente!=12)
                                {
                                    system("cls");
                                    printf("Op��o Inv�lida!\nTente novamente.\n");
                                    contador1-1;
                                }
                                if(escolhaingrediente==0)
                                {
                                    contador1=9;
                                }
                                if(escolhaingrediente==1)
                                {
                                    system("cls");
                                    printf("Vina adicionada ao lanche!\n");
                                    total1+=2;
                                    parcialmontado2+=2;
                                }
                                if(escolhaingrediente==2)
                                {
                                    system("cls");
                                    printf("Bacon adicionado ao lanche!\n");
                                    total1+=5;
                                    parcialmontado2+=5;
                                }
                                if(escolhaingrediente==3)
                                {
                                    system("cls");
                                    printf("Calabresa adicionada ao lanche!\n");
                                    total1+=4;
                                    parcialmontado2+=4;
                                }
                                if(escolhaingrediente==4)
                                {
                                    system("cls");
                                    printf("Frango adicionado ao lanche!\n");
                                    total1+=4;
                                    parcialmontado2+=4;
                                }
                                if(escolhaingrediente==5)
                                {
                                    system("cls");
                                    printf("Lombinho adicionado ao lanche!\n");
                                    total1+=4;
                                    parcialmontado2+=4;
                                }
                                if(escolhaingrediente==6)
                                {
                                    system("cls");
                                    printf("Presunto adicionado ao lanche!\n");
                                    total1+=3;
                                    parcialmontado2+=3;
                                }
                                if(escolhaingrediente==7)
                                {
                                    system("cls");
                                    printf("Tomate adicionado ao lanche!\n");
                                    total1+=2;
                                    parcialmontado2+=2;
                                }
                                if(escolhaingrediente==8)
                                {
                                    system("cls");
                                    printf("Milho adicionado ao lanche!\n");
                                    total1+=2;
                                    parcialmontado2+=2;
                                }
                                if(escolhaingrediente==9)
                                {
                                    system("cls");
                                    printf("Cebola adicionada ao lanche!\n");
                                    total1+=2;
                                    parcialmontado2+=2;
                                }
                                if(escolhaingrediente==10)
                                {
                                    system("cls");
                                    printf("Batata Palha adicionada ao lanche!\n");
                                    total1+=1;
                                    parcialmontado2+=1;
                                }
                                if(escolhaingrediente==11)
                                {
                                    system("cls");
                                    printf("Farofa adicionada ao lanche!\n");
                                    total1+=1;
                                    parcialmontado2+=1;
                                }
                                if(escolhaingrediente==12)
                                {
                                    system("cls");
                                    printf("Vina Vegana adicionada ao lanche!\n");
                                    total1+=6;
                                    parcialmontado2+=6;
                                }

                        }

                break;

                    case 3:

                        system("cls");
                        printf("Voc� selecionou o p�o pequeno.\n");
                        total1+=5;
                        parcialmontado3+=5;
                        montado3=1;
                        printf("Voc� pode adicionar at� 4 ingredientes para o seu lanche!\n");

                        for(contador1=0; contador1<4; contador1++)
                        {


                            printf("Lista de Ingredientes:\n");
                            printf("(1) Vina - R$ 2,00\n");
                            printf("(2) Bacon - R$ 5,00\n");
                            printf("(3) Calabresa - R$ 4,00\n");
                            printf("(4) Frango - R$ 4,00\n");
                            printf("(5) Lombinho - R$ 4,00\n");
                            printf("(6) Presunto - R$ 3,00\n");
                            printf("(7) Tomate - R$ 2,00\n");
                            printf("(8) Milho - R$ 2,00\n");
                            printf("(9) Cebola - R$ 2,00\n");
                            printf("(10) Batata Palha - R$ 1,00\n");
                            printf("(11) Farofa - R$ 1,00\n");
                            printf("(12) Vina Vegana - R$ 6,00\n");

                            printf("Digite o c�digo do ingrediente para adiciona-lo ao lanche:\n");
                            printf("Para finalizar o lanche antecipadamente digite 0.\n");
                                escolhaingrediente=0;
                                scanf("%d", &escolhaingrediente);

if(escolhaingrediente!=0 || escolhaingrediente!=1 || escolhaingrediente!=2 || escolhaingrediente!=3 || escolhaingrediente!=4 || escolhaingrediente!=5 || escolhaingrediente!=6 || escolhaingrediente!=7 || escolhaingrediente!=8 || escolhaingrediente!=9 || escolhaingrediente!=10 || escolhaingrediente!=11 || escolhaingrediente!=12)
                                {
                                    system("cls");
                                    printf("Op��o Inv�lida!\nTente novamente.\n");
                                    contador1-1;
                                }
                                if(escolhaingrediente==0)
                                {
                                    contador1=9;
                                }
                                if(escolhaingrediente==1)
                                {
                                    system("cls");
                                    printf("Vina adicionada ao lanche!\n");
                                    total1+=2;
                                    parcialmontado3+=2;
                                }
                                if(escolhaingrediente==2)
                                {
                                    system("cls");
                                    printf("Bacon adicionado ao lanche!\n");
                                    total1+=5;
                                    parcialmontado3+=5;
                                }
                                if(escolhaingrediente==3)
                                {
                                    system("cls");
                                    printf("Calabresa adicionada ao lanche!\n");
                                    total1+=4;
                                    parcialmontado3+=4;
                                }
                                if(escolhaingrediente==4)
                                {
                                    system("cls");
                                    printf("Frango adicionado ao lanche!\n");
                                    total1+=4;
                                    parcialmontado3+=4;
                                }
                                if(escolhaingrediente==5)
                                {
                                    system("cls");
                                    printf("Lombinho adicionado ao lanche!\n");
                                    total1+=4;
                                    parcialmontado3+=4;
                                }
                                if(escolhaingrediente==6)
                                {
                                    system("cls");
                                    printf("Presunto adicionado ao lanche!\n");
                                    total1+=3;
                                    parcialmontado3+=3;
                                }
                                if(escolhaingrediente==7)
                                {
                                    system("cls");
                                    printf("Tomate adicionado ao lanche!\n");
                                    total1+=2;
                                    parcialmontado3+=2;
                                }
                                if(escolhaingrediente==8)
                                {
                                    system("cls");
                                    printf("Milho adicionado ao lanche!\n");
                                    total1+=2;
                                    parcialmontado3+=2;
                                }
                                if(escolhaingrediente==9)
                                {
                                    system("cls");
                                    printf("Cebola adicionada ao lanche!\n");
                                    total1+=2;
                                }
                                if(escolhaingrediente==10)
                                {
                                    system("cls");
                                    printf("Batata Palha adicionada ao lanche!\n");
                                    total1+=1;
                                    parcialmontado3+=1;
                                }
                                if(escolhaingrediente==11)
                                {
                                    system("cls");
                                    printf("Farofa adicionada ao lanche!\n");
                                    total1+=1;
                                    parcialmontado3+=1;
                                }
                                if(escolhaingrediente==12)
                                {
                                    system("cls");
                                    printf("Vina Vegana adicionada ao lanche!\n");
                                    total1+=6;
                                    parcialmontado3+=6;
                                }


                        }


                break;

                }

                }
                //LA�O DE REPETI��O ACONTECE AT� QUE O CLIENTE DECIDA IR AT� OUTRO MENU
                while(tamanho1!=4 || tamanho1!=5);
                //SE O CLIENTE DIGITAR 4 ELE � DIRECIONADO AT� O MENU DE LANCHES PRONTOS
                if(tamanho1=4)
                {
                    goto prontos1;
                }
                //SE O CLIENTE DIGITAR 5 ELE � DIRECIONADO AT� O MENU DE BEBIDAS
                else if(tamanho1=5)
                {
                    goto bebidas1;
                }


            break;


            cupomfiscal:
                //LIMPA A TELA
                system("cls");
                //PERGUNTA A FORMA DE PAGAMENTO
                printf("Qual vai ser a forma de pagamento?\n");
                //APRESENTA AS FORMAS DE PAGAMENTO DISPONIVEIS
                printf("(1) Dinheiro\n");
                printf("(2) Pix\n");
                printf("(3) Cart�o de d�bito\n");
                printf("(4) Cart�o de cr�dito\n");
                printf("(5) Vale Refei��o\n");
                printf("(6) Vale Alimenta��o\n");
                //RECEBE A RESPOSTA DA FORMA DE PAGAMENTO
                scanf("%d", &formadepagamento);
                system("cls");
                printf("----------------------------CUPOM FISCAL----------------------------\n");

                //MOSTRA O NOME DO CLIENTE
                printf("NOME: %s\n", nomedocliente);
                //MOSTRA A FORMA DE PAGAMENTO ESCOLHIDA POR MEIO DE SWITCH CASE
                switch(formadepagamento)
                {
                case 1:
                    printf("Forma de pagamento: Dinheiro\n");
                    break;
                case 2:
                    printf("Forma de pagamento: Pix\n");
                    break;
                case 3:
                    printf("Forma de pagamento: Cart�o de d�bito\n");
                    break;
                case 4:
                    printf("Forma de pagamento: Cart�o de cr�dito\n");
                    break;
                case 5:
                    printf("Forma de pagamento: Vale refei��o\n");
                    break;
                case 6:
                    printf("Forma de pagamento: Vale alimenta��o\n");
                    break;
                //CASO N�O SEJA ESCOLHIDO UMA FORMA DE PAGAMENTO V�LIDA, NOTIFICA O USU�RIO E DIRECIONA ELE PARA A ESCOLHA DE FORMA DE PAGAMENTO DE NOVO
                default:
                    printf("Forma de pagamento inv�lida!\n");
                    printf("Tente novamente.\n");
                    goto cupomfiscal;
                    break;
                }

                printf("ITENS:\n");
               // CUPOM FISCAL LANCHES
                if(lanche1==1)
                {
                    unidade1=16;
                    parcial1=unidade1*quantidade1;
                    printf("Lanche Tradicional simples..................R$ %.2f x %d = R$%.2f\n", unidade1, quantidade1, parcial1);
                }
                if(lanche2==1)
                {
                    unidade1=18;
                    parcial1=unidade1*quantidade2;
                    printf("Lanche Tradicional com duas vinas...........R$ %.2f x %d = R$%.2f\n", unidade1, quantidade2, parcial1);
                }
                if(lanche3==1)
                {
                    unidade1=25;
                    parcial1=unidade1*quantidade3;
                    printf("Lanche Tradicional com bacon................R$ %.2f x %d = R$%.2f\n", unidade1, quantidade3, parcial1);
                }
                if(lanche4==1)
                {
                    unidade1=24;
                    parcial1=unidade1*quantidade4;
                    printf("Lanche Tradicional com calabresa............R$ %.2f x %d = R$%.2f\n", unidade1, quantidade4, parcial1);
                }
                if(lanche5==1)
                {
                    unidade1=25;
                    parcial1=unidade1*quantidade5;
                    printf("Lanche Tradicional com frango...............R$ %.2f x %d = R$%.2f\n", unidade1, quantidade5, parcial1);
                }
                if(lanche6==1)
                {
                    unidade1=28;
                    parcial1=unidade1*quantidade6;
                    printf("Lanche Tradicional vegano...................R$ %.2f x %d = R$%.2f\n", unidade1, quantidade6, parcial1);
                }
                if(lanche7==1)
                {
                    unidade1=24;
                    parcial1=unidade1*quantidade7;
                    printf("Lanche Tradicional com lombinho.............R$ %.2f x %d = R$%.2f\n", unidade1, quantidade7, parcial1);
                }
                if(lanche8==1)
                {
                    unidade1=36;
                    parcial1=unidade1*quantidade8;
                    printf("Lanche Tradicional extra carne..............R$ %.2f x %d = R$%.2f\n", unidade1, quantidade8, parcial1);
                }
                //CUPOM FISCAL BEBIDAS
                if(bebida1==1)
                {
                    unidade1=4;
                    parcial1=unidade1*quantidadebebida1;
                    printf("Agua Mineral................................R$ %.2f x %d = R$%.2f\n", unidade1, quantidadebebida1, parcial1);
                }
                if(bebida2==1)
                {
                    unidade1=8;
                    parcial1=unidade1*quantidadebebida2;
                    printf("Suco Natural................................R$ %.2f x %d = R$%.2f\n", unidade1, quantidadebebida2, parcial1);
                }
                if(bebida3==1)
                {
                    unidade1=18;
                    parcial1=unidade1*quantidadebebida3;
                    printf("Suco Natural Jarra..........................R$ %.2f x %d = R$%.2f\n", unidade1, quantidadebebida3, parcial1);
                }
                if(bebida4==1)
                {
                    unidade1=7;
                    parcial1=unidade1*quantidadebebida4;
                    printf("Refrigerante Lata...........................R$ %.2f x %d = R$%.2f\n", unidade1, quantidadebebida4, parcial1);
                }
                if(bebida5==1)
                {
                    unidade1=7;
                    parcial1=unidade1*quantidadebebida5;
                    printf("Ch� Matte...................................R$ %.2f x %d = R$%.2f\n", unidade1, quantidadebebida5, parcial1);
                }
                if(bebida6==1)
                {
                    unidade1=7;
                    parcial1=unidade1*quantidadebebida6;
                    printf("Suco Del Vale...............................R$ %.2f x %d = R$%.2f\n", unidade1, quantidadebebida6, parcial1);
                }
                if(bebida7==1)
                {
                    unidade1=10;
                    parcial1=unidade1*quantidadebebida7;
                    printf("Refrigerante 600mL..........................R$ %.2f x %d = R$%.2f\n", unidade1, quantidadebebida7, parcial1);
                }
                if(bebida8==1)
                {
                    unidade1=14;
                    parcial1=unidade1*quantidadebebida8;
                    printf("Refrigerante 1L.............................R$ %.2f x %d = R$%.2f\n", unidade1, quantidadebebida8, parcial1);
                }
                if(bebida9==1)
                {
                    unidade1=20;
                    parcial1=unidade1*quantidadebebida9;
                    printf("Refrigerante 2L.............................R$ %.2f x %d = R$%.2f\n", unidade1, quantidadebebida9, parcial1);
                }

                //CUPOM FISCAL CUSTOMIZADOS
                if(montado1==1)
                {
                    printf("Lanche Customizado Grande...................R$ %.2f x 1 = R$%.2f\n", parcialmontado1, parcialmontado1);
                }
                if(montado2==1)
                {
                    printf("Lanche Customizado Medio....................R$ %.2f x 1 = R$%.2f\n", parcialmontado2, parcialmontado2);
                }
                if(montado3==1)
                {
                    printf("Lanche Customizado Pequeno..................R$ %.2f x 1 = R$%.2f\n", parcialmontado3, parcialmontado3);
                }



                printf("VALOR FINAL................................................R$%.2f", total1);

}

return 0;

}
