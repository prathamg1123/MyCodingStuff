import matplotlib.pyplot as plt

#create data for plotting

x_value = [0, 1, 2, 3, 4, 5]
y_value = [0, 1, 4, 9, 16, 25]

#default graph style is line
plt.plot([1,2,3,4,5,10])
plt.title("For testing purpose")
plt.xlabel("real number")
plt.ylabel("Some numbers")
plt.savefig("testinggraph")
plt.legend()
plt.show()