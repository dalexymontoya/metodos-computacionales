import matplotlib
import matplotlib.pyplot as plt
import numpy as np

datoscuerda = np.genfromtxt("data.txt")
x= np.linspace(0,1,202)

plt.figure()
plt.plot(x, datoscuerda)
plt.savefig("onda.png")