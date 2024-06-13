from tkinter import *

top=Tk()
menubar=Menu(top)
menubar.add_command(label="Breakfast")
menubar.add_command(label="Lunch")
menubar.add_command(label="Dinner")
top.config(menu=menubar) 
top.mainloop()

 