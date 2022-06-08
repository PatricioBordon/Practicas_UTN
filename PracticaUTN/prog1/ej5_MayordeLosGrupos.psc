Algoritmo sin_titulo
	///Se dispone de una lista de 10 grupos de números enteros separados entre ellos por
	///ceros. Se pide determinar e informar:
	///a) Calcular el promedio de valores de cada grupo.
	///b) Determinar e informar el valor mínimo de todo los grupos, indicando en que grupo se
	///encontró y su posición relativa en el mismo.
	///c) El mayor de los promedios y a que grupo pertenecía.
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		acum = 0
		cant = 0
		pos = 0
		posmin = 0
		Leer n
		minimo = n
		pos = pos+1
		Mientras n<>0 Hacer
			acum = acum+n
			cant = cant+1
			Si n<=minimo Entonces
				minimo = n
				posmin = pos
			FinSi
			Leer n
			pos = pos+1
		FinMientras
		prom = acum/cant
		Si i==1 Entonces
			maximo = prom
		SiNo
			Si prom>maximo Entonces
				maximo = prom
				grupomax = i
			FinSi
		FinSi
		Escribir 'Promedio de grupo ',i,': ',prom
		Escribir 'Valor minimo de grupo ',i,': ',minimo,' ||| posicion: ',posmin
	FinPara
	Escribir 'Maximo de los promedios: ',prom
	Escribir 'Pertenecientes al grupo ',grupomax
FinAlgoritmo
