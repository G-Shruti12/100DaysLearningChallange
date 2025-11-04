# Day-30| documenting what i learnt
## topic: running the c file using python
for this we require  to import module named subprocess and which has commands that which will run the .exe file and call the function to print value in console.
methods in subprocess
1. **.run** for running the code does'nt return exit value.
2. **subprocess.call()**: will run the exit code but does'nt return object
3. **subprocess.check_call()**: will run the code and raises an exception if command failes.
4.  **subprocess.check_output()**:will give us output directly.

we are going to talk about .run()

a) here it its parameters it takes arguments can be in list or directly string .run(['abc.exe']) or .run('abc.exe')

b)cwd 	Change working directory

c) shell	Run via shell

d) capture_output	Capture stdout + stderr

e) text	Convert bytes → str

f) input	Send input to process

g) check	Raise error if non-zero exit

h) timeout	Limit runtime duration
