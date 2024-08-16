# Set the range for x-axis
set xrange [-1:2]

# Define the functions
f(x) = cos(x) - exp(-1 * (x/2))
g(x) = 0

# Plot the functions
plot f(x) title "f(x) = cos(x) - exp(-1 * (x/2))", g(x) title "g(x) = 0"

# Set labels and title
set xlabel "x"
set ylabel "y"
set title "Intersection of f(x) and g(x)"

# Pause until a key is pressed
pause -1 "Press any key to close the plot"
