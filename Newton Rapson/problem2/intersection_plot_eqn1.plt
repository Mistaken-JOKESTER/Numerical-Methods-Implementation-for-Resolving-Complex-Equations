# Set the range for x-axis
set xrange [-6:2]

# Define the functions
f(x) = (2*x*x*x) + (5*x*x) - (22*x) + 15
g(x) = 0

# Plot the functions
plot f(x) title "f(x) = 2x^3+5x^2-22x+15", g(x) title "g(x) = 0", '-' with points pointtype 7 pointsize 1 
-5 0
1 0
1.5 0
e

# Set labels and title
set xlabel "x"
set ylabel "y"
set title "Intersection of f(x) and g(x)"

# Pause until a key is pressed
pause -1 "Press any key to close the plot"
