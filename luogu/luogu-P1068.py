n = 0
m = 0
n,m = list(map(int,input().split()))
infs = [0] * n
grades = [0] * n
nums = [0] * n
for i in range(0,n):
    nums[i],grades[i] = list(map(int,input().split()))
grades1 = grades.copy()
grades1.sort(reverse=True)
line_grade = int(grades1[int(m * 1.5) - 1])
grades_and_num =


