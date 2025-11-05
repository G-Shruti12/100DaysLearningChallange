from ctypes import *;
c_file_path=r'D:\c\customlib.dll'
fun=cdll.LoadLibrary(c_file_path)
# will call the file and which will return an object having member functions
print(fun.uppercase(b"shruti"))
print(fun.lowercase(b"shruti"))
print(fun.space(b"shruti "))
