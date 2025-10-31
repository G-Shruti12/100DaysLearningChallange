l1=[10,20,30,40,50]
num=1234
string="shruti"
obj={1:"shruti"}
base=iter(l1)
r1=l1.__iter__()
print(next(base))
for items in l1:
    print(r1.__next__())
# print(iter(num))
print(iter(string))
print(iter(obj))

