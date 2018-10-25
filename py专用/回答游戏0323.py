bingo = "5"
answer = input("请输入世界上最美妙的数字：")

while True:
    if answer == bingo:
        break
    answer = input("很遗憾，你错了，请再输入一遍（答案正确才能退出游戏）：")

print("同道中人啊")
print("game over")
