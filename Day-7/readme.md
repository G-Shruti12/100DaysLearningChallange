
# 🗓️ Day 7 — Documenting What I Learned

# topic : file handling

<img width="400" height="400"  margin="auto" alt="image" src="https://github.com/user-attachments/assets/043ac104-f5eb-4a13-9b02-75fe181c7bcf" />


### 🧩 Difference Between `match` and `switch`

The **`switch`** statement is a *control flow* construct. It tells the compiler to jump to the case that matches the expression. After that, it behaves like normal sequential code — which is why we need to use `break` to stop fall-through.

In contrast, **`match`** in Python is an *expression* that directly returns a value. It doesn’t need a `break` statement because once a case matches, its value is automatically assigned to the variable.

<code>
grade = 'B'

result = match grade:
    case 'A': "Excellent"
    case 'B': "Good"
    case _: "Needs improvement"  # default case

print(result)
</code>

---

### 🐍 Python Insights

* In Python, every function — even `main` — is explicitly defined and called by us.
  The interpreter executes the code **line by line**, and when it encounters a predefined function like `input()`, it automatically links it to its definition from built-in libraries through **CPython**.
  Unlike C/C++, we don’t need to include headers — Python handles that internally.

* **Indentation** defines code blocks in Python.
  While I personally prefer using `{}` and `;` from C/C++, indentation helps maintain clean and readable structure.

---

### 💾 Variable Lifetime & File Handling

A variable usually lives as long as the program runs.
If we want to preserve data even after the program ends, we store it in a **file** — this process is known as **file handling**.

* Reading data → *file → variable*
* Writing data → *variable → file*

In **C++**, we manually manage file objects using classes like `ifstream` (for reading) and `ofstream` (for writing).
In **Python**, `open()` automatically handles object creation, class types, and modes internally.

---

### ⚠️ Exception Handling

When we suspect a part of code may raise an error, we use `try` and `except`.
Python also supports `else` and `finally` blocks for more control.

```python
x = 5
try:
    y = x / 0
except ZeroDivisionError:
    print("Division by zero error")
```

---

### 📚 Built-in Data Structures

Python provides built-in classes like `list`, `dict`, and more — making programming simpler and reducing the need to build such structures from scratch.

**Example: List**

```python
numbers = [1, 2, 3, 4, 5]
# Passing values to the constructor of the list class
```

* A **list** is an ordered, mutable collection that can hold elements of different data types — something that would require a structure and dynamic memory allocation in C/C++.

---

### 🧮 Enums (Enumerations)

An **enum** is a group of symbolic names bound to unique values.
It improves **readability** and makes the code more **organized**, especially when dealing with fixed sets of constants.

---

