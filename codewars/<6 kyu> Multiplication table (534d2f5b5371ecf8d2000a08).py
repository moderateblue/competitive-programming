def multiplication_table(size):
    table = [[(x * y) for x in range(1, size+1)] for y in range(1, size+1)]
    print(table)
    return table
