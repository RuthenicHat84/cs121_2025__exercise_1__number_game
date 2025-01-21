# cs121_2025__exercise_1__number_game
Number Guessing Game

```
import IO
import random*
import string

Create "username" char[]
Create "number" int
Create "turn" int
Create "guess" int
Create "keepGoing" bool

Ask User to input their name in the terminal
Assign value to "username"
Print a greeting, with the "username"

generate a random number from 1-100 (inclusive) and assign it to number

while keepGoing is true -
	incriment turn by 1,
	ask user for guess, and store in "guess"
	if guess > number;
		print "too high"
	if guess < number;
		print "too low"
	if guess is number;
		print "Correct!"
		keepGoing set to false 

evaluate performace -
	if turns > 7;
		print "Try Again to Get Less Turns!"
	if turns == 7;
		print "Good Job!"
	if turns < 7;
		print "Wonderful!"
```
