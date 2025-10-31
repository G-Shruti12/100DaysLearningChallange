class Counter:
    def __init__(self, start=1, end=10):
        self.start = start
        self.end = end

    def __iter__(self):
        return self.CustomCounter(self)

    class CustomCounter:
        def __init__(self, counter):
            self.counter = counter

        def __next__(self):
            if self.counter.start > self.counter.end:
                raise StopIteration
            current_value = self.counter.start
            self.counter.start += 1
            return current_value

for i in Counter(1, 5):
    print(i)
