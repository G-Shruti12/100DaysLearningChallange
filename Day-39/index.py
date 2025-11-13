import tkinter as tk
from tkinter import ttk
root=tk.Tk()
head=["name","roll no","subject"]
elt=[("shruti","21","eng"),("shruti","21","eng"),("shruti","21","eng")]
root.geometry("300x400")
root.title("table being created")
element=ttk.Treeview(root,columns=head)

element.column("#0", width=0, stretch=False)

element.heading("name",text="name")
element.heading("roll no",text="roll no")
element.heading("subject",text="subject")
for item in head:
    element.column(item,width=120,anchor="center")
for item in elt:
    element.insert("","end",values=item)
element.pack()
root.mainloop()
