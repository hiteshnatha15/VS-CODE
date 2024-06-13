from tkinter import *
from tkinter import messagebox

root = Tk()
root.geometry("300x200")

w = Label(root, text="Hello world", font="16")

w.pack()
messagebox.showwarning("class teacher", "Please submit your assignment on time")


w.mainloop() 