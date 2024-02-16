gradeDic = {
    'A+': 4.5,
    'A0': 4.0,
    'B+': 3.5,
    'B0': 3.0,
    'C+': 2.5,
    'C0': 2.0,
    'D+': 1.5,
    'D0': 1.0,
    'F': 0.0
}

total_garde_point=0
total_credit=0
for i in range(20):
    subject, credit, grade = input().split()

    if grade == 'P':
        continue
    else:
        total_credit += float(credit)
        total_garde_point += float(credit)*gradeDic.get(grade)

print(total_garde_point/total_credit)