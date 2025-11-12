import tkinter as tk
from PIL import Image, ImageTk
from tkinter import filedialog

def upload(label):
    path = filedialog.askopenfilename()
    if not path:
        return
    img = Image.open(path)
    img.thumbnail((400, 400))
    tk_img = ImageTk.PhotoImage(img)
    label.config(image=tk_img)
    label.image = tk_img
    label.original = img

def resize_image(label, w_entry, h_entry):
    if not hasattr(label, "original"):
        return
    try:
        w = int(w_entry.get())
        h = int(h_entry.get())
        resized = label.original.resize((w, h))
        tk_img = ImageTk.PhotoImage(resized)
        label.config(image=tk_img)
        label.image = tk_img
        label.original = resized
    except ValueError:
        print("Enter valid numbers for width and height")

def rotate_image(label, angle_entry):
    if not hasattr(label, "original"):
        return
    try:
        angle = int(angle_entry.get())
        rotated = label.original.rotate(angle)
        tk_img = ImageTk.PhotoImage(rotated)
        label.config(image=tk_img)
        label.image = tk_img
        label.original = rotated
    except ValueError:
        print("Enter a valid angle")

def to_greyscale(label):
    if not hasattr(label, "original"):
        return
    grey = label.original.convert("L")  
    tk_img = ImageTk.PhotoImage(grey)
    label.config(image=tk_img)
    label.image = tk_img
    label.original = grey

root = tk.Tk()
root.geometry("800x700")
root.config(bg="orange")

l1 = tk.Label(root, bg="orange")
l1.pack(pady=20)

tk.Button(root, text="Upload Image", command=lambda: upload(l1)).pack(pady=10)

frame = tk.Frame(root, bg="orange")
frame.pack(pady=20)

tk.Label(frame, text="Width:", bg="orange").grid(row=0, column=0, padx=5, pady=5, sticky="e")
width_entry = tk.Entry(frame, width=10)
width_entry.grid(row=0, column=1, padx=5, pady=5)

tk.Label(frame, text="Height:", bg="orange").grid(row=0, column=2, padx=5, pady=5, sticky="e")
height_entry = tk.Entry(frame, width=10)
height_entry.grid(row=0, column=3, padx=5, pady=5)

tk.Button(frame, text="Resize", command=lambda: resize_image(l1, width_entry, height_entry)).grid(row=0, column=4, padx=10, pady=5)

tk.Label(frame, text="Angle:", bg="orange").grid(row=1, column=0, padx=5, pady=5, sticky="e")
angle_entry = tk.Entry(frame, width=10)
angle_entry.grid(row=1, column=1, padx=5, pady=5)
tk.Button(frame, text="Rotate", command=lambda: rotate_image(l1, angle_entry)).grid(row=1, column=2, padx=10, pady=5)
tk.Button(frame, text="Convert to Grayscale", command=lambda: to_greyscale(l1)).grid(row=2, column=0, columnspan=5, pady=10)

root.mainloop()
