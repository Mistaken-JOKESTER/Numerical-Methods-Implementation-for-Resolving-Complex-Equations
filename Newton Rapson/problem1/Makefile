#make file - this is a comment section
 
CC=gcc  #compiler
TARGET=main #target file name

all: prog

# coplie the program
prog: 
	$(CC) main.c prob1.c -o main

# run the program and plot the graph for final float value of x and final double of x 
run:
	main.exe

#plot the graphs
plot:
	gnuplot intersection_plot.plt

.PHONY: clean
clean:
	$(RM) main
