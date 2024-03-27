# Compiling and running instructions 
1. for compiling simple foo.c file 
    gcc -Wall -Wextra -std=c2x -pedantic foo.c
2. For compiling multiple files and running `awesomegame`
    gcc -Wall -Wextra -std=c2x -pedantic -o awesomegame ui.c characters.c npc.c items.c
