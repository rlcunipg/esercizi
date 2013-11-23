def move(n, fr, to, using):
    if(n == 0):
        return
    else:
        move(n-1, fr, using, to)
        print "Muovo da", fr, "a", to
        move(n-1, using, to, fr)

move(10, 1, 3, 2)
