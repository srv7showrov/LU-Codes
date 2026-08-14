# Problem 2

name = input("Enter your name: ")

math = int(input("Enter your marks for Math: "))
english = int(input("Enter your marks for English: "))
science = int(input("Enter your marks for Science: "))

average = (math + english + science) / 3

if average.is_integer():
    print(f"\nAverage: {int(average)} (whole number!)")
else:
    print(f"\nAverage: {average:.2f}")
grade = ""
if average >= 80:
    grade = "First Class"
elif average >= 60:
    grade = "Second Class"
elif average >= 40:
    grade = "Third Class"
else:
    grade = "Fail"

print(f"Grade: {grade}")