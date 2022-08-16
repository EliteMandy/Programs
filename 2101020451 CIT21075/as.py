# import turtle
# manu = turtle.Turtle()
# manu.color("black","blue")
# manu.speed(9)
# manu.forward(100)
# manu.left(90)
# manu.forward(100)
# manu.left(90)
# manu.forward(100)
# manu.circle(50,344,155)
# manu.speed(9)

# turtle.done()


# import turtle
# turtle.bgcolor("black")
# turtle.color("orange","red")
# turtle.speed(2)
# turtle.pensize(1)
# turtle.forward(10)
# turtle.left(90)
# turtle.forward(100)
# turtle.right(90)
# turtle.forward(10)
# turtle.left(90)
# turtle.forward(100)


# from turtle import*
# bgcolor("black")
# speed(5)
# color("white","red")
# begin_fill()
# pensize(5)
# left(50)
# forward(113)
# circle(50,200)
# right(140)
# circle(50,200)
# forward(133)
# end_fill()
# hideturtle()


#from turtle import*
#bgcolor("yellow")
#color("black","Red")
#begin_fill()
#left(50)
#forward(226)
#circle(50,200)
#right(140)
#circle(50,200)
#forward(266)
#end_fill()

#from turtle import*
#bgcolor("white")
#color("Black","brown")
#begin_fill()
#left(90)
#forward(60)
#circle(25,95)
#forward(100)
#circle(10,200)
#right(45)
#forward(12)
#right(90)
#forward(300)
#right(60)
#circle(50,200)
#right(80)
#circle(55,200)
#right(80)
#forward(250)
#right(85)
#circle(20,85)

#end_fill()



# import turtle
# M=turtle.Pen()
# M.forward(100)
# M.right(120)
# M.forward(100)
# M.right(120)
# M.forward(100)
# M.left(90)
# M.forward(100)
# M.right(90)
# M.forward(100)
# M.right(90)
# M.forward(100)
# M.right(90)
# M.forward(100)
# M.right(60)
# M.up()
# M.forward(100)
# M.down()
# M.forward(100)
# M.circle(50)
# from turtle import*)

# import turtle
# # Top Part
# piece1=[[(-40, 120), (-70, 260), (-130, 230), 
# (-170, 200), (-170, 100), (-160, 40), (-170, 10), 
# (-150, -10), (-140, 10), (-40, -20), (0, -20)],[(0, -20), 
# (40, -20), (140, 10), (150, -10), (170, 10), (160, 40),
# (170, 100), (170, 200), (130, 230), (70, 260), (40, 120), 
# (0, 120)]]
# # Middle Part
# piece2=[[(-40, -30), (-50, -40), (-100, -46), (-130, -40),
#  (-176, 0), (-186, -30), (-186, -40), (-120, -170), 
# (-110, -210), (-80, -230), (-64, -210), (0, -210)],
# [(0, -210), (64, -210), (80, -230), (110, -210), (120, -170), (186, -40), (186, -30), (176, 0), (130, -40), (100, -46), (50, -40), (40, -30), (0, -30)]]
# #Bottom Part
# piece3=[[(-60, -220), (-80, -240), (-110, -220), 
# (-120, -250),(-90, -280), (-60, -260), (-30, -260), (-20, -250), (0, -250)],[(0, -250), (20, -250), (30, -260), (60, -260),
#  (90, -280), (120, -250),(110, -220), (80, -240), (60, -220), (0, -220)]]
# turtle.hideturtle()
# turtle.bgcolor('#ba161e') #Dark Red
# turtle.setup(500,600)
# turtle.title("I AM IRONMAN")
# piece1Goto=(0,120)
# piece2Goto=(0,-30)
# piece3Goto=(0,-220)
# turtle.speed(2)
# def draw_piece(piece,pieceGoto):
#     turtle.penup()
#     turtle.goto(pieceGoto)
#     turtle.pendown()
#     turtle.color('#fab104') #Light Yellow
#     turtle.begin_fill()
#     for i in range(len(piece[0])):
#         x,y=piece[0][i]
#         turtle.goto(x,y)

#     for i in range(len(piece[1])):
#         x,y=piece[1][i]
#         turtle.goto(x,y)
#     turtle.end_fill()
# draw_piece(piece1,piece1Goto)
# draw_piece(piece2,piece2Goto)
# draw_piece(piece3,piece3Goto)
# turtle.hideturtle()
# turtle.done()
import numpy as np
arr1=np.array([1,2,3,4,4,5,6,6,7])
print(arr1)