# This code is "inspired by" this video: https://www.youtube.com/watch?v=jV0yhde5xY8

for i in range(1, 101): print("Fizz" * (i%3 == 0) + "Buzz" * (i%5 == 0) or i)

