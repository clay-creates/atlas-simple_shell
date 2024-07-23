# Simple Shell

This project is a simple Unix shell implemented in C. It reads user input, tokenizes it, and executes commands by forking a new process.

## Features

- Display a prompt and wait for user input.
- Read a line of input from the user.
- Tokenize the input into arguments.
- Execute built-in commands (`exit`, `env`).
- Execute system commands using `execvp`.
- Handle basic error cases.

## Files

- `shell.h`: Header file containing function prototypes and necessary includes.
- `main.c`: Contains the main function to start the shell.
- `shell.c`: Contains the main loop of the shell and functions to handle built-in commands.
- `split_line.c`: Contains the function to split input lines into tokens.
- `execute.c`: Contains the function to execute commands.
- `prompt.c`: Contains the function to display the shell prompt.
- `utils.c`: Contains utility functions like `_strcmp`.

## Compilation

To compile the shell, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
