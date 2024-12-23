def area_sum(rectangles):
    square_sum = 0
    for i in range(0, len(rectangles)):
        square_sum += rectangles[i]["width"] * rectangles[i]["height"]
    return square_sum
