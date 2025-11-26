import sys
def sum(arr):
    s = 0
    for i in arr:
        s += i
    return s
def average():
    x=[int(i) for i in sys.argv[1::]]
    try:
      if len(x) <= 1:
            print("Average not defined for less than 2 numbers")
            return
      l = sum(x) / len(x)
      print(l)

    except ValueError:
        print("Please enter only numbers")

    except ZeroDivisionError:
        print("No numbers provided")

# average()
average()
