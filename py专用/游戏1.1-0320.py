temp=input("what i mean:")
guess=int(temp)
while guess!=8:
    temp=input("再猜一次吧：")
    guess=int(temp)
    if guess == 8 :
        print ("我去，你是我肚子里的蛔虫吗")
        print ("哼，猜对了也没奖励！")
    else:
        if guess>8:
            print("嘿，大了大了。")
        else:
            print("哥小了小了！")
print("game over")

        
    
