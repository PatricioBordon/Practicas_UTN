Algoritmo sin_titulo
	///1) Una agencia de viajes posee la informaci�n de los cinco destinos tur�sticos que
	///comercializa en cada uno de los meses del a�o 2019. Por cada destino y mes registra:
	///- C�digo de destino tur�stico (entero)
	///- N�mero de mes (entero entre 1 y 12)
	///	- Cantidad de pasajes vendidos (entero)
	///- Total recaudado (float)
	///La informaci�n se encuentra agrupada por destino tur�stico pero no se encuentra ordenada
	///bajo ning�n criterio.
	///Se pide calcular e informar:
	///A) La cantidad total de pasajes vendidos en el a�o
	ventatotal = 0
	Para destinos<-1 Hasta 5 Con Paso 1 Hacer
		ventapordestino = 0
		Escribir "codigo de destino: "
		Leer cod
		Para mes<-1 Hasta 12 Con Paso 1 Hacer
			Escribir "mes"
			Leer numMes
			Escribir "Pasajes vendidos"
			Leer cantpas
			Escribir "Total recaudado"
			Leer total
			ventatotal = cantpas+ventatotal
			ventapordestino = ventapordestino+total
		FinPara
		Escribir 'venta de destino ',cod,': $',ventapordestino
	FinPara
	Escribir 'Cantidad total de pasajes entre todos los destinos: ',ventatotal
FinAlgoritmo
