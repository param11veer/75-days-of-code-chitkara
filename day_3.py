#print a diamond of satrs
number = int(input())
count = number
counter = number
for rows in range(1, number+1):
    count = count - 1
    spaces = " "*count
    stars = "* "*rows
    upper_half = spaces + stars
    print(upper_half)
for rows in range(1, number+1):
    counter = counter - 1
    spaces = " "*rows
    stars = "* "*counter
    lower_half = spaces + stars
    print(lower_half)
    
    
#Print a pattern of M through stars
number = int(input())
count = number
for i in range(1, number+1):
    count = count - 1
    first_spaces = " "*count
    first_star = "* "*i
    second_spaces = 2*first_spaces
    second_star = "* "*i
    pattern = first_spaces + first_star + second_spaces + second_star
    print(pattern)
    
    
#WAP to print the count of digits for 1 to n
number = int(input())
sum = 0
for digit in range(1, number+1):
    lenght = len(str(digit))
    if(lenght < 10):
        sum = sum + lenght
    elif(10 <= lenght < 100):
        sum = sum + lenght
    elif(100 <= lenght < 1000):
        sum = sum + lenght
    
print(sum)



#wap to print sum of n terms where series goes like X**1, -X**3,X**5,-X**7.........
X = int(input())
number = int(input())
sum = 0
sum_1 = 0
count = 3
counter = 1
for digits in range(1, number+1):
    if(counter != count):
        term = X**counter
        sum = sum + term
    # counter = counter + 2
    if(counter == count):
        term_1 = -(X**counter)
        sum_1 = sum_1 + term_1
        count = count + 4
    counter = counter + 2
print(sum + sum_1)



#wap to check if the n given number has more than 2 factors or not
number = int(input())
count = 0
counter = 0
for i in range(1, number+1):
    counter = counter + 1
    if(number%i == 0):
        count = count + 1
    if(counter >= number):
        if(count>2):
            print("Number has more than 2 factors")
        if(count<=2):
            print("Number doesn't have more than 2 factors")
            
            
            
height = float(input("Enter your height : "))
weight = float(input("Enter your weight : "))
bmi = round(weight/height**2) 
# round function basically rounds off to nearest whole number
if bmi<18.5:
    print(f"your bmi is {bmi}, you are under weight")
elif bmi<25:
    print(f"ypur bmi is {bmi}, you are normal weight")
elif bmi<30:
    print(f"ypur bmi is {bmi}, you are over weight")
elif bmi<35:
    print(f"ypur bmi is {bmi}, you are obese")
else:
    print(f"ypur bmi is {bmi}, you are clinically obese")




print('''
                            _.--""""--.._
                          _.""    .'       `-._
                        .";      ;           ; `-.
                       / /     .'           ;     `.
                      / ;     ;             ;       \
                     ; :      :             :     `-.\
                     ; ;      :              `.      `;
                     : :      :                \      :
                     : \      `:                \   `.;
                      \ \      `;                ;    ;
                       \ : .'   ;                |   ;
                        `>'     :              `.;   )
                        / _.'               `.  ;/ _(
                       ;,'     ;    `.        `.;    `-.
                      ;' .'   :    `. `.       / \, \ \ \
                      :,'     :      `. `. \  ; ::\_/_/_/::
                    .-=:.-"  -,-   "-.,=-.\ ;.; :::; ; ;::
                    |(`.`     :       .')| \: `.  :::::::
                     \\/      :       \//   ;   \              _____
                      :      .:.       :  _/     ;             \hjw:
            /         ;                ;  ;      |              \"""
          .'          :    _     _    ;  /       ;              /|
         /             `.  \;   ;/  .' .'       /              /:|
        |                !  :   :  !_.'        /           .--::/
        |\___             `.:   :.'/\         ;      ____.':|:|/
        \:::|\              \ _ /  | :       :   ___/|:::|:'"""
         `""|:\             ;"^"   | !       :__/|::|/""""
            \::\_____     .-'      | ;       |::|/""
             \:|::::|\   / / /    / /       /"""
              \|::::|:`--\_\_\__.'-|       ;
                """" \::::::::::::/      .'
                      """"'"""".-'      (
               __,------.__.--/ , ,  , |/--._
              /              :\|  |  |v'     \_
             |\              :::v-;v-'::       \
             \:\              :::::::::         \
              \|`-.                             /|
                `: \          ____         ____/:/
                  \|:-.______/|__|\       /|:::|/
                   |::|:::::|:/   \\_____/:/""""
                   `-:|:::::|/     \|::::|/
                       """""'       `""""'
                       
                       ''')