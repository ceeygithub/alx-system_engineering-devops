Task 0. echo "Hello, World" ==== Prints “Hello, World”, followed by a new line to the standard output
Task 1. echo "\"(Ôo)'" ==== Displays a confused smiley "(Ôo)'.
Task 2. cat /etc/passwd ==== Display the content of the /etc/passwd file.
Task 3. cat /etc/passwd /etc/hosts ====  Displays the content of /etc/passwd and /etc/hosts
Task 4. tail -n 10 /etc/passwd ==== Displays the last 10 lines of /etc/passwd
Task 5.head -n 10 /etc/passwd ==== Displays the first 10 lines of /etc/passwd
Task 6.head -n 3 iacta | tail -n 1 ====  Displays the third line of the file iacta.The file iacta will be in the working directory
Task 7. echo "Best School" > \\\*\\\\"'\"Best School\"\\'"\\\\\*\$\\\?\\\*\\\*\\\*\\\*\\\*\:\) ====  Creates a file named exactly \*\\'"Best School"\'\\*$\?\*\*\*\*\*:) containing the text Best School ending by a new line.
Task 8. ls -la > ls_cwd_content ==== Writes  into the file ls_cwd_content the result of the command ls -la. If the file ls_cwd_content already exists, it should be overwritten. If the file ls_cwd_content does not exist, create it.
Task 9. tail -n 1 iacta >> iacta ====  Duplicates the last line of the file iacta.The file iacta will be in the working directory
Task 10. find . -type f -name "*.js" -delete ==== Deletes all the regular files (not the directories) with a .js extension that are present in the current directory and all its subfolders.
Task 11. find . -type d -not -name '.' | wc -l ==== Counts the number of directories and sub-directories in the current directory.The current and parent directories should not be taken into account,Hidden directories should be counted.
Task 12. ls -t1 | head -n 10 ==== Displays the 10 newest files in the current directory,One file per line,Sorted from the newest to the oldest
Task 13. sort | uniq -u ==== Creates a script that takes a list of words as input and prints only words that appear exactly once.Input format: One line, one word,Output format: One line, one word,Words should be sorted
Task 14. grep -i "root" /etc/passwd ==== Displays lines containing the pattern “root” from the file /etc/passwd.
Task 15. grep -c -i "bin" /etc/passwd ==== Displays the number of lines that contain the pattern “bin” in the file /etc/passwd.
Task 16. grep -i "root" -A 3 /etc/passwd ==== Displays lines containing the pattern “root” and 3 lines after them in the file /etc/passwd.
Task 17. grep -i -v "bin" /etc/passwd ==== Displays all the lines in the file /etc/passwd that do not contain the pattern “bin”.
Task 18. grep -i "^[a-z]" /etc/ssh/sshd_config ==== Displays all lines of the file /etc/ssh/sshd_config starting with a letter,including capital letters as well.
Task 19. tr "A" "Z" | tr "c" "e" ====  Replace all characters A and c from input to Z and e respectively.
Task 20. tr -d "Cc" ==== Removes all letters c and C from input.
Task 21. rev ==== Reverses its input.
Task 22. cut -d ':' -f 1,6 /etc/passwd | sort ==== Displays all users and their home directories, sorted by users.Based on the the /etc/passwd file
Task 23. find . -empty | rev | cut -d '/' -f 1 | rev ==== finds all empty files and directories in the current directory and all sub-directories
Only the names of the files and directories should be displayed (not the entire path)
Hidden files should be listed
One file name per line
The listing should end with a new line
You are not allowed to use basename, grep, egrep, fgrep or rgrep
Task 24. find -type f -name "*.gif" | rev | cut -d "/" -f 1 | cut -d '.' -f 2- | rev | LC_ALL=C sort -f ==== lists all the files with a .gif extension in the current directory and all its sub-directories.
Hidden files should be listed
Only regular files (not directories) should be listed
The names of the files should be displayed without their extensions
The files should be sorted by byte values, but case-insensitive (file aaa should be listed before file bbb, file .b should be listed before file a, and file Rona should be listed after file jay)
One file name per line
The listing should end with a new line
You are not allowed to use basename, grep, egrep, fgrep or rgrep
Task 25. cut -c 1 | paste -s -d '' ====  Decodes acrostics that use the first letter of each line.The ‘decoded’ message has to end with a new line
You are not allowed to use grep, egrep, fgrep or rgrep
Task 26. tail -n +2 | cut -f -1 | sort -k 1 | uniq -c | sort -rnk 1 | head -n 11 | rev | cut -d ' ' -f -1 | rev ==== parses web servers logs in TSV format as input and displays the 11 hosts or IP addresses which did the most requests.
Order by number of requests, most active host or IP at the top
You are not allowed to use grep, egrep, fgrep or rgrep
