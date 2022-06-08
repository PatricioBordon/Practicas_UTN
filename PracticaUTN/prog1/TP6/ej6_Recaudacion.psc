Algoritmo sin_titulo
	Dimension codArt[10]
	Dimension precioArt[10]
	Dimension montoArt[10]
	Escribir '********'
	Escribir 'Precios'
	Escribir '********'
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		montoArt[i] = 0
	FinPara
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		codArt[i] = i+101
	FinPara
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir 'Articulo ',codArt[i]
		Leer precio
		precioArt[i] = precio
	FinPara
	nroventa = 0
	Escribir 'Numero de Articulo (Ingresar de 101 a 110)'
	Leer nroart
	Mientras nroart>0 Hacer
		nroventa = nroventa+1
		Escribir 'Venta ',nroventa
		Para i<-0 Hasta 9 Con Paso 1 Hacer
			Si nroart==codArt[i] Entonces
				Escribir 'COD',codArt[i]
				Escribir 'Cantidad'
				Leer cantidad
				monto = cantidad*precioArt[i]+montoArt[i]
				montoArt[i] = monto
			FinSi
		FinPara
		Escribir 'Recaudacion de la venta ',nroventa," $",monto
		Escribir 'Numero de Articulo (Ingresar de 101 a 110)'
		Leer nroart
	FinMientras
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		codArt[i] = i+101
		Escribir 'Monto del Articulo ',codArt[i],': $',montoArt[i]
	FinPara
FinAlgoritmo
