# Scrabble Challenge

## Background

In the game of Scrabble, players create words to score points, and the number of points is the sum of the point values of each letter in the word.

For example, if we wanted to score the word Code, we would note that in general Scrabble rules, the C is worth 3 points, the o is worth 1 point, the d is worth 2 points, and the e is worth 1 point. Summing these, we get that Code is worth 3 + 1 + 2 + 1 = 7 points.

## Implementation Details

Notice that we’ve stored the point values of each letter of the alphabet in an array named POINTS (in scrabble.c file).
For example, 'A' or 'a' is worth 1 point (represented by POINTS[0]), 'B' or 'b' is worth 3 points (represented by POINTS[1]), etc.
You should prompt the two players for their words. These values are stored inside variables named word1 and word2.
Characters that are not letters should be given zero points, and uppercase and lowercase letters should be given the same point values.
For example, ! is worth 0 points while A and a are both worth 1 point.
Though Scrabble rules normally require that a word be in the dictionary, no need to check for that in this problem!
Finally, you should print, depending on the players’ scores, Player 1 wins!, Player 2 wins!, or Tie!.
