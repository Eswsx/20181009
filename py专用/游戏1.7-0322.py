import random
secret = random.randint(1,9)
temp=input("what i mean:")
qaz=1
if temp.isnumeric():
    guess=int(temp)
    if guess==secret:
        print("我去，你是我肚子里的蛔虫吗")
    else:
        if guess>secret:
            print("猜错了，大了")
        else:
            print("猜错了，小了")
        while guess!=secret and qaz<3:
            temp=input("再猜一次吧：")
            guess=int(temp)
            if guess == secret:
                print ("我去，你是我肚子里的蛔虫吗?")
                print ("哼，猜对了也没奖励！")
            else:
                qaz=qaz+1
                if guess>secret:
                    print("嘿，大了大了。")
                else:
                    print("恩，小了小了！")
        if qaz==3:
            print("哈哈，猜不出来吧，三次机会已经用完了")
else:
    print("输入错误，请输入整数！")
print("game over")

        
    
