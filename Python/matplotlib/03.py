import matplotlib.pyplot as plt

x = [1,2,3,4,5,6]
y = [2,4,1,5,2,6]

plt.plot(x, y, color='red',linestyle='dashed',linewidth=3, 
         marker='X',markerfacecolor='blue',markersize='12')
# setting x,y range
plt.xlim(1,8)
plt.ylim(1,8)

#labeling
plt.xlabel("x-axis"); plt.ylabel("y-axis")

#title
plt.title("Some cool costomization!")
plt.show()
