# Day-7 Documenting what i learned
- difference between match and switch
  - switch is a control flow statement and will tell the compiler to jump to that expression after that it is just normal statements that's why we need break while match here is a expression that return a value in a statement so it doesn't need break after matching it directly puts the value in variable
  - <code>
    grade = 'B'

result = match grade:
    case 'A': "Excellent"
    case 'B': "Good"
    case _: "Needs improvement" //here we write default like this.

print(result)

</code>
- in python every function we make is normal like even main is called by us because interpreter reads the code line by line so for example if it encounters any predefined function like input() here we don't include files that includes declaration of functions because here this could code when run interpreter would read it and will convert it to c/c++ code Cpython will call the built in libraries where this is present and linking with defination is also done here.
- in python we use indentation to tell that this block has end here but personally i like brackets and ; and line terminator 
- the lifetime of variable is less than or can sometimes be equal to life of the program but if we want the value of program even after program what would be the solution we keep it in a secondary drive in a file and when we need it open the file and read the value(data flows from file to variable) and write in the file(data flows from variable to file) .
this process is called file handling.
- steps 
  - create an object. in c++ we have to take care of class on our own like if we want to write we make object of ofstream and if we want to read we make object of ifstream  and open the file and tell the mode . but in python handle creation of object on its own like when we call open it will open the io module and create object on its own handle the class type
  - i learned about try and except(exception handling)
     -if we find a code risky and can cause error we use try and except there is also finally and else
  <code>
    x=5
    try: 
        y=x/0
    except Zero:
              print("division by zero error")
  </code>
    - in python we have predined objects like list,dict etc of their classes to make things easier and logic easier rather than building it from scratch . through class and structure.
    - list is ordered collection of elements but of different datatype can be included for which we had to make stucture in c,c++ and use dma and it is mutable .
      <code>
        list=[1,2,3,4,5]
        // here we are passing values to the constuctor of list class.
      </code>
      - i learned the concept of enum or enumarator it is basically group of names having a value attached to it which makes the code much more readable .
      
  
