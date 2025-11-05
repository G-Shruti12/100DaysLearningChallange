# Day-31| Documenting what i learnt
## topic: running c library file using python
- compile your code using gcc and make it a shared library with .dll extension . dll because it is compatible with linux.
things to make sure
  - your shared library and python file must follow same artitecture if x64 or x32
  - make sure your file get compiled properly and then copy its path.

for shared library command

```
 gcc -shared -o customlib.dll customlib.c
```
here in python file i have used cdll as it will return the object with all the functions in that file
