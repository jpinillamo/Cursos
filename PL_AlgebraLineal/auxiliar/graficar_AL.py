import numpy as np
import matplotlib.pyplot as plt
def graficarvectores(vecs,cols,alpha=1):
    plt.axvline(x=0,color = 'grey', zorder=0)
    plt.axhline(y=0,color = 'grey', zorder=0)

    for i in range(len(vecs)):
        x = np.concatenate([[0,0],vecs[i]])
        plt.quiver([x[0]],
                   [x[1]],
                   [x[2]],
                   [x[3]],angles='xy',scale_units='xy', scale=1,color=cols[i],alpha=alpha)
        
def graficarmatriz(matriz, vectorcol=['red','blue']):
    #Circulo unitario
    x = np.linspace (-1,1, 100000)
    y= np.sqrt(1-(x**2))

    #circulo unitario transformado
    x1= matriz[0,0]*x+matriz[0,1]*y
    y1= matriz[1,0]*x+matriz[1,1]*y
    x1_neg= matriz[0,0]*x-matriz[0,1]*y
    y1_neg= matriz[1,0]*x-matriz[1,1]*y

    #vectores
    u1 = [matriz[0,0], matriz[1,0]]
    v1 = [matriz[0,1], matriz[1,1]]

    graficarvectores([u1,v1],cols=[vectorcol[0],vectorcol[1]])

    plt.plot(x1,y1,'green',alpha=0.7)
    plt.plot(x1_neg,y1_neg,'green',alpha=0.7)