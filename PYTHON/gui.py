# import tkinter as tk
# m=tk.Tk()
# name=tk.Label(text="Hitesh Natha",width="20",height="5",background="red",fg="white")
# name.pack()
# regno=tk.Label(text="23MCA10099")
# regno.pack()
# m.mainloop()

# from tkinter import *

# m=Tk()
# m.geometry("500x500")
# name=Label(m,text="Hitesh Natha",width="20",height="5",background="red",fg="white")
# msg="Hello"
# name.pack()
# nameText=Text(m)
# nameText.pack()
# nameText.insert(END,msg)
# m.mainloop()

# from tkinter import *
# root = Tk()
# text = Text(root)
# text.insert(INSERT,"Hello.....")
# text.insert(END,"Bye....")
# text.config( state = 'disabled')
# text.pack()
# text.tag_add("here","1.0", "1.5")
# text.tag_add("start","1.8", "1.13")
# text.tag_config("here", background = "yellow", foreground = "blue")
# text.tag_config("start", background = "red", foreground = "green")


# root.mainloop()


# from tkinter import *
# root = Tk()
# label=Label(root,text="list of cities")
# list=Listbox(root)
# list.insert(1,"Mumbai")
# list.insert(2,"Delhi")
# list.insert(3,"Kolkata")
# list.insert(4,"Chennai")
# list.insert(5,"Bangalore")
# list.insert(6,"Pune")
# list.insert(7,"Hyderabad")
# list.insert(8,"Ahmedabad")
# list.insert(9,"Jaipur")
# list.insert(10,"Surat")
# list.insert(11,"Lucknow")

# label.pack()
# list.pack()
# root.mainloop()

# from tkinter import *
# root = Tk()
# label=Label(root,text="button not clicked",foreground="red")
# label.pack()
# def clicked():
#     label.config(text="button clicked",foreground="green")
#     action.configure(text="clicked")

# action=Button(root,text="click me",command=clicked)
# action.pack()
# root.mainloop()

from tkinter import *
from tkinter import ttk

root=Tk()
root.geometry("500x500")
table=ttk.Treeview(root)
table['columns']=("Name","Regno","Branch")
table.column("Name",width=100)
table.heading("Name",text="Name")
table.column("Regno",width=100)
table.heading("Regno",text="Regno")
table.column("Branch",width=100)
table.heading("Branch",text="Branch")
table.pack()
table.insert(parent="",index="end",values=("Hitesh","10099","MCA"))
table.insert(parent="",index="end",values=("Hitesh","10099","MCA"))
table.insert(parent="",index="end",values=("Hitesh","10099","MCA"))
root.mainloop()
