l = int(input())
leds = 0

while l > 0:
    l-=1
    painel = input()
    for x in painel:
        if int(x) == 6 or int(x) == 9 or int(x) == 0:
            leds += 6
        elif int(x) == 1:
            leds += 2
        elif int(x) == 2 or int(x) == 3 or int(x) == 5:
            leds += 5
        elif int(x) == 4:
            leds += 4
        elif int(x) == 7:
            leds += 3
        else:
            leds += 7
    print(leds, "leds")
    leds = 0
