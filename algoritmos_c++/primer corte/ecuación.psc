Algoritmo Ecuacion
	Definir a, b, c Como Real
	Definir delta, R, S, x1, x2 Como Real
	Escribir 'Ingrese a:'
	Leer a
	Escribir 'Ingrese b:'
	Leer b
	Escribir 'Ingrese c:'
	Leer c
	delta <- b*b-4*a*c
	Si delta>0 Entonces
		x1 <- (-b+Raiz(delta))/(2*a)
		x2 <- (-b-Raiz(delta))/(2*a)
		Escribir 'x1 =', x1
		Escribir 'x2 =', x2
	SiNo
		Si delta=0 Entonces
			x1 <- -b/(2*a)
			Escribir 'Raíz real doble: x =', x1
		SiNo
			S <- -b/(2*a)
			R <- Raiz(-delta)/(2*a)
			Escribir 'Raíces complejas:'
			Escribir 'x1 =', S, '+', R, 'i'
			Escribir 'x2 =', S, '-', R, 'i'
		FinSi
	FinSi
FinAlgoritmo
