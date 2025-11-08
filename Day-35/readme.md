# Day-35|Documenting what i learnt
## topic: gui application using python

- Tkinter is Python’s standard GUI library — it allows you to create windows, buttons, labels, text boxes, etc.

- It comes pre-installed with Python, so you don’t usually need to install it using pip.

You import it with:
```
import tkinter as tk
```

2. Creating the Main Window

Every Tkinter program starts by creating a window (the root object):
```
root = tk.Tk()

```
This creates the main window for your GUI.

You can then customize it:
```
root.title("My First GUI")
root.geometry("700x400")       # width x height
root.resizable(False, False)   # disable window resizing
root.configure(bg="lightblue") # set background color
```
3. Setting a Window Icon

To change the small icon (like a favicon for desktop apps):
```
root.iconbitmap("icon.ico")        # for .ico files (Windows)

```
Or using an image:
```
root.iconphoto(False, tk.PhotoImage(file="icon.png"))
```

⚠️ Make sure the file path exists, or Tkinter will raise:
_tkinter.TclError: couldn't open ... no such file or directory

4. Widgets — The Building Blocks

Widgets are UI elements you add inside your window, such as:

Widget | Purpose  
Label	 |Display text or images  
Button	|Clickable button  
Entry	|Text input field  
Frame	|Container for grouping widgets  
PhotoImage	| Used to display images  
Messagebox	|Show pop-up alerts  

Example:
```
label = tk.Label(root, text="Hello, Tkinter!", font=("Arial", 16, "bold"), fg="darkblue", bg="lightpink")
label.pack()
```
you can't use pack and grid together
5. Widget Styling

You can customize widgets using properties:
```
font=("Arial", 14, "bold") → change font and style
```
fg="red" → text color

bg="yellow" → background color

6. Widget Placement — pack() vs grid()

Tkinter provides geometry managers to place widgets in the window.

**pack()**

Simple, stacks widgets vertically or horizontally.

Example:
```
label.pack(side="top", pady=20)
```
**grid()**

Works like an Excel table — widgets go into rows and columns.

Example:
```
name_label.grid(row=0, column=0, padx=10, pady=10)
entry.grid(row=0, column=1)
```

Similar to CSS grid, but much simpler.

padx and pady → control spacing around widgets.

⚠️ Don’t mix pack() and grid() inside the same container (Frame or root).

7. Using Frames for Layout

You can use a Frame to group widgets and organize your layout better:
```
main_frame = tk.Frame(root, bg="lightpink", padx=20, pady=20)
main_frame.pack(pady=30)
```
Then use grid() inside that frame.

8. Adding Images

You can add an image using PhotoImage:
```
photo = tk.PhotoImage(file="image.png")
l1 = tk.Label(root, image=photo)
l1.pack()
```

Keep a reference to the image variable (like photo) —
otherwise Python’s garbage collector may remove it and the image won’t appear.

9. Buttons and Event Handling

To make buttons interactive:
```
def say_hello():
    print("Button clicked!")

btn = tk.Button(root, text="Submit", command=say_hello)
btn.pack()
```

Or use a lambda to pass parameters:
```
btn = tk.Button(root, text="Submit", command=lambda: say_hello(l2))
```

10. Displaying Alerts

To show message boxes (like pop-ups):

from tkinter import messagebox
```
def show_alert():
    messagebox.showinfo("Submitted", "Form submitted successfully!")

```

btn = tk.Button(root, text="Submit", command=show_alert)
```
