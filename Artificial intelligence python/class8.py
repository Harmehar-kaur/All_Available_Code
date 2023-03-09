# how to use numpy values to plot graphs 
import numpy as np
import matplotlib.pyplot as plt 
# creating a numpy array
x = np.arange(0,20,0.2) 

# taking the sine of all the values in the numpy array 
y = np.sin(x)

# plotting the x,y values on a graph 
print(plt.plot(x,y))

#adding a color shade in between the graph fill , alpha is transparency 
plt.fill_between(x,y,color='blue',alpha=0.5) 

# CODE 2 
x = np.linspace(-2,2,1000)
y = np.exp(x)
print(plt.scatter(x,y, c = x))
plt.colorbar()
