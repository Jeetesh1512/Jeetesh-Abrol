rs = int(input('''Enter the amount so that I can tell you
about the minimum no. of notes : '''))

while rs>= 2000:
    two_k = rs//2000
    rs = rs%2000
    print(f"No. of 2000 Rs. notes = {two_k}")
    break

while rs>= 500:
    f_hundred = rs//500
    rs = rs%500
    print(f"No. of 500 Rs. notes = {f_hundred}")
    break

while rs>= 200:
    two_hundred = rs//200
    rs = rs%200
    print(f"No. of 200 Rs. notes = {two_hundred}")
    break


while rs >= 100:
    hundred = rs // 100
    rs = rs%100
    print(f"The no. of 100 Rs. notes= {hundred}")
    break

while rs>= 50:
    fifty = rs//50
    rs = rs%50
    print(f"No. of 50 Rs. notes = {fifty}")
    break

while rs>= 20:
    twenty = rs//20
    rs = rs%20
    print(f"No. of 20 Rs. notes = {twenty}")
    break

while rs>= 10:
    ten = rs//10
    rs = rs%10
    print(f"No. of 10 Rs. notes = {ten}")
    break

while rs>= 5:
    five = rs//5
    rs = rs%5
    print(f"No. of 5 Rs. notes = {five}")
    break



while rs>=2:
    two = rs//2
    rs = rs%2
    print(f"NO. of 2 Rs. notes = {two}")

while rs>=1:
    one = rs
    print(f"The no of 1 Re. note = {one}")
    break



    

