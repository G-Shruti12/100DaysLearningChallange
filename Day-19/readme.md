# 🧠 Day-19 | Custom Set Implementation in JavaScript

## 📘 Topic: Set

<img width="300" height="200" alt="image" src="https://github.com/user-attachments/assets/4d490196-fb4b-458e-913c-2f39b49fe661" />

This project explores how **Set** works internally by implementing a custom version in JavaScript.  
Although JavaScript already provides a built-in `Set`, this exercise helped me visualize its internal logic and operations.

---

### 🔍 Difference Between **Set** and **Map**

| Feature | Set | Map |
|----------|-----|-----|
| Structure | Stores unique values | Stores key-value pairs |
| Key & Value | Key and value are the same | Keys and values can differ |
| Order | Unordered | Ordered by insertion |
| Example | `{1, 2, 3}` | `{1 → "A", 2 → "B"}` |

---

### ⚙️ Operations Implemented

- 🧩 **Union** – Combines all unique elements from both sets.  
- ➖ **Difference** – Returns elements present in one set but not in the other.  
- 🔗 **Intersection** – Returns elements common to both sets.

---

### 💻 Example Usage

```js
class CustomSet {
    constructor() {
        this.items = new Map();
    }

    add(element) {
        if (!this.items.has(element)) {
            this.items.set(element, element);
            return true;
        }
        return false;
    }

    has(element) {
        return this.items.has(element);
    }

    remove(element) {
        return this.items.delete(element);
    }

    size() {
        return this.items.size;
    }

    values() {
        return [...this.items.values()];
    }

    union(otherSet) {
        const unionSet = new CustomSet();
        this.values().forEach(value => unionSet.add(value));
        otherSet.values().forEach(value => unionSet.add(value));
        return unionSet;
    }

    difference(otherSet) {
        const diffSet = new CustomSet();
        this.values().forEach(value => {
            if (!otherSet.has(value)) diffSet.add(value);
        });
        return diffSet;
    }

    intersection(otherSet) {
        const intersectionSet = new CustomSet();
        this.values().forEach(value => {
            if (otherSet.has(value)) intersectionSet.add(value);
        });
        return intersectionSet;
    }
}

// Example
const setA = new CustomSet();
[2, 4, 6, 8, 10].forEach(n => setA.add(n));

const setB = new CustomSet();
[1, 4, 7, 8].forEach(n => setB.add(n));

console.log("Union:", setA.union(setB).values());         // [2, 4, 6, 8, 10, 1, 7]
console.log("Intersection:", setA.intersection(setB).values()); // [4, 8]
console.log("Difference (A - B):", setA.difference(setB).values()); // [2, 6, 10]
