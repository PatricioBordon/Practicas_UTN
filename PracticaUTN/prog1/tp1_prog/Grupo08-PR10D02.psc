Algoritmo sin_titulo
	Leer n
	factorial1 = 1
	Para i<-1 Hasta n Con Paso 1 Hacer
		factorial1 = factorial1*i
	FinPara
	Leer r
	factorial2 = 1
	Para j<-1 Hasta r Con Paso 1 Hacer
		factorial2 = factorial2*j
	FinPara
	resta = n-r
	factorial3 = 1
	Para k<-1 Hasta resta Con Paso 1 Hacer
		factorial3 = factorial3*k
	FinPara
	multi = factorial2*factorial3
	division = factorial1/multi
	Escribir division
	i = 1
	Escribir 'Nota de grupo ',i
	Leer num
	mayor = num
	mejor = i
	Para i<-2 Hasta division Con Paso 1 Hacer
		Escribir 'Nota de grupo ',i
		Leer num
		Si num>mayor Entonces
			mayor = num
			mejor = i
		FinSi
	FinPara
	Escribir 'Mejor grupo:'
	Escribir 'Grupo ',mejor
FinAlgoritmo
