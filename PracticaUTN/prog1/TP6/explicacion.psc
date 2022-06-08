Algoritmo sin_titulo
	Dimension vNumeros[8]
	Para i<-0 Hasta 7 Con Paso 1 Hacer
		vNumeros[i] = azar(100)+1
	FinPara
	Para i<-0 Hasta 7 Con Paso 1 Hacer
		Escribir vNumeros[i]
		verificarMostrarPar(vNumeros[i])
	FinPara
	MostrarPar()
	verificarMostrarPar(180)
	Escribir EsPar(33)
FinAlgoritmo

Funcion MostrarPar
	Escribir 'Valor: '
	Leer n
	verificarMostrarPar(n)
FinFuncion

Funcion verificarMostrarPar(n)
	Si EsPar(n) Entonces
		Escribir 'Es par'
	SiNo
		Escribir 'No es par'
	FinSi
FinFuncion

Funcion resul = EsPar(n)
	Si n%2==0 Entonces
		resul = verdadero
	SiNo
		resul = falso
	FinSi
FinFuncion
