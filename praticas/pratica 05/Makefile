all: limpa compila roda

compila: comando_if.c
	gcc comando_if.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out