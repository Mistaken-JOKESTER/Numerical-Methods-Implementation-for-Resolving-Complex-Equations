# Set the range for x-axis
set xrange [0:20]

# Define the functions
f(x) = (2 - 3*x*x) * exp(-1*x/2)

# Set line style
set style line 1 linecolor rgb 'blue' linewidth 2
set style line 2 linecolor rgb 'red' linewidth 2

# Set labels and title
set xlabel "x"
set ylabel "y"

# Plot the functions
plot f(x) with lines linestyle 2 title 'Real Plot', 'fweuler_1.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"

plot f(x) with lines linestyle 2 title 'Real Plot', 'fweuler_2.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"

plot f(x) with lines linestyle 2 title 'Real Plot', 'fweuler_3.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"

plot f(x) with lines linestyle 2 title 'Real Plot', 'fweuler_4.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"