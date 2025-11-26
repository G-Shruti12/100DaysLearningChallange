# Day-53|notes
## topic:cli handling using python

question is what is cli 
cli is command line interface.
simply when you write command in terminal like
gcc filename
or ./a.out first.c 12 13
here gcc and ./a.out are gnu utilites 
lets leave it here 12 and 13 are arguments in 
c,c++
main function gets runned and these arg gets added on  conversion
like int main(int args,int* argu){
} here the argu has ['first.c','12','13'] where each is string and gets internally converted

we will try to understand how it happens under the hood
so there is a library here sys for system for system level control
cause
it allows
interpreter state

command-line arguments

Python’s environment

standard input/output

version/platform info

exit control
here we will look into cli
there are 3 ways to handle cli I remember 2:
so one obvious is sys for testing
other is argparse is professional
✅ 1. sys.exit([code])

Stops the program.

sys.exit("Error occurred")

✅ 2. sys.getsizeof(object)

Returns how many bytes an object uses.

sys.getsizeof([1,2,3])

✅ 3. sys.getrecursionlimit()

Gets the current recursion limit.

sys.getrecursionlimit()

✅ 4. sys.setrecursionlimit(n)

Sets recursion limit (dangerous if you go too high).

sys.setrecursionlimit(3000)

✅ 5. sys.getdefaultencoding()

Returns default encoding (usually 'utf-8').

sys.getdefaultencoding()

✅ 6. sys.getfilesystemencoding()

Encoding used for filenames.

✅ 7. sys.modules

Not a function — but SUPER important:
Dictionary of all loaded modules.

sys.modules.keys()

✅ 8. sys.exc_info()

Useful for exception debugging.

try:
    1/0
except:
    print(sys.exc_info())

✅ 9. sys.stdin, sys.stdout, sys.stderr

These act like file objects.

Read full input:

data = sys.stdin.read()


Write output:

sys.stdout.write("Hello\n")


Write error:

sys.stderr.write("This is an error\n")

🔥 10. sys.argv

List of CLI arguments.

print(sys.argv)

⚙️ 11. sys.path

List of directories Python searches for modules.

🧠 12. sys.version

Full Python version + compiler info.

🏗️ 13. sys.platform

OS type ('win32', 'linux', 'darwin').

🧹 14. sys.executable

Path to Python executable.

🛠️ 15. sys.getwindowsversion()

Windows-only details.

🌀 Rare but cool:
16. sys.tracebacklimit

Controls how much traceback appears.

17. sys.getrefcount(obj)

Returns reference count (CPython-specific).
