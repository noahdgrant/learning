#!/bin/sh

# #!/usr/bin/env python <- is good for python scripts


# !! replays the last command. Usefull if you need to use sudo -> sudo !!
# $? gets the return value from the last command
# $_ last argument from last command

# && can concatinate commands
# ; can be used to separate commands on the same line

# command substitution
echo "current directory $(pwd)"
cat <(ls) <(ls ..)

echo "Running program $0 with $# arguments with pid $$"

# $@ is all arguments
# 2> is stderr
for file in "$@"; do
    grep foobar "$file" > /dev/null 2> /dev/null
    if [[ "$?" -ne 0]]; then
        echo "File $file does not have any foobar, adding one"
        echo "# foobar" >> "$file"
    fi
done

# expands to touch foo foo1 foo2 foo10
touch foo{,1,2,10}

# shellcheck can lint your scripts
# tldr can show quick usage examples
# history prints recent commands
# fzf to fuzzy find

# find can be files and do something to them
