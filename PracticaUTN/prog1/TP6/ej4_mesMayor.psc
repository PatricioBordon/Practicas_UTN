Algoritmo sin_titulo
	Dimension meses[12]
	Escribir 'FAURE KIOSCO'
	Para i<-0 Hasta 11 Con Paso 1 Hacer
		meses[i] = 0
	FinPara
	Escribir "MES: "
	Leer MES
	Repetir
		Escribir "MONTO VENTA:"
		Leer monto
		// ESTO ES UN CONTADOR 
		meses[MES-1]=meses[MES-1]+1
		Escribir "MES: "
		Leer MES
	Mientras Que MES!=0
	// este es el primer mes
	mayorMes = meses[0]
	mayor = 1
	Para i<-1 Hasta 11 Con Paso 1 Hacer
		Si meses[i]>mayorMes Entonces
			mayorMes = meses[i]
			mayor = i+1
		FinSi
	FinPara
	Escribir "Mes con mas ventas: ",mayor
FinAlgoritmo
