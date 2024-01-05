typedef struct Matriz matriz;

Matriz * iniciar(int l, int c);

void alterar(Matriz *m, int x, int i, int j);
int *obter_linha(Matriz *m, int i);
int *obter_coluna(Matriz *m, int i);
