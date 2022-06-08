Algoritmo sin_titulo
	importetotal = 0
	enviosmen = 0
	Para repartidor<-1 Hasta 25 Con Paso 1 Hacer
		enviosacum = 0
		Escribir "repartidor ",repartidor
		Escribir "Dia:"
		Leer dia
		Mientras dia!=0 Hacer
			Escribir "Envios: "
			Leer envios
			enviosacum = enviosacum+envios
			Escribir "Importe:"
			Leer importe
			importetotal = importetotal+importe
			Escribir "Dia:"
			Leer dia
		FinMientras
		Si repartidor==1 Entonces
			enviosmen = enviosacum
			reparmen = repartidor
		SiNo
			Si (enviosacum<=enviosmen)&&(enviosacum!=0) Entonces
				enviosmen = enviosacum
				reparmen = repartidor
			FinSi
		FinSi
		Si enviosacum>70 Entonces
			Escribir "repartidor ",repartidor," tiene mas de 70 envios"
		FinSi
	FinPara
	Escribir "Importe total entre todos: ", importetotal
	Escribir "Repartidor de menos envios: ",reparmen
FinAlgoritmo
