while True:
    try:
        x = input()
        a = len(x)
        ct = 0
        p=0
        for i in range(a):
            if (x[i]>="a" and x[i]<="z") or ((x[i]>="A" and x[i]<="Z")):
                p=1
            else:
                ct = ct + p
                p=0

        ct=ct+p
        print(ct)


    except EOFError:
        break