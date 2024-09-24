#!/bin/sh

# -rwxrwxrwx
# the first character is d is for directory or l for link
# the first group of three is for the file owner
# the second group is for the group that owns the file
# the last three are for everyone else (not user owner or group owner)

# USEFUL COMMANDS
# tee writes to file and the stdout at the same time
# xdg-open opens a file with the default program

# cd - goes to the previous directory

# < and > let you rewire the input and ouput streams of a program to a file
# puts text into file
echo hello > hello.txt

# prints text in file to stdout
cat hello.txt

# not given any arguments so it prints the contents from its input stream
# to its ouput stream
cat < hello.txt

# will copy the contents of hello.txt into hello2.txt
cat < hello.txt > hello2.txt

cat hello.txt

# >> lets you append to file
echo world >> hello2.txt


# the pipe | lets you chain programs such that the output of one is the input
# of another
# only ouput the last line
ls -l / | tail -n1

curl --head --silent google.com | grep --ignore-case content-length | cut --delimiter=' ' -f2
