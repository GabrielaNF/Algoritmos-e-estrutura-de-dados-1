typedef struct {
char nome_disc[1001];
int RA;
float notas[3];
}NotaDisciplina;
NotaDisciplina cadastrar(char nome[], int RA, float notas[]){
NotaDisciplina disc;
strcpy(nd .nome_disc, nome_disc);
nd.RA = RA;
nd.notas[0] = notas[0];
nd.notas[1] = notas[1];
nd.notas[2] = notas[2];
return disc;
}
int main() {
NotaDisciplina nd;
char nome_disc[101];
int RA;
float notas[3];

nd = cadastrar(nome_disc, RA, notas);
}