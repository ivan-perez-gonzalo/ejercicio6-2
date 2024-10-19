#include <studio.h>
#include <string.h>
typedef struct {
	char normbre [20];
	int socket;
} Conectado;

typedef struct {
	Conectado conectados [20];
	int num;
} ListaConectados;

int Pon (ListaConectados *lista, char nombre[20], int socket){
	if(lista->num == 100)
		return -1;
	else {
		strcpy(lista->conectados[lista->num].nombre, nombre);
		lista->conectados[lista->num].socket, socket;
		lista->num++;
		return 0;
		
	}
	
		
int Eliminar(ListaConectados *lista, char nombre[20]) {
	int pos = DamePosicion(lista,nombre);
	if (pos==-1)
		return -1;
	else {
		int i;
		for (i =pos; i < lista->num-1;i++)
		{
			lista->conectados[i] = lista->conectados[i+1]
			stpcpy(lista->conectados[i].nombre, lista->conectados[i+1].nombre);
			lista->conectados[i].socket = lista->conectados[i+1].socket
		}
		lista->num--;
		return 0;
	}
		
int DamePosicion(ListaConectados *lista, char nombre[20]) {
	int i =0;
	int encontrado =0;
	while ((i<lista->num)&& !encontrado)
	{
		if (strcmp(lista->conectados[i].nombre,nombre)==0)
			encontrado =1;
		if (!encontrado)
			i=i+1:
	}
	if (encontrado)
		return i;
	else
		-1;
	
}


		
void DameConectados(ListaConectados *lista, char conectaods[300]) {
	sprintf(conectados,"%d",lista->num);
	int i;
	for (i=0;i<lista->num;i++)
		sprintf(conectados,"%s/%s", conectados,lista.conectados[i].nombre);
}


int main()int argc, char *argv[]){
	ListaConectados miLista;
	miLista.num = 0
	res = Pon (&miLista, "Juan", 5);
	
	if (res ==-1)
		printf("No se puede añadir, lista llena");
	else
		printf("Añadido");
	int pos = DamePosicion (&miLista, "ivan")
	if (pos != -1)
		printf("El sobket de ivan es : %d", miLista.conectados[pos].socket)
	else 
		printf("Ese usuario no esta en la lista");
	res = Eliminar(&miLista, "ivan");
	if (res != -1)
		printf("No esta")
	else 
		printf("Eliminado");
	
	char misconectados[300];
	DameConectados(&miLista,misconectados);
	printf("Resultado: %s\n", misconectados);
	char *p=strtok(misconectados,"/");
	int n= atoi(p);
	int i;
	for(i=0;i<n;i++){
		char nombre[20];
		p=strtok(NULL ,"/");
		stpcpy(nombre,p);
		printf("Conectado: %s\n", nombre);
	}
	return 0;
	
	
}