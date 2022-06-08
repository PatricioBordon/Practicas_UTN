Algoritmo sin_titulo
	///3) Se dispone de una lista de 10 grupos de números enteros separados entre ellos por
	///ceros. Se pide determinar e informar:
	///a) El número de grupo con mayor porcentaje de números impares positivos respecto al total
	///de números que forman el grupo. Se informa 1 resultado al final.
	///		grupo no hubiera números primos informarlo con un cartel aclaratorio. Se informan 2
	///b) Para cada grupo el último número primo y en qué orden apareció en ese grupo, si en un
	///	resultados por cada grupo.
	///c) Informar cuantos grupos están formados por todos números ordenados de mayor a
	///menor. Se informa 1 resultado al final.
	cant = 0
	Para grupos<-1 Hasta 10 Con Paso 1 Hacer
		primo = falso
		ordenado = verdadero
		pos = 0
		impar = 0
		cantidad = 0
		mayor = 0
		Leer elementos
		Mientras elementos!=0 Hacer
			mayor = elementos
			Si !(elementos>mayor) Entonces
				ordenado = falso
			FinSi
			pos = pos+1
			cont = 0
			Para i<-1 Hasta elementos Con Paso 1 Hacer
				Si (elementos%i==0) Entonces
					cont = cont+1
				FinSi
			FinPara
			Si cont==2 Entonces
				primo = verdadero
				posicion = pos
				pri = elementos
			FinSi
			cantidad = cantidad+1
			Si (elementos>0)&&(elementos%2!=0) Entonces
				impares = impares+1
			FinSi
			Leer elementos
		FinMientras
		Si ordenado=verdadero Entonces
			cant = cant+1
		FinSi
		Si primo==verdadero Entonces
			Escribir 'Grupo ',grupos,': '
			Escribir 'Primo: ',pri
			Escribir 'Posicion: ',posicion
		SiNo
			Escribir 'El grupo ',grupos,' no tiene numeros primos'
		FinSi
		porcentaje = impares*100/cantidad
		Si grupos==1 Entonces
			porcentajemayor = porcentaje
			grupomayor = grupos
		SiNo
			Si porcentaje>porcentajemayor Entonces
				porcentajemayor = porcentaje
				grupomayor = grupos
			FinSi
		FinSi
	FinPara
	Escribir 'Grupo con mayor porcentaje de numeros positivos: ',grupomayor
	Escribir "cantidad de grupos con numeros ordenados de mayor a menor: ",cant
FinAlgoritmo
