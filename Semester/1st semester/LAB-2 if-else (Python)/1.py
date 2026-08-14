# Problem 1

name = input("Enter your name: ")

math = int(input("Enter your marks for Math: "))
english = int(input("Enter your marks for English: "))
science = int(input("Enter your marks for Science: "))

average = (math + english + science) / 3

print(f"--- Grade Report for {name} ---")
print(f"Math: {math}")
print(f"English: {english}")
print(f"Science: {science}")
print(f"Average: {average:.2f}")
