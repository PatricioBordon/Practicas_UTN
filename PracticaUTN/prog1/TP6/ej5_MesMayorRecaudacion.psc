Algoritmo sin_titulo
	dimension meses[12]
	Para i<-0 Hasta 11 Con Paso 1 Hacer
		meses[i] = 0
	FinPara
	Escribir "MES"
	Leer mes
	Mientras mes!=0 Hacer
		Escribir "MONTO"
		Leer monto
		meses[mes-1]=meses[mes-1]+monto
		Escribir "MES"
		Leer mes
	FinMientras
	mesMayor = meses[0]
	mayor = 1
	Para i<-1 Hasta 11 Con Paso 1 Hacer
		Si meses[i]>mesMayor Entonces
			mesMayor = meses[i]
			mayor = i+1
		FinSi
	FinPara
	Escribir "El mes que mas recaudo fue el mes ", mayor
FinAlgoritmo
