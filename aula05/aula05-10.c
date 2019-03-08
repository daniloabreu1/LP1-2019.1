#include <stdio.h>
#include <math.h>
main(){
    int o,a,b;
    do{
        system("cls");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao Inteira\n");
        printf("5 - Sair\n");
        printf("Opcao >> ");
        scanf("%d",&o);
        if(o>=1&&o<=4){
            printf("Digite dois valores para serem operados >> ");
            scanf("%d %d",&a,&b);
        }
        switch(o){
            case 1:
                printf("\n%d + %d = %d\n\n",a,b,a+b);break;
            case 2:
                printf("\n%d - %d = %d\n\n",a,b,a-b);break;
            case 3:
                printf("\n%d x %d = %d\n\n",a,b,a*b);break;
            case 4:
                printf("\n%d / %d = %d\n\n",a,b,a/b);break;
            case 5:
                break;
            default:
                printf("\nOpcao Invalida\n\n");
        }
        system("pause");
    }while(o!=5);
}
