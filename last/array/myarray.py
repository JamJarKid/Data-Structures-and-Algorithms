class StaticArray:
    def __init__(self, size: int, data_type: type, data: list = None):
        
        if data is not None:
            self._data = data
        else:
            self._data = [data_type()] * size
        
        self.size = size
        self._pos = 0
        self.type = data_type

    def __getitem__(self, idx: int):
       if idx < 0 or idx > self.size -1:
           raise IndexError
       else:
           return self._data[idx] 
    
    def __setitem__(self, idx: int, value):
        if idx < 0 or idx > self.size -1:
           raise IndexError
        elif isinstance(value, self.type):
            self._data[idx] = value        
        else:
            raise TypeError(f"Only {self.type} is accepted in this StaticArray")
               
    def __repr__(self):
        return "Array: < " + ' '.join(str(item) for item in self._data)+ " >"
    
    def __iter__(self):
        return self
    
    def __next__(self):
        if self._pos <= self.size - 1:
            item = self._data[self._pos]
            self._pos += 1 
            return item
        else:
            self._pos = 0
            raise StopIteration
        
    def __len__(self):
        return(len(self._data))
        