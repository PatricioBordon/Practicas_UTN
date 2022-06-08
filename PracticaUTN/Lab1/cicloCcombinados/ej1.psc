Algoritmo sin_titulo
	///1) Una agencia de viajes posee la información de los cinco destinos turísticos que
	///comercializa en cada uno de los meses del año 2019. Por cada destino y mes registra:
	///- Código de destino turístico (entero)
	///- Número de mes (entero entre 1 y 12)
	///	- Cantidad de pasajes vendidos (entero)
	///- Total recaudado (float)
	///La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
	///bajo ningún criterio.
	///Se pide calcular e informar:
	///A) La cantidad total de pasajes vendidos en el año
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
