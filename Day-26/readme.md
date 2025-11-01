# Day-26 | Documenting what i learnt
## topic : creating custom iterator in python

so in prior video we learnt that how
```python
l1=[1,2,3,4,5,6,7]
for item in l1:
     print(item)
```
here l1 is a list class which will return the iterator object so that we can traverse
but if we try to do
```python
num=1234
for item in num:
      print(item)
```
here it will give error saying it will not return a  iterator object but it is also a int class so today we are going to create our own coustom class to solve this problem
- for it to be a iterator
   - it must have a dunder method (__iter__)
   - it must have next method which will return the iterator object.

i learnt about __init__ method  it is a constructor like in c,c++ which will get automatically called when we make a object
it has an argument self which is like this which represents current calling object
i also came to know about __iter__ which is the iterator method which would be called it is like a pointer which points to the base adress and 
doing   next(it) is like doing moving the pointer from base adress to next location.
