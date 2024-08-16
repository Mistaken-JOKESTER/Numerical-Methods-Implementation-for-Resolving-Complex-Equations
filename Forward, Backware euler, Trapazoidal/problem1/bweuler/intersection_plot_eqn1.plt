# Set the range for x-axis
# Set the terminal to pdf
set term pdf

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
set output 'bweuler_1.pdf'
plot f(x) with lines linestyle 2 title 'Real Plot', 'bweuler_1.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"

set output 'bweuler_2.pdf'
plot f(x) with lines linestyle 2 title 'Real Plot', 'bweuler_2.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"

set output 'bweuler_3.pdf'
plot f(x) with lines linestyle 2 title 'Real Plot', 'bweuler_3.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"

set output 'bweuler_4.pdf'
plot f(x) with lines linestyle 2 title 'Real Plot', 'bweuler_4.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"