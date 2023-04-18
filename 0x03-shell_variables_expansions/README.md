Task 0. alias ls="rm *" ==== Creates an alias
Task 1. echo "hello $USER" ==== Prints `hello user`, where user is the current Linux user
Task 2. export PATH=$PATH:/action ==== Adds `/action` to the `PATH`. `/action` should be the last directory the shell looks into when looking for a program
Task 3. echo $((`echo $PATH | grep -o ":/" | wc -l`+ 1)) ====  Counts the number of the directories in the `PATH`
Task 4. printenv ==== Lists environment variables
Task 5. set ==== Lists all local variables and environment variables, and functions
Task 6. BEST="School" ====  Creates a new local variable named 'School'
Task 7. export BEST="School"  ====    creates a new global variable named 'School'
Task 8. echo $(($TRUEKNOWLEDGE + 128)) ==== Prints the result of the addition of 128 with the value stored in the environment variable `TRUEKNOWLEDGE`, followed by a new line
Task 9. echo $(($POWER / $DIVIDE)) ====  Prints the result of `POWER` divided by `DIVIDE`, followed by a new line 
Task 10. echo $((BREATH**$LOVE)) ==== Displays the result of `BREATH` to the power `LOVE`
Task 11. echo $((2#$BINAR)) ==== Converts a number from base 2 to base 10.
Task 12. echo {a..z}{a..z} | tr " " "\n" | grep -v "oo" ==== Prints a number with two decimal places. The number is stored in the environment variable `NUM`.
Task 13. printf "%.2f" $NUM | sort ==== Prints a number with two decimal places. The number is stored in the environment variable `NUM`.
Task 14. printf '%x\n' $DECIMAL ==== converts a number from base 10 to base 16.
Task 15. tr 'A-Za-z' 'N-ZA-Mn-za-m'  ==== Encodes and decodes text using the rot13 encryption.
Task 16. perl -lne 'print if $. % 2 ==1' ==== Prints every other line from the input, starting with the first line.
Task 17. echo $(printf %o $(($((5#$(echo $WATER | tr 'water' '01234'))) + $((5#$(echo $STIR | tr 'stir.' '01234'))))) | tr '01234567' 'bestchol') ==== Adds the two numbers stored in the environment variables `WATER` and `STIR` and prints the result.
