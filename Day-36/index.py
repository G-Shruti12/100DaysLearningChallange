import tkinter as tk
from tkinter import ttk

root = tk.Tk()
root.geometry("600x400")
root.title("Length Converter (TTK + Grid Layout)")
root.config(background="pink")

def convertlength(value, unit):
    if unit == "feet":
        meters = value * 0.3048
    elif unit == "inches":
        meters = value * 0.0254
    elif unit == "cm":
        meters = value / 100
    elif unit == "m":
        meters = value
    else:
        meters = 0

    result = {
        'm': meters,
        'cm': meters * 100,
        'inches': meters / 0.0254,
        'feet': meters / 0.3048
    }
    return result
def convert():
    try:
        value = float(t1.get())
        result = convertlength(value, selected_unit.get())
        msg = (
            f"{result['m']:.4f} meters\n"
            f"{result['cm']:.2f} centimeters\n"
            f"{result['feet']:.4f} feet\n"
            f"{result['inches']:.4f} inches"
        )
        l1.config(text=msg)
    except ValueError:
        l1.config(text="⚠️ Please enter a valid number!")

# ---------------- Widgets ---------------- #
# Label + Entry (same row)
label_num = ttk.Label(root, text="Enter the value:", font=('Arial', 14), background="pink")
label_num.grid(row=0, column=0, padx=10, pady=20, sticky="e")

t1 = ttk.Entry(root, width=25, font=('Arial', 14))
t1.grid(row=0, column=1, padx=10, pady=20, sticky="w")

# Label + Combobox (same row)
label_unit = ttk.Label(root, text="Choose the unit:", font=('Arial', 14), background="pink")
label_unit.grid(row=1, column=0, padx=10, pady=10, sticky="e")

units = ['cm', 'inches', 'm', 'feet']
selected_unit = tk.StringVar()
cb1 = ttk.Combobox(root, textvariable=selected_unit, font=('Arial', 14), values=units, state='readonly')
cb1.set(units[0])
cb1.grid(row=1, column=1, padx=10, pady=10, sticky="w")

# Convert Button (centered)
b1 = ttk.Button(root, text="Convert", command=convert)
b1.grid(row=2, column=0, columnspan=2, pady=20)

# Result Label (below)
l1 = ttk.Label(root, text="", font=('Arial', 14), background="pink", justify="left")
l1.grid(row=3, column=0, columnspan=2, pady=20)

# Optional: make columns expand equally
root.grid_columnconfigure(0, weight=1)
root.grid_columnconfigure(1, weight=1)

root.mainloop()
