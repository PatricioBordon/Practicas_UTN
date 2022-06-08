#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED
///Prototiupos
int unJugador();
int puntuacionMasAlta();
void dosJugadores();
void reiniciar();
void borrarPantalla(void);
void cargarVector(int v[], int tam);
///Funciones
int unJugador(){
    string nombre1;
    char continuar;
    int cantidadTiro, nroRonda=1, nroLanzamiento=1, pos[6];
    cout<<"Hola!"<<endl;
    cout<<"Ingresa tu nombre: "; cin>>nombre1; //Ingresa el nombre
    system("cls");
    do{
    cout<<"Turno de "<<nombre1<<" | "<<"Ronda Nº "<<nroRonda<<" | "<<"Puntaje Total: "<<puntajeAcum()<<" Puntos"<<endl<<endl;
    cout<<"LANZAMIENTO Nº "<<nroLanzamiento<<endl;
    cout<<dados();///aca se hace la magia
    cout<<"¿CONTINUAR LANZANDO (S/N)? ";cin>>continuar;
    if((continuar=='s')||(continuar=='S')){
        cout<<"¿Cuantos dados volves a tirar?: ";cin>>cantidadTiro;
        while((cantidadTiro<1)||(cantidadTiro>6)){
            cout<<"Cantidad incorrecta, debes tirar entre 1 y 6 dados inclusive, intenta otra vez"<<endl;
            cout<<"¿Cuantos dados volves a tirar?: ";cin>>cantidadTiro;
        }
        cout<<"¿Cual es? ";
        if(cantidadTiro==1){///aca tiro la cantidad del/de los dados
            cargarVector(pos,cantidadElegida]);
            ///paso la unica posicion a la funcion de tiro
        }
        else{
            cout<<"¿Cuales son? ";
            cargarVector(pos,cantidadElegida]);
        }


    }
    ///SEGUN CRITERIOS DEL JUEGO MOSTRAR PUNTAJE DE LA RONDA
    nroRonda=nroRonnda+1;
}while((continuar=='s')||(continuar=='S')||nroRonda<=10)
void reiniciar(){

}
puntuacionMasAlta(){
    int a=10;
    int b=11;
    return (a*b);
}

void borrarPantalla(void){
 system ("cls");
}

void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<endl<<"Dado Nº: ";
        cin>>v[i];
    }
}

#endif // CABECERA_H_INCLUDED
