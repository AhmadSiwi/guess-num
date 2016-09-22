import random
# Guess the number game

# to use the randrange function import random

# Greeting
print ("Welcome to guess the number\n===========================")

# While loop to make the user play as many times he wants
while True:
    print("\nI'm thinking of a number up to 100, you have to guess what it is.\n")
    
    # choosing a random number up to 100
    num = random.randrange(100)
    # Take a guess
    guess = int(input("Take a guess: "))

    # While loop to check the answer
    while guess != num:
        if(guess < num):
            print ("Guess higher next time\n")
        else:
            print ("Guess lower next time\n")
        guess = int(input("Take a guess: "))
    # The loop is broken when guess is equal to num, so it's the right answer
    print("!!***CONGRATULATIONS***!!")

    # Ask the user to play again or exit
    choice = input("\nPress 'q' to exit, or any other letter to play again: ")
    if choice == 'q':
        break

print("\nGood Bye!\n")

