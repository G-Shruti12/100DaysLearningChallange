import tkinter as tk
import mysql.connector
from tkinter import messagebox

def login_user(user, password):
    username = user.get()
    passw = password.get()
    try:
        mydb = mysql.connector.connect(
            host="localhost",
            user='root',
            password='30112006',
            database='first'
        )
        cursor = mydb.cursor()
        cursor.execute("SELECT * FROM login")
        rows = cursor.fetchall()

        found = False
        for row in rows:
            if username in row:
                found = True
                break

        if found:
            messagebox.showinfo("login succesfull")
        else:
            messagebox.showerror("Not Found", f"User '{username}' does NOT exist")

    except mysql.connector.Error as e:
        print(e)

    finally:
        if mydb.is_connected():
            cursor.close()
            mydb.close()
root = tk.Tk()
root.geometry("300x400")
root.config(bg="green")

title = tk.Label(root, text="Login", font=("Arial", 20, "bold"))
title.pack(pady=10)

lbl_username = tk.Label(root, text="Username", font=("Arial", 12))
lbl_username.pack()
entry_username = tk.Entry(root, width=30)
entry_username.pack(pady=5)

lbl_password = tk.Label(root, text="Password", font=("Arial", 12))
lbl_password.pack()
entry_password = tk.Entry(root, width=30, show="*")
entry_password.pack(pady=5)

btn_login = tk.Button(
    root, text="Login", font=("Arial", 12), width=12,
    command=lambda: login_user(entry_username, entry_password)
)
btn_login.pack(pady=15)

root.mainloop()
