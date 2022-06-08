Algoritmo sin_titulo
	// 10) Una empresa registró las ventas que realizó durante el mes anterior. Para cada venta se
	// tienen los siguientes datos:
	// - Número de artículo (1 a 30)
	// - Día (1 a 31)
	// - Cantidad de unidades vendidas
	// - Recaudación del día
	// Este lote finaliza con un registro con número de artículo igual a cero. En el lote anterior
	// no aparecen registros de los artículos que por alguna razón no se hayan vendido algún
	// o ningún día del mes.
	// Los registros están agrupados por número de artículo.
	// Se pide determinar e informar:
	// a) El número del artículo más vendido en total considerando las ventas de la primera
	// quincena. Se considera primera quincena los días del 1 al 15 inclusive.
	// b) Para cada uno de los artículos informar la recaudación total considerando todas las
	// ventas del mes.
	// c) Informar la semana en la que se vendió mayor cantidad de artículos en total. Se
	// considera:
	// Primera Semana: días 1 al 7. Segunda Semana: días 8 al 15.
	// Tercera Semana: días 16 al 23. Cuarta Semana: días 24 al 31.
	cont = 0
	Escribir 'Numero de articulo'
	Leer nroArticulo
	mayorq = 0
	semana1 = 0
	semana2 = 0
	semana3 = 0
	semana4 = 0
	cont = cont+1
	paso15 = falso
	Mientras (nroArticulo!=0) Hacer
		total = 0
		quincena = 0
		anterior = nroArticulo
		Mientras nroArticulo==anterior Hacer
			cont = cont+1
			Escribir "Dia: "
			Leer dia
			Escribir "Recaudacion del Dia: "
			Leer recaudacionDia
			total = total+recaudacionDia
			Escribir "Cantidad de unidades:"
			Leer cantUni
			Si (dia>=1)&&(dia<=15) Entonces
				paso15 = verdadero
				nro = nroArticulo
				quincena = quincena+cantUni
			FinSi
			Si (dia>=1)&&(dia<=7) Entonces
				semana1 = semana1+cont
			SiNo
				Si (dia>=8)&&(dia<=15) Entonces
					semana2 = semana2+cont
				SiNo
					Si (dia>=16)&&(dia<=23) Entonces
						semana3 = semana3+cont
					SiNo
						Si (dia>=24)&&(dia<=31) Entonces
							semana4 = semana4+cont
						FinSi
					FinSi
				FinSi
			FinSi
			Escribir 'numero de articulo'
			num = nroArticulo
			Leer nroArticulo
		FinMientras
		Si quincena>mayorq Entonces
			numArti = nro
			mayorq = quincena
		FinSi
		Escribir "Total de articulo ",num,": ",total
	FinMientras
	Si paso15==verdadero Entonces
		Escribir "El articulo mas vendido en la primera quincena es el articulo ",numArti,": $",quincena
	FinSi
	Si semana1>semana2 Entonces
		mayor = semana1
		Mventas = 1
	SiNo
		mayor = semana2
		Mventas = 2
	FinSi
	Si semana3>mayor Entonces
		mayor = semana3
		Mventas = 3
	SiNo
		Si semana4>mayor Entonces
			mayor = semana4
			Mventas = 4
		FinSi
	FinSi
	Escribir "Semana con mas ventas en total: ",Mventas
FinAlgoritmo
