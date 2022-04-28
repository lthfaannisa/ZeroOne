#pola segitiga
print("Projek nomor 3 Kelompok 5/n")
n = int(input("Masukkan baris yang anda inginkan : "))

for x in range(n+1):
  for y in range(n - x +1):
    print(" ",end="")
    for z in range(x):
      print("", z +1,end="")
      
      print()
      
