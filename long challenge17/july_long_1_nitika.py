tc =int(input())
for i in range(tc):
  xs = input()
  name_list = xs.split()
  str =name_list[-1]
  str=str.title()
  initials = ""
 
  for name in name_list[:-1]:  
      initials += name[0].upper()+". " 
  print(initials+str) 