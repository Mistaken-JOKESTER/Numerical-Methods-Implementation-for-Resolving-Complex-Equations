# Set the range for x-axis
# Set the terminal to pdf
set term pdf

set xrange [0:10]

# Define the functions
f(x) = 2*cos(2*x) + 3*sin(2*x) + 1

# Set line style
set style line 1 linecolor rgb 'blue' linewidth 2
set style line 2 linecolor rgb 'red' linewidth 2

# Set labels and title
set xlabel "x"
set ylabel "y"

# Plot the functions
set output 'trz_1.pdf'
plot f(x) with lines linestyle 2 title 'Real Plot', 'trz_1.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"

set output 'trz_2.pdf'
plot f(x) with lines linestyle 2 title 'Real Plot', 'trz_2.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"

set output 'trz_3.pdf'
plot f(x) with lines linestyle 2 title 'Real Plot', 'trz_3.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"

set output 'trz_4.pdf'
plot f(x) with lines linestyle 2 title 'Real Plot', 'trz_4.dat' using 1:2 with linespoints pointtype 2 pointsize 0.3 title 'Calculated plot'
pause -1 "Press any key to close the plot"