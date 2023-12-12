def inputlist(sport_name,sport):
 n=int(input(f"Enter Number of Students playing {sport_name} : "))
 print(f"Enter Names of Students playing {sport_name} :- ")
 for i in range(n):
    exists = True
    while(exists==True):
     name=input("•")
     if name not in sport:
        exists=False
     else:
        print("Please don't enter duplicate entries.")
    sport.append(name.title())    
 return sport

def cricket_badminton(cricket,badminton):
  common=[]
  for c in cricket:
    if c in badminton:
      common.append(c)
  print("\nList of Students playing both cricket and badminton :-")
  for i in common:
    print("•"+i)

def not_both(cricket,badminton):
  not_common=[]
  for c in cricket:
    if c not in badminton:
      not_common.append(c)
  for b in badminton:
    if b not in cricket:
      not_common.append(b)
  print("\nList of Students playing either cricket and badminton but not both :-")
  for i in not_common:
    print("•"+i)

def neither(cricket,badminton,football):
  neither=[]
  for i in football:
    if i not in cricket and i not in badminton:
      neither.append(i)
  print("Number of Students who play neither Cricket nor Badminton : ",len(neither))

def not_badminton(cricket,badminton,football):
  notbad=[]
  for i in football:
    if i  in cricket and i not in badminton:
      notbad.append(i)
  print("Number of Students who play Cricket and football but not Badminton : ",len(notbad))
  
cricket=[]
badminton=[]
football=[]
inputlist("Cricket", cricket)
inputlist("Badminton", badminton)
inputlist("Football", football)
cricket_badminton(cricket,badminton)
not_both(cricket,badminton)
neither(cricket,badminton,football)
not_badminton(cricket,badminton,football)