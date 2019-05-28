typedef struct {
    int valor;
}DADO;

typedef struct elemento{
    DADO d;
    struct elemento *prox;
}ELEM;

typedef struct elemento* Lista;
Lista* criarLista();
void liberarLista(Lista *li);
int tamanhoLista(Lista *li);
void inserir(Lista *li, DADO d);
void remover(Lista *li, int num);
void imprimirLista(Lista *li);
