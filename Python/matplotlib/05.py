import matplotlib.pyplot as plt
 ## Histogram

ages = [10, 12, 13, 20, 18, 17 ,19 , 35, 36, 35, 37, 38, 50, 51, 53, 55, 60, 90]
range = (0,100)
bins = 10

#ploting a histogram

plt.hist(ages, bins, range, color='blue',histtype='bar', rwidth=0.5)

plt.title("My histogram")
plt.xlabel("age")
plt.ylabel("no. of people")

plt.show()