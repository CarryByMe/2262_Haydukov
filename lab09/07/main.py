def every_other(seq):
    it = iter(seq)
    x = next(it, None)
    while x!=None:
        yield x
        x = next(it, None)
        x = next(it, None)

print (*every_other([10, 20, 30, 40, 50]))