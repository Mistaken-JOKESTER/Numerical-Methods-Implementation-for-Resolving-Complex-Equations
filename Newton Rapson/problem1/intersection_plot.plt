# Set the range for x-axis
set term pdf
set xrange [-10:10]

# Set labels and title
set xlabel "x"
set ylabel "y"
set title "Intersection of f(x) and g(x)"

# Define the functions
f(x) = 0
g(x) = tanh(x) - 1.2*cos(x)
datafile = 'convergence.txt'

# Plot the functions
set output 'predicted_2.pdf'
plot f(x) title "f(x) = 0", g(x) title "g(x) = tanh(x) - 1.2*cos(x)", datafile using 1:2 with linespoints title "Convergence Path" linecolor 'red' 

pause -1 "Press any key to close the plot"
