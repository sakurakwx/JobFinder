class people:
    name = ''
    age = 0
    __weight = 0
    def __init__(self,n,a,w):
        self.name = n
        self.age = a
        self.__weight =w
    def speak(self):
        print("%s 说：My age is %d 岁."%(self.name,self.__weight))


p = people('runoob',10,20)
p.speak()