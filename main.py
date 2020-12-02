def exponenta(x,eps):
    prevElem=1; currElem=(((-1)**1)*(x**1))/1;
    s=prevElem+currElem
    fact = 1
    difference = 1
    n = 1
    while ((difference>eps)or((difference==0) and (x!=0))):
        prevElem=currElem
        n+=1
        fact = fact*n
        currElem=(((-1)**n)*(x**n))/fact
        difference = abs(abs(currElem)-abs(prevElem))
        s+=currElem
    return s
x = float(input("Введіть значення змінної x: "))
while (x<0):
    x = int(input("Змінна x має бути більше нуля. Введіть ще раз:"))
eps = float(input("Введіть точність eps: "))
if (x>=0):
    if (x<=2):
        y = exponenta(x, eps) + exponenta(2 * x, eps)
    else:
        y = 1 / (exponenta(x + 5, eps)) - exponenta(x + 2, eps)

print("Значення y дорівнює: ",y)