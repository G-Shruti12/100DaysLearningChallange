# Day-39 | Notes
## topic: tabel in tkinter

1. What Treeview Is

- The Treeview widget (from tkinter.ttk) is used to display data in a table or hierarchical tree format.

- It’s great for showing structured data — like student records, book lists, or inventories.

🧩 2. How to Create a Treeview

- You create it using ttk.Treeview(parent, columns=...).

- The columns parameter defines your custom column names
- (e.g., ["name", "roll no", "subject"]).

- Always pass the window (like root) as the parent — not a string.

🏷️ 3. Defining Headings

- Each column needs a visible label (heading) using:
```
  element.heading("column_name", text="Visible Title")
```

This shows the title text at the top of each column.

📏 4. Setting Column Width and Alignment

- You can control how wide each column is and how its text is aligned:
```
element.column("column_name", width=120, anchor="center")
```

- Alignment options:

  - "w" → left

  - "center" → middle

  - "e" → right

- You can apply this to all columns using a simple loop:
```
for col in head:
    element.column(col, width=120, anchor="center")
```
🧾 5. Inserting Data (Rows)

- To add rows, use:
```
element.insert("", "end", values=("Shruti", "21", "Eng"))
```

"" → means the row has no parent (it’s at the top level).

"end" → places it at the bottom of the table.

values → a tuple with data for each column.

🚫 6. Hiding the Default First Column (#0)

- Tkinter automatically adds a hidden column called #0 (used for trees).

- To remove it from your table view:
```
element.column("#0", width=0, stretch=False)
element.heading("#0", text="")
```

This makes your table clean — only your custom columns appear.


You must use a geometry manager (pack, grid, or place) to make the table visible:

element.pack()
