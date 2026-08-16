import matplotlib.pyplot as plt

#pie-chart
#definning labels
activities = ['eat', 'sleep', 'work', 'play']

#portion covered by each label
slice = [2, 5, 4, 8]

colors = ['r','g','b','y']

plt.pie(slice, labels= activities, colors= colors,
        startangle=90, shadow=True, radius=1.2,
        autopct="%1.1f%%",explode=(0,0,0.1,0))
plt.legend()    
plt.show()