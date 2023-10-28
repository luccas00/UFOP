#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int l;
char lixo[10];

struct pet {
    char name[20];
    char class[20];
    char gender[10];
    char armor[30];
    int age;
    int atk;
    int magic_atk; 
    int def;
    int magic_def;
    int pet_att[3];
};
typedef struct pet pet;

struct player {
    char name[20];
    char class[20];
    char rank[20];
    char gender[10];
    char armor[30];
    char sword[30];
    char shield[30];
    char location[30];
    int atk;
    int magic_atk;
    int def;
    int magic_def;
    int life;
    int age;
    int qi;
    int att[5];
};
typedef struct player player;

void print_status(player player) {
    printf("\nLocalidade - %s", player.location);
    printf("\nNome - %s", player.name);
    printf("\nClasse - %s", player.class);
    printf("\nRank - %s", player.rank);
    printf("\nGenero - %s", player.gender);
    printf("\nIdade - %d", player.age);
    printf("\n\n* * * Atributos * * *");
    printf("\n1 - Forca[%d]", player.att[0]);
    printf("\n2 - Inteligencia[%d]", player.att[1]);
    printf("\n3 - Magia[%d]", player.att[2]);
    printf("\n4 - Mana[%d]", player.att[3]);        
    printf("\n5 - Saude[%d]", player.att[4]);
    printf("\n\n* * * Poder de Ataque * * *");
    printf("\nAtaque = [%d]", player.atk);
    printf("\nAtaque Magico = [%d]", player.magic_atk);
    printf("\n\n* * * Poder de Defesa * * *");
    printf("\nDefesa = [%d]", player.def);
    printf("\nDefesa Magica = [%d]", player.magic_def);
    printf("\n\n* * * Vitalidade * * *");
    printf("\nVida = [%d]", player.life);
    printf("\nRaciocinio = [%d]", player.qi);
    printf("\n\n* * * Itens * * *");
    printf("\nArmadura = [%s", player.armor);
    printf("\nArma = [%s", player.sword);
    printf("\nEscudo = [%s", player.shield);
    }

int dice_3();
int dice_6();
int dice_10();
int dice_20();

char coin();

void head() {
    printf("\n* * * * * * * * * * * * * * * *");
    printf("\n* * * * * Welcome ! * * * * * *");
    printf("\n* * * * * * * * * * * * * * * *");
}

void class() {
    printf("\nClasses Disponiveis:");
    printf("\n1 - Wizard\n['Istaris', nome dado aquele escolhido pelas estrelas para herdar a magia de Khartoum]");
    printf("\n[Poderosos manipuladores das artes magicas, Istaris sao escolhidos ao 6 anos de idade]\n[Tirados de suas familias e levados ao grande templo de Dol-Guldur eles recebem intenso treinamento da doutrina de Merlin]");
    printf("\n[Ninguem sabe de onde vem, para onde vao e oque vao fazer, mas sabem que nao se deve entrar no caminho de um Mago]\n[Se bem treinado os Magos se tornam muito poderosos, praticamente imbativeis ou podem cair da desgraca do esquecimento]");
    printf("\n[Existem magos de varias caractericas, cabe a voce explorar o maximo de sua capacidade]\n[Magos podem se tornar Healers, Wizards, Sorceres, Witches, Dark Witches, Dark Lords os Mages e Mendigos]\n");
    printf("\n2 - Knight\nNativos e Cavaleiros da rainha Vitoria\nNascidos no mundo de Khartoum os nativos foram os escolhidos pela Familia Real para sua expansao imperial");
    printf("\nHomens de grande influencia na cidade de Florencia mas com poucas caracteristicas exclusivas\nGeralmente se tornam politicos, administradores ou comerciantes");
    printf("\nCom o treinamento certo um Knight pode se tornar um grande guerreiro e ou espadachin habilidoso\n");
    printf("\n3 - Elf\nNascidos nos grandes e distantes campos de Noria\nOs Elfos sao seres antigos da terra media que vivem por longos anos");
    printf("\nisso se nao forem mortos por algum inimigo.\nMuito habilidosos com runas, encantamentos e os mais misticos dos objetos de batalha");
    printf("\nOs elfos tambem sao peritos na arte da batalha, com grande inteligencia estrategica e habilidade unica com o arco e flecha");
    printf("\nPodendo vir a se tornar grandes guerreiros, caçadores, feiticeiros ou ate mesmo agentes das trevas\n");
    printf("\n4 - Gladiator\nHomens da grande cidade de Roma, trazidos como escravos libertados para esta terra distante");
    printf("\nOs gladiadores antigamente ajudaram na construçao da cidade de Lorencia, porem hoje procuram trabalho com oque podem aos arredores da cidade");
    printf("\nOs que se corromperam, viraram Cacadores de Recompensa a Assasinos de aluguel");
    printf("\nAqueles que ainda seguem o antigo codigo de honra dos gladiadores se orgulham em ser homens integros e justos, de coraçao puro");
    printf("\nDescendentes do antigo semi-deus Hercules, os gladiadores sao muito fortes\nPodem vir a se tornar um grande Lider, Guerreiro, Aliado...\n");
    printf("\n5 - Beast\nVoce sera uma fera aleatoria\nRato , Boi, Tigre, Coelho, Dragao Chines, Serpente, Cavalo, Cabra");
    printf("\nMacaco, Galo, Cachorro, Porco, Gaviao , Camelo, Peixe, Verme , Centauro, Basilisco\nDragao de Comodo, Lula Colossal, Abelha, Lobo\n");
    printf("\n6 - Priest\nHomens normais, fieis a Deus e a igreja Catolica, unica religiao permitida...\n");
    printf("\n7 - Dark Lord\nAgentes das trevas dos varios tipos, origens desconhecida\n");
    printf("\nFaca sua escolha:\n");
}

void atributes_now(player player) {
    printf("\n1 - Forca [%d]", player.att[0]);
    printf("\n2 - Inteligencia [%d]", player.att[1]);
    printf("\n3 - Magia [%d]", player.att[2]);
    printf("\n4 - Mana [%d]", player.att[3]);
    printf("\n5 - Saude [%d]", player.att[4]);
}

