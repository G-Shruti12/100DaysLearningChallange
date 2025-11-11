import tkinter as tk
from tkinter import ttk
import random

def random_color():
    r = lambda: random.randint(0, 255)
    return f'#{r():02x}{r():02x}{r():02x}'

def change_color():
    color = random_color()
    root.configure(bg=color)
    label.config(text=color, bg=color)

root = tk.Tk()
root.title("Random Color Generator")
root.geometry("400x300")

label = tk.Label(root, text="Click the button!", font=("Arial", 18))
label.pack(pady=40)

btn = tk.Button(root, text="Generate Color", command=change_color, font=("Arial", 14))
btn.pack(pady=20)

root.mainloop()
