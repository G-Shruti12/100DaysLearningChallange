# Day-21 | Documenting what i learnt 
## topic :hashing

**Concept Overview:**
Hashing is an efficient technique for searching and storing data. It works by converting data into a fixed-size key (index) using a **hash function**, which determines where the data should be placed in a hash table.

**Why Hashing is Better:**

* **Linear Search:** O(n)
* **Binary Search:** O(log n)
* **Hashing:** O(1) (in the best case)

This makes hashing significantly faster for lookups, insertions, and deletions.

**How It Works:**

1. A separate table is created to store **keys** and **values**.
2. The **hash function** generates an index (for example, using the last two digits of a number).
3. The data is stored at that index in the table.

**Collision Handling:**
When two keys map to the same index, a **collision** occurs.
To resolve it, we can use **linear probing**, which searches sequentially for the next available slot.

**Key Takeaway:**
Hashing provides constant-time access in most cases and is widely used in data structures like **hash tables**, **maps**, and **dictionaries**.

