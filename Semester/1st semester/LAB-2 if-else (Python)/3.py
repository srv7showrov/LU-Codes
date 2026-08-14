# Problem 3

a = int(input("Enter your first score: "))
b = int(input("Enter your second score: "))
c = int(input("Enter your third score: "))
s = ((a+b+c)/3)
t = int(input("""Enter total number of classes: """))
stud = int(input("""Enter the number of days student attended the classes: """))
grade = ""

per = ((stud/t)*100)
if(s>=80):
    grade="First Class"

    if(per>60):
        print("You will be able to sit for the exam")
        print("Congratulations! You are eligible for the scholarship")
    else:
        print("""Sorry! You cannot sit for the exam""")

elif(s>=60):
    grade="Second Class"
    if(per>60):
        print("""You will be able to sit for the exam""")
    else:
        print("""Sorry! You cannot sit for the exam""")

elif(s>=40):
    grade="Third Class"
    if(per>60):
        print("""You will be able to sit for the exam""")
    else:
        print("""Sorry! You cannot sit for the exam""")
else:
    grade="Fail"

print(grade)