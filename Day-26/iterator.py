class Integer:
    def __init__(self,data):
        self.data=data
    def __iter__(self):
        return self.Counter(self)
    class Counter:
        def __init__(self,counter):
            self.counter=counter
            self.i=0
            self.sepratedigits()
        def  sepratedigits(self):
                value=self.counter.data
                l1=[int(e) for e in str(value)]
                self.mylist=l1
        def __next__(self):
             if self.i==len(self.mylist):
                  raise StopIteration
             current_value= self.mylist[self.i]
             self.i+=1
             return current_value
x=Integer(1234)
for i in x:
     print(i)
        
