#make file - this is a comment section
 
CC=gcc  #compiler
TARGET=main #target file name

all: prog

# coplie the program
prog: 
	$(CC) main.c prob2.c -o main

# run the program and plot the roots of equation
run:
	main.exe

#plot the graphs
plot_eqn1:
	gnuplot intersection_plot_eqn1.plt
plot_eqn2:
	gnuplot intersection_plot_eqn2.plt
plot_eqn3:
	gnuplot intersection_plot_eqn3.plt

.PHONY: clean
clean:
	$(RM) main
