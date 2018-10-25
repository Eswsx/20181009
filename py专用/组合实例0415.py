class Turtle:
    def __init__(self,x):
        self.num = x

class Fish:
    def __init__(self,x):
        self.num = x

class Pool:
    def __init__(self,x,y):
        self.tutle = Turtle(x)
        self.fish = Fish(y)
    def print_num(self):
        print("水池里总共有乌龟%d只，小鱼%d条！"%(self.turtle,self.fish.num))
        
