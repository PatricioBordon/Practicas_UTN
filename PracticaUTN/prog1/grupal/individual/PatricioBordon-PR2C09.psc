Algoritmo sin_titulo
	Escribir "establecer,en,10,los,niveles,devuelta"
	Escribir '+------------+'
	Escribir '| Faure Bros |'
	Escribir '+------------+'
	pPuesto = 0
	sPuesto = 0
	tPuesto = 0
	primero = verdadero
	segund = verdadero
	tercer = verdadero
	Escribir 'Ingresar numero de participante:'
	Escribir 'Ingresar -1 para mostar resultados finales'
	Escribir '---------------------------------'
	Leer nroParticipante
	Escribir '---------------------------------'
	Mientras nroParticipante!=-1 Hacer
		total = 0
		Para niveles<-1 Hasta 3 Con Paso 1 Hacer
			Escribir 'Tiempo demorado en el nivel ',niveles,' (en minutos) '
			Escribir '---------------------------------'
			Leer tiempo
			total = total+tiempo
		FinPara
		Si primero==verdadero Entonces
			menor = total
			primero = falso
			primerPuesto = nroParticipante
		SiNo
			Si (segund=verdadero) Entonces
				menor2 = total
				segund = falso
				Si menor2<menor Entonces
					aux = menor
					menor = menor2
					menor2 = aux
					segundoPuesto = primerPuesto
					primerPuesto = nroParticipante
				SiNo
					segundoPuesto = nroParticipante
				FinSi
			SiNo
				Si (tercer=verdadero) Entonces
					menor3 = total
					tercer = falso
					Si menor3<menor Entonces
						tercerPuesto = segundoPuesto
						segundoPuesto = primerPuesto
						primerPuesto = nroParticipante
						aux3 = menor
						menor = menor3
						menor3 = menor2
						menor2 = aux3
					SiNo
						Si menor3<menor2 Entonces
							auxiliar = segundoPuesto
							segundoPuesto = nroParticipante
							tercerPuesto = auxiliar
							aux2 = menor2
							menor2 = menor3
							menor3 = aux2
						SiNo
							tercerPuesto = nroParticipante
						FinSi
					FinSi
				SiNo
					Si (cuarto==verdadero) Entonces
						menor4 = total
						cuarto = falso
						Si menor4<menor Entonces
							aux4 = menor
							menor = menor4
							menor4 = menor2
							menor2 = menor3
							menor3 = aux4
							tercerPuesto = segundoPuesto
							segundoPuesto = primerPuesto
							primerPuesto = nroParticipante
						SiNo
							Si menor4<menor2 Entonces
								auxiliar = segundoPuesto
								segundoPuesto = nroParticipante
								tercerPuesto = auxiliar
								aux5 = menor4
								menor4 = menor3
								menor3 = menor2
								menor2 = aux5
							SiNo
								Si menor4<menor3 Entonces
									tercerPuesto = nroParticipante
									aux6 = menor4
									menor4 = menor3
									menor3 = aux6
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		Escribir 'Ingresar numero del siguiente participante:'
		Escribir 'Ingresar -1 para mostar resultados finales'
		Escribir '---------------------------------'
		Leer nroParticipante
		Escribir '---------------------------------'
	FinMientras
	Escribir menor
	Escribir menor2
	Escribir menor3
FinAlgoritmo
