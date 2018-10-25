import random
secret = random.randint(1,9)
temp=input("what i mean:")
guess=int(temp)
qaz=1
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
            print ("哼，猜对了也没7奖励！")
        else:
            qaz=qaz+1
            if guess>secret:
                print("嘿，大了大了。")
            else:
                print("恩，小了小了！")
    if qaz==3:
        print("哈哈，猜不出来吧，三次机会已经用完了")
print("game over")

        
    
