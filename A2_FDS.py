def average(marks):
 sum=0
 for i in marks:
    sum=sum+i
 average=sum/n
 print("\nAverage of Students : ",average)

def max_min(marks):
   min=marks[0]
   max=marks[0]
   for i in marks:
      if min>i:
         min=i
      if max<i:
         max=i
   print("Minimum number of Marks : ",min)
   print("Maximum number of Marks : ",max)

def absent(marks):
   count=0
   for i in marks:
      if i == 0:
         count+=1
   print("Number of Absent Students : ",count)

def freq(marks):
   marks_freq=0
   for i in marks:
      count=0
      for j in marks:
         if i == j:
            count+=1
      if count>marks_freq:
         marks_freq=count
         highest=i
   print(f"Marks with Highest Frequency {highest} occured {marks_freq} times")
         
   


marks=[]
n=int(input("Enter Number of Students : "))
for i in range(n):
    num=int(input(f"Enter Marks of Student {i+1} : "))
    marks.append(num)

average(marks)
max_min(marks)
absent(marks)
freq(marks)