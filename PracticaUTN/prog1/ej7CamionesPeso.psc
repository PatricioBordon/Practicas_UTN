Algoritmo sin_titulo
	///7) Hacer un programa para ingresar los valores de los pesos de distintas encomiendas que se deben enviar 
	///a distintos clientes y que finaliza cuando se ingresa un peso negativo. Se deben agrupar las encomiendas en camiones que pueden transportar 
	///hasta 200 kilos en total.
	///Ejemplo: 10, 20, 140, 70, 100, 40, 10, 50, 80, 90, 30, 40, 50, -10
	///Cami�n: 1 2 3 4 5
	///Se pide determinar e informar:
	///a) El n�mero de cada cami�n y peso total de encomiendas. Cami�n 1: 170 kg, Cami�n 2: 170 kg, etc.
	///b) El n�mero de cami�n que transporta mayor cantidad de encomiendas. En el ejemplo anterior ser�a el Cami�n 3 con 4 encomiendas.
	camion = 0
	mayor = 0
	acum = 0
	Leer peso
	Mientras peso>=0 Hacer
		cant = 0
		Mientras (peso+acum<=200)&(peso>=0) Hacer
			cant = cant+1
			acum = acum+peso
			Leer peso
		FinMientras
		camion = camion+1
		Si cant>=mayor Entonces
			mayor = cant
			nrocamion = camion
		FinSi
		Escribir 'Camion ',camion,': ',acum,'kg'
		Leer peso
	FinMientras
	Escribir 'El camion ',nrocamion,' transporta mayor cantidad de encomiendas'
FinAlgoritmo
