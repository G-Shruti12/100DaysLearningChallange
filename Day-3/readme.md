# Day-3 | Documenting what i learnt
## topic : soft and hard keywords 
<img width="400" height="300" alt="image" src="https://github.com/user-attachments/assets/e49df61e-cc64-4402-a0c0-1aa0596b6343" />

- today i learnt about soft and hard keywords in python .
- python has total of 35 keywords out of which some are hard and other are soft
  <img width="970" height="300" alt="image" src="https://github.com/user-attachments/assets/2512d09d-e19e-4c97-b2b0-ec9a2aa386cf" />
- we all know about hard keywords soft keywords are those keywords which can be used as normal identifier also for example if we
     - write if=7 it will give error because it is a hard keyword 
- softkeyword act as keyword in special context only example is
    - match _ only at that time it is considered as keyword.
like we can do match=10 and it act as identifier.
let us look at syntax of match with program:

```python
x=1
match x:
    case 1:
          print("first")
    case 2:
          print("two")
    case _:
          print("not found")
```