void atributes_definition() {    
    printf("\nEstes sao os atributos do seu personagem");
    printf("\nSempre de forma respectiva e numerada");
    printf("\nCada personagem tem 100 pontos pre definidos inicialmente");
    printf("\nE todos comecam com 100 pontos de ditribuicao inicial");
    printf("\nDistribua seus pontos conforme instruido");
    printf("\nMuita atencao, pontos de atributos sao impossiveis de se remover");   
}

int main()
{
    char op;
    int aux;
    int temp[5];

    player player;
    pet pet;

    player.life = 100;

    strcpy(player.armor, "nenhum");
    strcpy(player.sword, "nenhum");
    strcpy(player.shield, "nenhum");

    srand(time(NULL));

    head();
    for (l = 0; l < 2; l++)
    {
        printf("\nDigite seu nome para comecar o jogo:\n");
        fflush(stdin);
        fgets(player.name, 20, stdin);

        printf("\nPor favor digite sua idade:\n");
        fflush(stdin);
        scanf(" %d", &player.age);

        printf("\nSeus dados estao corretos?");
        printf("\n[Y - Yes]\n[N - No]\n");
        printf("\n[Nome: %s", player.name);
        printf("[Idade: %d]\n", player.age);

        fflush(stdin);
        scanf(" %c", &op);
        if ((op == 'n') || (op == 'N'))
        {
            printf("\nChoose Again !!\n");
            l--;
        }
        else if ((op == 'y') || (op == 'Y'))
        {
            l++;
        }
        else
        {
            printf("\nInvalido\n");
            l--;
        }
    }

    class();
    for (l = 0; l < 2; l++)
    {
        fflush(stdin);
        scanf(" %d", &aux);
        switch (aux) {
        case 1:
            strcpy(player.class, "Wizard");
            player.att[0]=10;
            player.att[1]=20;
            player.att[2]=30;
            player.att[3]=20;
            player.att[4]=20;
            l++;
            break;

        case 2:
            strcpy(player.class, "Knight");
            player.att[0]=20;
            player.att[1]=20;
            player.att[2]=20;
            player.att[3]=20;
            player.att[4]=20;
            l++;
            break;
        
        case 3:
            strcpy(player.class, "Elf");
            player.att[0]=10;
            player.att[1]=30;
            player.att[2]=20;
            player.att[3]=20;
            player.att[4]=20;
            l++;
            break;

        case 4:
            strcpy(player.class, "Gladiator");
            player.att[0]=30;
            player.att[1]=20;
            player.att[2]=10;
            player.att[3]=20;
            player.att[4]=20;
            l++;
            break;

        case 5:
            strcpy(player.class, "Beast");
            int num;
            num = (rand()%30)+1;
            if (num == 1){strcpy(player.rank, "Rato");}
            else if (num == 2){strcpy(player.rank, "Boi");}
            else if (num == 3){strcpy(player.rank, "Tigre");}
            else if (num == 4){strcpy(player.rank, "Coelho");}
            else if (num == 5){strcpy(player.rank, "Dragao Chines");}
            else if (num == 6){strcpy(player.rank, "Serpente");}
            else if (num == 7){strcpy(player.rank, "Cavalo");}
            else if (num == 8){strcpy(player.rank, "Cabra");}
            else if (num == 9){strcpy(player.rank, "Macaco");}
            else if (num == 10){strcpy(player.rank, "Galo");}
            else if (num == 11){strcpy(player.rank, "Cachorro");}
            else if (num == 12){strcpy(player.rank, "Porco");}
            else if (num == 13){strcpy(player.rank, "Formiga");}
            else if (num == 14){strcpy(player.rank, "Lagartixa");}
            else if (num == 15){strcpy(player.rank, "Barata");}
            else if (num == 16){strcpy(player.rank, "Pombo");}
            else if (num == 17){strcpy(player.rank, "Gaviao");}
            else if (num == 18){strcpy(player.rank, "Camelo");}
            else if (num == 19){strcpy(player.rank, "Peixe");}
            else if (num == 20){strcpy(player.rank, "Tubarao");}
            else if (num == 21){strcpy(player.rank, "Godzilla");}
            else if (num == 22){strcpy(player.rank, "Verme");}
            else if (num == 23){strcpy(player.rank, "Hidra");}
            else if (num == 24){strcpy(player.rank, "Centauro");}
            else if (num == 25){strcpy(player.rank, "Basilisco");}
            else if (num == 26){strcpy(player.rank, "Dragao de Comodo");}
            else if (num == 27){strcpy(player.rank, "Bufalo");}
            else if (num == 28){strcpy(player.rank, "Lula Colossal");}
            else if (num == 29){strcpy(player.rank, "Abelha");}
            else if (num == 30){strcpy(player.rank, "Lobo");}
            player.att[0]=20;
            player.att[1]=20;
            player.att[2]=20;
            player.att[3]=20;
            player.att[4]=20;
            l++;
            break;
        
        case 6:
            strcpy(player.class, "Priest");
            player.att[0]=10;
            player.att[1]=20;
            player.att[2]=0;
            player.att[3]=50;
            player.att[4]=20;
            l++;
            break;

        case 7:
            strcpy(player.class, "Dark Lord");
            player.att[0]=20;
            player.att[1]=25;
            player.att[2]=25;
            player.att[3]=10;
            player.att[4]=20;
            l++;
            break;

        default:
            printf("\nValor Invalido\nDigite Novamente");
            l--;
        }
        
    }

    atributes_definition();
    atributes_now(player);

    int resto = 0;
    int max = 100;

    resto=max-resto;

    printf("\nPontos restantes [%d]", resto);
    printf("\nDigite quantos pontos deseja aumentar em Forca:\n");
    fflush(stdin);
    scanf("%d", &temp[0]);
    if (temp[0] >= resto)
    {
        player.att[0]+=100;
        resto=0;
    }
    else if (temp[0] <= 0)
    {
        player.att[0]+=0;
    }
    else if (temp[0] < resto)
    {
        player.att[0]+=temp[0];
        resto=resto-temp[0];
    }

    printf("\nPontos restantes [%d]", resto);
    printf("\nDigite quantos pontos deseja aumentar em Inteligencia:\n");
    fflush(stdin);
    scanf("%d", &temp[1]);
    if (temp[1] >= resto)
    {
        player.att[1]+=resto;
        resto=0;
    }
    else if (temp[1] <= 0)
    {
        player.att[1]+=0;
    }
    else if (temp[1] < resto)
    {
        player.att[1]+=temp[1];
        resto=resto-temp[1];
    }
    
    printf("\nPontos restantes [%d]", resto);
    printf("\nDigite quantos pontos deseja aumentar em Magia:\n");
    fflush(stdin);
    scanf("%d", &temp[2]);
    if (temp[2] >= resto)
    {
        player.att[2]+=resto;
        resto=0;
    }
    else if (temp[2] <= 0)
    {
        player.att[2]+=0;
    }
    else if (temp[2] < resto)
    {
        player.att[2]+=temp[2];
        resto=resto-temp[2];
    }

    printf("\nPontos restantes [%d]", resto);
    printf("\nDigite quantos pontos deseja aumentar em Mana:\n");
    fflush(stdin);
    scanf("%d", &temp[3]);
    if (temp[3] >= resto)
    {
        player.att[3]+=resto;
        resto=0;
    }
    else if (temp[3] <= 0)
    {
        player.att[3]+=0;
    }
    else if (temp[3] < resto)
    {
        player.att[3]+=temp[3];
        resto=resto-temp[3];
    }

    printf("\nPontos restantes [%d]", resto);
    printf("\nDigite quantos pontos deseja aumentar em Saude:\n");
    fflush(stdin);
    scanf("%d", &temp[4]);
    if (temp[4] >= resto)
    {
        player.att[4]+=resto;
        resto=0;
    }
    else if (temp[4] <= 0)
    {
        player.att[4]+=0;
    }
    else if (temp[4] < resto)
    {
        player.att[4]+=temp[4];
        resto=resto-temp[4];
    }

    if (resto > 0)
    {
        printf("\n\nPontos de atributos perdidos [%d]", resto);
    }
    
    atributes_now(player);

    int choice_1, aux1;

    for (l = 0; l < 2; l++)
    {
        printf("\n\n\nAgora vamos escolher o genero do seu personagem mas antes disso escolha entre:");
        printf("\n1 - Sorteio\n");
        printf("\n2 - Escolha Propria\n");
        scanf(" %d", &choice_1);
        if (choice_1 == 2)
        {
            printf("\nEscolha o genero do seu personagem:\n");
            printf("\nM - Male");
            printf("\nF - Female\n");
            for (int i = 0; i < 1; i++) {
                fflush(stdin);
                scanf(" %c", &op);
                if ((op == 'm') || (op == 'M'))
                {
                    strcpy(player.gender, "Male");
                    i++;
                }
                else if ((op == 'f') || (op == 'F'))
                {
                    strcpy(player.gender, "Female");
                    i++;
                }
                else
                {
                    printf("\nInvalido\nDigite Novamente\n");
                    i--;
                }
            }
            l++;
        }
        else if (choice_1 == 1)
        {
            aux1=coin();
            if (aux1 == 1)
            {
                strcpy(player.gender, "Male");
            }
            else
            {
                strcpy(player.gender, "Female");
            }
            l++;
        }
        else
        {
            printf("\nInvalido !\n");
            l--;
        }

    }

    printf("\n\n\n * * * Definindo sua Rank * * * \n");
    printf("\nCada personagem tem varios niveis de Rank diferentes, por exemplo:");
    printf("\n[Wizard] [Mage -> High Mage -> Grand Master]");
    printf("\n[Knight] [Common -> Dark Knight -> Black Knight]");
    printf("\n[Elf] [Archer/Warrior -> Sorcerer/High Elf -> High Master]");
    printf("\n[Dark Lord] [Agents of the Dark -> Sommunor of Evil -> Grand Master or Death]");
    printf("\nExistem varias Ranks diferentes disponiveis para todas as classes");

    int aux2;

    if (choice_1 == 1)
    {
        printf("\nComo voce sorteou seu genero, ira escolher sua Rank");
        switch (player.class[0])
        {
        case 'W':
            printf("\n * * * Wizard * * * \n");
            printf("\n1 - Dark Side");
            printf("\n2 - Summoner");
            printf("\n3 - Healer");
            scanf("%d", &aux2);
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Dark Side");
                break;

            case 2:
                strcpy(player.rank, "Summoner");
                break;

            case 3:
                strcpy(player.rank, "Healer");
                break;
            
            default:
                printf("\nNumero Invalido ou Caractere digitado\nRank sera sorteada:");
                aux2=dice_3();
                switch (aux2)
                {
                case 1:
                    strcpy(player.rank, "Dark Side");
                    break;

                case 2:
                    strcpy(player.rank, "Summoner");
                    break;

                case 3:
                    strcpy(player.rank, "Healer");
                    break;
        
                default:
                    break;

                }
                break;
            }
        break;    

        case 'K':
            printf("\n * * * Knight * * * \n");
            printf("\n1 - Comerciante");
            printf("\n2 - Politico");
            printf("\n3 - Espadachin");
            scanf("%d", &aux2);
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Comerciante");
                break;

            case 2:
                strcpy(player.rank, "Politico");
                break;

            case 3:
                strcpy(player.rank, "Espadachin");
                break;
            
            default:
                printf("\nNumero Invalido ou Caractere digitado\nRank sera sorteada:");
                aux2=dice_3();
                switch (aux2)
                {
                case 1:
                    strcpy(player.rank, "Comerciante");
                    break;

                case 2:
                    strcpy(player.rank, "Politico");
                    break;

                case 3:
                    strcpy(player.rank, "Espadachin");
                    break;
        
                default:
                    break;

                }
                break;

            }
            break;

        case 'E':
            printf("\n * * * Elf * * * \n");
            printf("\n1 - Archer");
            printf("\n2 - Hunter");
            printf("\n3 - Crafter");
            scanf("%d", &aux2);
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Archer");
                break;

            case 2:
                strcpy(player.rank, "Hunter");
                break;

            case 3:
                strcpy(player.rank, "Crafter");
                break;
            
            default:
                printf("\nNumero Invalido ou Caractere digitado\nRank sera sorteada:");
                aux2=dice_3();
                switch (aux2)
                {
                case 1:
                    strcpy(player.rank, "Archer");
                    break;

                case 2:
                    strcpy(player.rank, "Hunter");
                    break;

                case 3:
                    strcpy(player.rank, "Crafter");
                    break;
        
                default:
                    break;

                }
                break;
            }
            break;

        case 'G':
            printf("\n * * * Gladiator * * * \n");
            printf("\n1 - Plebeu");
            printf("\n2 - Soldado");
            printf("\n3 - Caçador de Recompensa");
            scanf("%d", &aux2);
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Plebeu");
                break;

            case 2:
                strcpy(player.rank, "Soldado");
                break;

            case 3:
                strcpy(player.rank, "Caçador de Recompensa");
                break;
            
            default:
                printf("\nNumero Invalido ou Caractere digitado\nRank sera sorteada:");
                aux2=dice_3();
                switch (aux2)
                {
                case 1:
                    strcpy(player.rank, "Plebeu");
                    break;

                case 2:
                    strcpy(player.rank, "Soldado");
                    break;

                case 3:
                    strcpy(player.rank, "Caçador de Recompensa");
                    break;
        
                default:
                    break;

                }
                break;
            }
            break;

        case 'B':
            printf("\n * * * Beast * * * \n");
            printf("\nRanks das Beast's sao sempre sorteadas\n");
            break;

        case 'P':
            printf("\n * * * Priest * * * \n");
            printf("\n1 - Padre do Interior [Interior Priest]");
            printf("\n2 - Padre da Cidade [City Priest]");
            printf("\n3 - Monge [Monk]");
            scanf("%d", &aux2);
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Interior Priest");
                break;

            case 2:
                strcpy(player.rank, "City Priest");
                break;

            case 3:
                strcpy(player.rank, "Monk [Monge]");
                break;
            
            default:
                printf("\nNumero Invalido ou Caractere digitado\nRank sera sorteada:");
                aux2=dice_3();
                switch (aux2)
                {
                case 1:
                    strcpy(player.rank, "Interior Priest");
                    break;

                case 2:
                    strcpy(player.rank, "City Priest");
                    break;

                case 3:
                    strcpy(player.rank, "Monk [Monge]");
                    break;
        
                default:
                    break;

                }
                break;
            }
            break;
            
        case 'D':
            printf("\n * * * Dark Lord * * *\n");
            printf("\n1 - Dark Witch");
            printf("\n2 - Sith");
            printf("\n3 - Mendigo");
            scanf("%d", &aux2);
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Dark Witch");
                break;

            case 2:
                strcpy(player.rank, "Sith");
                break;

            case 3:
                strcpy(player.rank, "Mendigo");
                break;
            
            default:
                printf("\nNumero Invalido ou Caractere digitado\nRank sera sorteada:");
                aux2=dice_3();
                switch (aux2)
                {
                case 1:
                    strcpy(player.rank, "Dark Witch");
                    break;

                case 2:
                    strcpy(player.rank, "Sith");
                    break;

                case 3:
                    strcpy(player.rank, "Mendigo");
                    break;
        
                default:
                    break;

                }
                break;
            }
            break;

        default:
            break;
        }
    }

    else
    {
        printf("\nComo voce escolheu seu genero, sua rank sera sorteada\n");
        switch (player.class[0])
        {
        case 'W':
            printf("\n * * * Wizard * * * \n");
            printf("\n1 - Dark Side");
            printf("\n2 - Summoner");
            printf("\n3 - Healer");
            aux2=dice_3();
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Dark Side");
                break;

            case 2:
                strcpy(player.rank, "Summoner");
                break;

            case 3:
                strcpy(player.rank, "Healer");
                break;
            
            default:
                break;
            }
            break;

        case 'K':
            printf("\n * * * Knight * * * \n");
            printf("\n1 - Comerciante");
            printf("\n2 - Politico");
            printf("\n3 - Espadachin");
            aux2=dice_3();
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Comerciante");
                break;

            case 2:
                strcpy(player.rank, "Politico");
                break;

            case 3:
                strcpy(player.rank, "Espadachin");
                break;
            
            default:
                break;
            }
            break;

        case 'E':
            printf("\n * * * Elf * * * \n");
            printf("\n1 - Archer");
            printf("\n2 - Hunter");
            printf("\n3 - Crafter");
            aux2=dice_3();
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Archer");
                break;

            case 2:
                strcpy(player.rank, "Hunter");
                break;

            case 3:
                strcpy(player.rank, "Crafter");
                break;
            
            default:
                break;
            }
            break;

        case 'G':
            printf("\n * * * Gladiator * * * \n");
            printf("\n1 - Plebeu");
            printf("\n2 - Soldado");
            printf("\n3 - Caçador de Recompensa");
            aux2=dice_3();
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Plebeu");
                break;

            case 2:
                strcpy(player.rank, "Soldado");
                break;

            case 3:
                strcpy(player.rank, "Caçador de Recompensa");
                break;
            
            default:
                break;
            }
            break;

        case 'B':
            printf("\n * * * Beast * * * \n");
            printf("\nRanks das Beast's sao sempre sorteadas\n");
            break;

        case 'P':
            printf("\n * * * Priest * * * \n");
            printf("\n1 - Padre do Interior [Interior Priest]");
            printf("\n2 - Padre da Cidade [City Priest]");
            printf("\n3 - Monge [Monk]");
                        aux2=dice_3();
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Interior Priest");
                break;

            case 2:
                strcpy(player.rank, "City Priest");
                break;

            case 3:
                strcpy(player.rank, "Monk [Monge]");
                break;
            
            default:
                break;
            }
            break;
            
        case 'D':
            printf("\n * * * Dark Lord * * *\n");
            printf("\n1 - Dark Witch");
            printf("\n2 - Sith");
            printf("\n3 - Mendigo");
            aux2=dice_3();
            switch (aux2)
            {
            case 1:
                strcpy(player.rank, "Dark Witch");
                break;

            case 2:
                strcpy(player.rank, "Sith");
                break;

            case 3:
                strcpy(player.rank, "Mendigo");
                break;
            
            default:
                break;
            }
            break;

        default:
            break;
        }

    }

    player.atk=dice_3();
    player.magic_atk=dice_3();
    player.def=dice_3();
    player.magic_def=dice_3();
    player.qi=dice_3();

    player.atk*=player.att[0];
    player.magic_atk*=player.att[2];
    player.def*=(player.att[3]+player.att[4]);
    player.magic_def*=(player.att[2]+player.att[4]);
    player.qi*=player.att[1];

    print_status(player);

    int choice_2;
    int sorte_1;
    int temp_1;

    printf("\n\n\nEscolhe entre Cara ou Coroa\n");
    printf("\n1 - Cara\n2 - Coroa\n");
    scanf(" %d", &choice_2);
    sorte_1=coin();
    if (choice_2 == sorte_1)
    {
        printf("\nVoce Acertou !");
        printf("\nVamos jogar um dado D6 para aumentar seus pontos de Ataque, Defesa e Vitalidade\n");
        temp_1=dice_6();
        player.atk*=temp_1;
        player.magic_atk*=temp_1;
        player.def*=temp_1;
        player.magic_def*=temp_1;
        player.qi*=temp_1;
        print_status(player);
    }
    else
    {
        printf("\nVoce Errou :(\nContinue a jogar\n");
    }

    printf("\n\n\nAgora que estamos com tudo definido, vamos nos localizar no mundo de Khartoum");
    printf("\nIt Began with the forging of the great code...");
    printf("\nIn the world of Khartoum you can find several tipes of life forms");
    printf("\nAlgumas boas e outras ruins");
    printf("\nObjetivo do jogo e desenvolver seu personagem e chegar ao final do jogo");
    printf("\nDivirta-se");
    printf("\nNa terra de Khartoum existe o Mar sem fim ao Norte");
    printf("\nAs terras de gelo ao Sul");
    printf("\nFlorestas para Oeste");
    printf("\nNao existem Historias do grande Deserto ao Leste, apenas que os que se aventuram por la, nunca voltam...");
    printf("\nAntes do Mar ao Norte esta a cidade porturaria de Lonrencia, qual voce se encontra");
    printf("\nEste e um esboco do Mapa Global\n");
    printf("\n\n\n\n\n");
    printf("\n                                                                                                 --------");
    printf("\n                                                                                             ---------");
    printf("\n                                                                                          -----");
    printf("\n                        Mar sem Fim                                                     ----");
    printf("\n                                                                                      ------");
    printf("\n-                                                                               ----------");
    printf("\n--                                                                         ---------");
    printf("\n--    ^^       ^^          ----------------          ^^       ^^            --------");
    printf("\n--    ##       ##    ----------------------------    ##       ##       --------");
    printf("\n-----     ---      ----  Fronteira Lorenciana  ----      ----     --------");
    printf("\n    ----------------                            -----------------");
    printf("\n      **********                                   **********");
    printf("\n         *****                                        *****");
    printf("\n           ****             Lorencia        ^^^ ^^^      ****                               Deserto Desconhecido");
    printf("\n             ****                             ^^^          *****"); 
    printf("\n                *****          *****                          ****");
    printf("\n                    *****    **********                          ******");
    printf("\n                       *************************** ================ ******");
    printf("\n                           ************** ======= The Black Gates ====== *****");
    printf("\n                                              ======================= ");
    printf("\n");
    printf("\n\n\n");
    printf("\n=============                                                                             ---      ---                     -----");
    printf("\n    ====---=&&$$&$&==---=                                    --=        =--                ---  ---                   ----");
    printf("\n                   &$&--==$$==-                               --=     =--                    ---                 --=--");
    printf("\n             $$&&       &$&--=$=--                             --=   =--                                     --==--");
    printf("\n           &&&$$&&&          &$&---=$$=--                       -====-                                  --===-");
    printf("\n             &&$&$            &$&---====--                       -==-                              ---==--");
    printf("\n     $&&$       Florestas de Noria  &$&--==--");
    printf("\n   &&$$&&                   &$&---==-----                                                                    Planices Imperiais");
    printf("\n    $&&$             &$&---======--");
    printf("\n       &&---$$&&$$-----");
    printf("\n        #########################                            Vale do Fim");
    printf("\n                               ##                                                                                              +++++=====++++++");
    printf("\n              ^^          ^^   ##                                                                                          ++++===+++===++");
    printf("\n                    Noria      ##                                                                                       **++**+++===+++===");
    printf("\n                               ##                                                                                     ***+++***+++==");
    printf("\n             ^^           ^^   ##                                                                                   ****++++***+++==");
    printf("\n        #########################                                                                                ***+++===+++");
    printf("\n                                                                                                             *****==");
    printf("\n                                                                                                            ***===");
    printf("\n                                                                                                             ***===");
    printf("\n---===---                                                                                                  ***===");
    printf("\n    ---===---                                                                                            ****---====");
    printf("\n       --===****                      -=-   -=-                                       # #                   ****-===");
    printf("\n          --==****                     -=- -=-                                      # #                  ****---===-");
    printf("\n             -==*****                    -=-                                                      ********==-");
    printf("\n               --*****************                                                           **********");
    printf("\n                       *****************************       Fronteira de Dol-Guldur     *********");
    printf("\n                                    ******************************************************");
    printf("\n                                          ******************************************");
    printf("\n\n");
    printf("\n+++                   +++====");
    printf("\n===+++             +++====");
    printf("\n   ===+++       +++===        =+++=     =++=");
    printf("\n      ===+++ +++===            =+++=  =++=");
    printf("\n         ===+++                   ==++==");
    printf("\n                                    +=\n\n");
    printf("\n      Geleiras de Cirith Ungol");
    printf("\n+++===          +++====");
    printf("\n====++++   ++++=====");
    printf("\n     ====+++++                                     #########################");
    printf("\n       +++++                                   #################################\n");
    printf("\n                                            ######## Templo de Dol-Guldur #########\n");
    printf("\n                                               #################################");
    printf("\n                                                    ########################");
    printf("\n\n\n\n\n\n"); 
    printf("\n+++===+++======+++++                                                                 +++++====+++++======++++++");
    printf("\n               ++++====++++==           Mar Artico                  ++++++=====+++++++===");
    printf("\n                   ++++====++++                           +++====++++");
    printf("\n                       +++++======+++++++=======++++++++++=====");
    printf("\n\n\n\n\n");
    printf("\nCada Classe comeca em um lugar diferente");
    printf("\n");
    switch (player.class[0])
    {
    case 'W':
        printf("\n\n[Magos comecam no Templo de Dol-Guldur]");
        strcpy(player.location, "Templo de Dol-Guldur");
        printf("\nEste e um esboco de um mapa mais aproximado:");
        printf("\n##########################################################################");
        printf("\n##########################################################################");
        printf("\n#####                                                                #####");
        printf("\n###                                                                    ###");
        printf("\n      ==                                                      ====        ");
        printf("\n    ==  ==                                                  ==    ===     ##");
        printf("\n      ==                                                   ==  Yoda ===    ##");
        printf("\n                                                         ==  Statue   ==   ##");
        printf("\n                                                          ===       ===");
        printf("\n                                                            =========");
        printf("\n                    ###");
        printf("\n                   ## ##");
        printf("\n                    ###");
        printf("\n                                         #####");
        printf("\n                                       ###   ###");
        printf("\n                                         #####");
        printf("\n     # # # # # # # # # #                                                         ###");
        printf("\n    #                    #                                                        ###");
        printf("\n    #                    #                                                       ###");
        printf("\n    #  Salao Comunal     #                                                      ###");
        printf("\n    #                    #                                                       ###");
        printf("\n    #                    #                                                         ###");
        printf("\n    # # # # # #    # # # #                                                           ###");
        printf("\n                                                                          Grande       #####");
        printf("\n");
        printf("\n                                                                        Escadaria      #####");
        printf("\n                                                                                    ###");
        printf("\n                ##############################                                    ###");
        printf("\n               # #                          # #                                ###");
        printf("\n              # #       Padawan Hall         # #                               ###");
        printf("\n             # #                              # #                              ###");
        printf("\n            # #                                # #                             ###");
        printf("\n                                                                               ###");
        printf("\nPara onde voce vai?");
        break;

    case 'K':
        printf("\nCavaleiros comecam na Cidade de Lorencia");
        strcpy(player.location, "Cidade de Lorencia");
        printf("\n\n\n");
        printf("             ^ ^ ^    ^ ^ ^                           ^ ^ ^    ^ ^ ^");
        printf("\n         /_-_-_-_| |_-_-_/       Porto de         /_-_-_-_| |_-_-_/                       ------");
        printf("\n-       /  #   # | | # #  /        Lorencia      /  #   # | | # #  /               ----------");
        printf("\n---  --/  #    # | | #   # /--------------------/  #    # | | #   # /         ---------");
        printf("\n -------                -----------------                                --------");
        printf("\n    ------------------------         --------------------------------------");
        printf("\n                                                                          ***");
        printf("\n                                                                            ***");
        printf("\n       -----                                                                  ***");
        printf("\n     ---   ---            # # #  # # #  # # #  # # #  # # #                      ***");
        printf("\n   ---  Bar  ---            #      #      #      #      #                            ***");
        printf("\n     ---    ---            #                             #                             ***");
        printf("\n        ---               #         House of Lords        #                          ***");
        printf("\n                         # # # # # # # # # # # # # # # # # #                          ***");
        printf("\n                                                                                      ***");
        printf("\n                                                                                      ***");
        printf("\n                                                 = ============= =                     ***");
        printf("\n                                               = ================ =                   ***");
        printf("\n             ===============                 /  //                 ||                     ***");
        printf("\n            ||              ||              /  //      High         ||                       ***");
        printf("\n            ||   House of   ||             /  //        Plaza       ||                         ***");
        printf("\n            ||    Commons   ||            /  //                    ||                         ***");
        printf("\n            ||              ||           /  //                     ||                         ***");
        printf("\n            ------------------          /  //                      ||                        ***");
        printf("\n                                       /  //                       ||                     ***");
        printf("\n                                      /  //                        ||                     ***");
        printf("\n                                     /  //         low class        ||                     ***");
        printf("\n                                    ||  ||                         ||                     ***");
        printf("\n                                    ||  ||                         ||                    ***");
        printf("\n      # # # # # # # # #             ||__||_________________________||");
        printf("\n      #               #");
        printf("\n      #   Mercado     #");
        printf("\n      #               #                   ++                 ++");
        printf("\n      #               #                 ^^^^^^             ^^^^^^       ");
        printf("\n      #################                ||    ||           ||    ||" );
        printf("\n                                      //     //++++++++++//     //");
        printf("\n                                     | |     ||++=====++| |    ||+++");
        printf("\n                                   ++++       +++++++++++++       ++++");
        printf("\n                                  +++                             +++");
        printf("\n                                  +++                             +++");
        printf("\n                                 ++++           Palacio           +++");
        printf("\n    /                             ++++                             +++");
        printf("\n                                +++++       +++++++++++++++++      +++");
        printf("\n                                +++++       +++++++++++++++++     +++");
        printf("\n");
        printf("\n");
        break;

    case 'E':
        printf("\nElfos comecam na Fortaleza de Noria");
        strcpy(player.location, "Fortaleza de Noria");
        printf("\n $$&&$$ $$&&$$    $$&&$$  $$&&$$$$ $$$$&&&&                                                        -----        -----");
        printf("\n  $$$$   $$$$      $&$&     $&$&     $&$&$                                            ---------     ---          ---");
        printf("\n   $&     $&        $&       $&       $&&                                              -------       -         Vale do Fim");
        printf("\n                                       $                                                 ---");
        printf("\n$AA$                                                                                      -");
        printf("\n      Florestas de Noria       $$&&");
        printf("\n      $       $         $         $");
        printf("\n     $&$     $7$       $&$       &$&");
        printf("\n    $&$&$   $&$&$     $&$&$     $&$&$ + + + + + + + + + + + + + + + + + + + + + + + + +");
        printf("\n  $&$  &$&$&$&$&&$&$&$&$  $&$$&$&&$ ################################################# +");
        printf("\n     $$$&$&$       $&$&$&$&$&$&$&$* * * * * * * * * * * * * * * * * * * * * * * * **# +");
        printf("\n$&     $&$&$&$&&$&$&$&    &$&$&&*                                 $   $            *# +");
        printf("\n$&$&      $&$&$&$&$&$&&$&$&$&*                                 /_-_-_-_-_/         *# +");
        printf("\n$&$&$                                                         /         /          *# +");
        printf("\n                                                             |           |          *# +");
        printf("\n  M M M M M M M M M M M M M                                 / Alquimista  /         *# +");
        printf("\n + + + + + + + + + + + + + +                                                        *# +");
        printf("\n+ + + + + + + + + + + + + + +                                                       *# +");
        printf("\n # # # # # # # # # # # # # # #                _____________________                  *# +");
        printf("\n                            *#                ( Espelho de Tarkin )                  *# +");
        printf("\n       Windsor Castle       *#                (                   )               ||  *# +");
        printf("\n                            *#                                                  ||    *# +");
        printf("\n                            *#                                               +||      *# +");
        printf("\n                            *#                                             +||        *# +");
        printf("\n # # # # # # # # # # # # # # #                                           +||          *# +");
        printf("\n                             #                                         +||            *# +");
        printf("\n # # # # # # # # # # # # # # #                                       +||              *# +");
        printf("\n                                      //         //                +||                *# +");
        printf("\n                                    // Quarteis //               + || Goblin Hall  ||*# +");
        printf("\n                                   //          //               + ||              || *# +");
        printf("\n                                                               ||_________________||  *# +");
        printf("\n                                                                                   *# +");
        printf("\n                                                                                   *# +");
        printf("\n  _-_-_-_-_-_-_-_-_-_                                                               *# +");
        printf("\n                     //                                                              *# +");
        printf("\n                      //                                                             *# +");
        printf("\n      Picadily         //                                                      # # # #*# +");
        printf("\n        Square        //                                        # # # #       # # # # #*# +");
        printf("\n                     //                                      # # # # # # # # # # # # # *# +");
        printf("\n                     //                                      #                        *# +");
        printf("\n = = = = = = = = = = //       #                  #           #                      *# +");
        printf("\n                             # #     Great      # #        # #        Jedi Ruin's    *# +");
        printf("\n                           # # # [   Stairs  ] # # #     # # #                     *# +");
        printf("\n * * * * * * * * * * * * * * * * *(         )* * * * * * * * * * * * * * * * * * * *# +");
        printf("\n##################################################################################### +");
        printf("\n+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +");
        printf("\n\n\n");
        break;

    case 'G':
        printf("\nGladiadores comecam em Lorencia");
        strcpy(player.location, "Cidade de Lorencia");
        printf("\n\n\n");
        printf("             ^ ^ ^    ^ ^ ^                           ^ ^ ^    ^ ^ ^");
        printf("\n         /_-_-_-_| |_-_-_/       Porto de         /_-_-_-_| |_-_-_/                       ------");
        printf("\n-       /  #   # | | # #  /        Lorencia      /  #   # | | # #  /               ----------");
        printf("\n---  --/  #    # | | #   # /--------------------/  #    # | | #   # /         ---------");
        printf("\n -------                -----------------                                --------");
        printf("\n    ------------------------         --------------------------------------");
        printf("\n                                                                          ***");
        printf("\n                                                                            ***");
        printf("\n       -----                                                                  ***");
        printf("\n     ---   ---            # # #  # # #  # # #  # # #  # # #                      ***");
        printf("\n   ---  Bar  ---            #      #      #      #      #                            ***");
        printf("\n     ---    ---            #                             #                             ***");
        printf("\n        ---               #         House of Lords        #                          ***");
        printf("\n                         # # # # # # # # # # # # # # # # # #                          ***");
        printf("\n                                                                                      ***");
        printf("\n                                                                                      ***");
        printf("\n                                                 = ============= =                     ***");
        printf("\n                                               = ================ =                   ***");
        printf("\n             ===============                 /  //                 ||                     ***");
        printf("\n            ||              ||              /  //      High         ||                       ***");
        printf("\n            ||   House of   ||             /  //        Plaza       ||                         ***");
        printf("\n            ||    Commons   ||            /  //                    ||                         ***");
        printf("\n            ||              ||           /  //                     ||                         ***");
        printf("\n            ------------------          /  //                      ||                        ***");
        printf("\n                                       /  //                       ||                     ***");
        printf("\n                                      /  //                        ||                     ***");
        printf("\n                                     /  //         low class        ||                     ***");
        printf("\n                                    ||  ||                         ||                     ***");
        printf("\n                                    ||  ||                         ||                    ***");
        printf("\n      # # # # # # # # #             ||__||_________________________||");
        printf("\n      #               #");
        printf("\n      #   Mercado     #");
        printf("\n      #               #                   ++                 ++");
        printf("\n      #               #                 ^^^^^^             ^^^^^^       ");
        printf("\n      #################                ||    ||           ||    ||" );
        printf("\n                                      //     //++++++++++//     //");
        printf("\n                                     | |     ||++=====++| |    ||+++");
        printf("\n                                   ++++       +++++++++++++       ++++");
        printf("\n                                  +++                             +++");
        printf("\n                                  +++                             +++");
        printf("\n                                 ++++           Palacio           +++");
        printf("\n                                 ++++                             +++");
        printf("\n                                +++++       +++++++++++++++++      +++");
        printf("\n                                +++++       +++++++++++++++++     +++");
        printf("\n");
        printf("\n");
        break;
    
    case 'B':
        printf("\nAnimais comecam nas Florestas de Noria ou Nas Planices Imperiais");
        printf("\n1 - Florestas de Noria");
        printf("\n2 - Planices Imperiais");
        scanf("%d");
        strcpy(player.location, "Templo de Dol-Guldur");
        break;

    case 'D':
        printf("\nAgentes das Trevas comecam no Vale do Fim");
        strcpy(player.location, "Vale do Fim");
        printf("\n\n\n");
        printf("\n                                      --==--      --==--");
        printf("\n                                        --==-    -==--");
        printf("\n                                          -=- = -=-");
        printf("\n                                            --==--");
        printf("\n--==       ==--                               --");
        printf("\n --==     ==--");
        printf("\n  --==   ==--");
        printf("\n   --====--                   Vale do Fim                                        Planices");
        printf("\n     --=--                                                                         Imperiais");
        printf("\n\n\n");
        printf("\n                      ++++++  ++    +++++                  +++  ++ +++");
        printf("\n                         +++++   +++++                      +++   +++");
        printf("\n                            ++++++                           +++ +++");
        printf("\n                             ++++                              +++");
        printf("\n");
        printf("\n                                                             ___         ___"); 
        printf("\n                                                            (___)       (___)");
        printf("\n                                                            (   )       (   )");
        printf("\n                                                                 Regiao dos Lagos");
        printf("\n\n");
        printf("\n+++++++                                                         (_____)    (_____)");
        printf("\n+++++       +++++                                               |     |    |     |"); 
        printf("\n+++       +++++                                                 (     )    (     )");
        printf("\n+++    +++++");
        printf("\n++   ++++  Geleiras de");
        printf("\n++ +++       Cirith Ungol");
        printf("\n+++++");
        break;

    case 'P':
        printf("\nPriests comecam na Cidade de Lorencia");
        strcpy(player.location, "Cidade de Lorencia");
        printf("\n\n\n");
        printf("             ^ ^ ^    ^ ^ ^                           ^ ^ ^    ^ ^ ^");
        printf("\n         /_-_-_-_| |_-_-_/       Porto de         /_-_-_-_| |_-_-_/                       ------");
        printf("\n-       /  #   # | | # #  /        Lorencia      /  #   # | | # #  /               ----------");
        printf("\n---  --/  #    # | | #   # /--------------------/  #    # | | #   # /         ---------");
        printf("\n -------                -----------------                                --------");
        printf("\n    ------------------------         --------------------------------------");
        printf("\n                                                                          ***");
        printf("\n                                                                            ***");
        printf("\n       -----                                                                  ***");
        printf("\n     ---   ---            # # #  # # #  # # #  # # #  # # #                      ***");
        printf("\n   ---  Bar  ---            #      #      #      #      #                            ***");
        printf("\n     ---    ---            #                             #                             ***");
        printf("\n        ---               #         House of Lords        #                          ***");
        printf("\n                         # # # # # # # # # # # # # # # # # #                          ***");
        printf("\n                                                                                      ***");
        printf("\n                                                                                      ***");
        printf("\n                                                 = ============= =                     ***");
        printf("\n                                               = ================ =                   ***");
        printf("\n             ===============                 /  //                 ||                     ***");
        printf("\n            ||              ||              /  //      High         ||                       ***");
        printf("\n            ||   House of   ||             /  //        Plaza       ||                         ***");
        printf("\n            ||    Commons   ||            /  //                    ||                         ***");
        printf("\n            ||              ||           /  //                     ||                         ***");
        printf("\n            ------------------          /  //                      ||                        ***");
        printf("\n                                       /  //                       ||                     ***");
        printf("\n                                      /  //                        ||                     ***");
        printf("\n                                     /  //         low class        ||                     ***");
        printf("\n                                    ||  ||                         ||                     ***");
        printf("\n                                    ||  ||                         ||                    ***");
        printf("\n      # # # # # # # # #             ||__||_________________________||");
        printf("\n      #               #");
        printf("\n      #   Mercado     #");
        printf("\n      #               #                   ++                 ++");
        printf("\n      #               #                 ^^^^^^             ^^^^^^       ");
        printf("\n      #################                ||    ||           ||    ||" );
        printf("\n                                      //     //++++++++++//     //");
        printf("\n                                     | |     ||++=====++| |    ||+++");
        printf("\n                                   ++++       +++++++++++++       ++++");
        printf("\n                                  +++                             +++");
        printf("\n                                  +++                             +++");
        printf("\n                                 ++++           Palacio           +++");
        printf("\n                                 ++++                             +++");
        printf("\n                                +++++       +++++++++++++++++      +++");
        printf("\n                                +++++       +++++++++++++++++     +++");
        printf("\n");
        printf("\n");
        break;
    
    default:
        break;
    }


    printf("\n\n");
    return 0;

}

int dice_3() {
    int num;
    num = (rand()%3)+1;
    printf("\n[D3]=[%d]", num);
    return num;
}

int dice_6() {
    int num;
    num = (rand()%6)+1;
    printf("\n[D6]=[%d]", num);
    return num;
}

int dice_10() {
    int num;
    num = (rand()%10)+1;
    printf("\n[D10]=[%d]", num);
    return num;
}

int dice_20() {
    int num;
    num = (rand()%20)+1;
    printf("\n[D20]=[%d]", num);
    return num;
}

char coin() {
    int num;
    num = (rand()%2)+1;
    printf("\n[Coin]=[%d]", num);
    if (num == 1)
    {
        printf("\n[%d]=[Cara]", num);
    }
    else if (num == 2)
    {
        printf("\n[%d]=[Coroa]", num);
    }
    return num;
}