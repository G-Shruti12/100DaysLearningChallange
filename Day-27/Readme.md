# 🧠 Day-27 | Documenting What I Learnt

## 🐍 Topic: **Generator in Python**

A **generator** is a special kind of function that returns an **iterator object**.
Unlike normal functions that stop execution when they reach a `return` statement, a generator **pauses** its execution and **remembers** where it left off.

We use the keyword **`yield`** instead of `return`.
Each time the generator’s `__next__()` method (or `next()`) is called, execution resumes from where it paused, runs until the next `yield`, and then pauses again.

### Example:

```python
def generate():
    yield 10
    yield 20
    yield 30

gen = generate()

print(next(gen))  # 10
print(next(gen))  # 20
print(next(gen))  # 30
```

Unlike normal functions that return all data at once, a generator **produces values one at a time**, making it **memory-efficient** — especially useful for large data or infinite sequences.
