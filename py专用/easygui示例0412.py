
import easygui as g
import sys

while 1:
    g.msgbox("欢迎进入第一个界面小游戏")
    msg = "请问你想干什么呢?"
    title = "小游戏互动"
    choice = ["打飞机","编程","琴棋书画","斗地主"]
    choice = g.choicebox(msg,title,choice)
    #note that we convert choice to string,in case
    #the user cancelled the choice,and wo got None
    g.msgbox("你的选择是："+ str(choice),"结果")
    msg = "你想重新开始小游戏吗?"
    title = "请选择"
    if g.ccbox(msg,title):#show a Continue/Cancel dialog
             pass #user chose Contine
    else:
             sys.exit(0) #user chose Cancel
