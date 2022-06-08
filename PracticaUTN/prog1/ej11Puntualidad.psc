Algoritmo sin_titulo
	// 11) Una empresa a�rea registr� los vuelos durante el mes pasado. Los registros est�n
	// agrupados por n�mero de avi�n. Cada registro contiene:
	// - N�mero de avi�n (1 a 50)
	// - D�a del vuelo (1 a 31)
	// - Cantidad de asientos vendidos
	// - Cantidad de asientos no vendidos
	// - Minutos de puntualidad (> 0 si lleg� atrasado, 0 si lleg� en hora, < 0 si se adelant�)
	// 5
	// El lote finaliza con un registro con n�mero de avi�n igual a cero.
	// Los registros est�n agrupados, no ordenados, por n�mero de avi�n. En el lote anterior no
	// aparecen registros de los aviones que por alguna raz�n no hayan salido alg�n o
	// ning�n d�a del mes.
	// Se pide determinar e informar:
	// a) El n�mero de avi�n que tuvo menor porcentaje de asientos ocupados respecto al total de
	// asientos a ocupar, considerando todos los vuelos que haya efectuado en el mes.
	// b) El n�mero de avi�n que sum� mayor cantidad de minutos de atraso.
	// c) Informar el d�a y n�mero de avi�n que haya tenido la mayor cantidad individual de
	// minutos de atraso
	Escribir 'Numero de avion'
	Leer nAvion
	menor = 0
	aux = 0
	ma = 0
	Mientras (nAvion!=0) Hacer
		puntual = 0
		adelantado = 0
		porcentaje = 0
		atrasado = 0
		anterior = nAvion
		capacidad = 0
		eld = 0
		numeri = 0
		Mientras nAvion!=0 Hacer
			Escribir 'Dia'
			Leer dia
			Escribir 'Asientos vendidos'
			Leer AsiVend
			Escribir 'Asientos sin vender'
			Leer AsiNoVend
			Escribir 'Puntualidad'
			Leer puntualidad
			Si puntualidad>0 Entonces
				adelantado = adelantado+puntualidad
			SiNo
				Si puntualidad<0 Entonces
					puntu = puntualidad*(-1)
					atrasado = atrasado+puntualidad
					avionAtras = nAvion
				SiNo
					puntual = puntual+puntualidad
				FinSi
			FinSi
			Si puntu>ma Entonces
				ma = puntu
				eld = dia
				numeri = nAvion
			FinSi
			capacidad = capacidad+AsiVend+AsiNoVend
			Escribir 'Numero de avion'
			Leer nAvion
		FinMientras
		porcentaje = AsiVend*100/capacidad
		Si (porcentaje>mayor)&&(aux==0) Entonces
			menor = porcentaje
			aux = 1
			numer = anterior
		SiNo
			Si porcentaje>menor Entonces
				menor = porcentaje
				numer = anterior
			FinSi
		FinSi
		anterior = nAvion
	FinMientras
	Escribir 'Avion con menor porcentaje de asientos ocupados: ',numer
	Escribir 'Avion con mayor cantidad de minutos atrasados: ',avionAtras
	Escribir 'Avion con la mayor cantidad individual de minutos de atraso: numero ',numeri
	Escribir 'Dia ',eld
FinAlgoritmo
