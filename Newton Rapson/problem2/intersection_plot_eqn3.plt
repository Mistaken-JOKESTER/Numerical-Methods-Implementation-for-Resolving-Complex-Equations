# Set the range for x-axis
set xrange [-1:1]

# Define the functions
f(x) = atan(x)
g(x) = 0

# Plot the functions
plot f(x) title "f(x) = atan(x)", g(x) title "g(x) = 0"

# Set labels and title
set xlabel "x"
set ylabel "y"
set title "Intersection of f(x) and g(x)"

# Pause until a key is pressed
pause -1 "Press any key to close the plot"
