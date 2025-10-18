# 📘 Day 11 – Documenting What I Learned
### topic: queue

<img width="235" height="200" alt="image" src="https://github.com/user-attachments/assets/268030fb-8060-405b-b6d6-57f47d79170d" />


## 🧩 Introduction
Today, I learned about the Queue data structure — which can be seen as an extension of Stack.

While a Stack works on the LIFO (Last In, First Out) principle — like in recursion, where the last function called is the first one to return —
a Queue works on the FIFO (First In, First Out) principle.

# 🎟️ Ticket Counter Analogy

A Queue works just like a ticket counter line:

The first person to enter the line is the first to get the ticket.

The last person has to wait for their turn.

# 🔁 Working of Queue

- The rear end is used to add (enqueue) elements.

- The front end is used to remove (dequeue) elements.

- You cannot access elements in the middle directly.

# 💻 In JavaScript

- In JavaScript, we can easily implement a queue using arrays, since they already have built-in methods:

push() → adds an element at the end (rear)

shift() → removes an element from the front
