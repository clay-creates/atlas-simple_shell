# Simple Shell

Welcome to **Simple Shell**, a Unix-inspired command-line interface created in C, where commands are parsed, interpreted, and executed in a minimal environment. This project serves as an accessible yet powerful tool to understand the foundations of shell programming, including process management, command parsing, and basic error handling. Developed with adaptability and modularity in mind, Simple Shell can be expanded or integrated into larger systems, showcasing practical applications of C programming in systems development.

## Project Story

Building this shell was both a learning journey and a deep dive into the fundamentals of Unix-like operating systems. Inspired by the minimalism of classic shells, I wanted to create a shell that didn’t just execute commands but highlighted every stage in command processing, from parsing to execution. This project, started as a foundational exercise, evolved into a robust shell that manages its own built-in commands and system-level commands alike.

During the development, I encountered complex challenges like managing memory for dynamic user input and handling concurrent processes effectively. Each solved challenge deepened my understanding of system-level programming and contributed to the final implementation you see today.

## Features

The Simple Shell is a work-in-progress with these current features:

- **Prompt and Input**: The shell presents a command prompt and reads user input seamlessly.
- **Command Parsing**: It splits and tokenizes commands, preparing them for execution.
- **Built-in Commands**: Handles essential built-ins like `exit` to terminate the shell and `env` to display environment variables.
- **External Command Execution**: For any non-built-in command, the shell forks a new process to execute the command using `execvp`.
- **Error Handling**: Includes error prompts for unrecognized commands or improper syntax.

### Future Development
- **Path Resolution**: Integrating path searching for commands without absolute paths.
- **Enhanced Built-in Commands**: Expanding functionality to handle commands like `cd`.
- **I/O Redirection**: Adding support for basic redirection of input/output.
- **Background Execution**: Implementing the ability to run commands in the background.

## Files Overview

- **shell.h**: Contains essential headers and function prototypes.
- **main.c**: Initializes and runs the main function of the shell.
- **shell.c**: Core logic, including the command loop and built-in command handling.
- **split_line.c**: Parses user input, tokenizing commands and arguments.
- **execute.c**: Responsible for executing both built-in and external commands.
- **prompt.c**: Manages the shell’s prompt display.
- **utils.c**: Utility functions, such as custom string comparison.

## Compilation and Setup

To compile Simple Shell, use the following command in your terminal:

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

-----------------------------------------------------------------------------------
About the Developer

I'm Clay Jones, a UX Engineer and Software Developer from Tulsa, Oklahoma. With a passion for creating intuitive, user-friendly systems, I focus on developing projects that combine the best of user experience with technical efficiency. Explore my work on GitHub or connect with me on LinkedIn.

Challenges and Reflections

The most challenging part of this project was ensuring smooth memory management during command processing, as well as handling concurrent processes for external command execution. By incorporating feedback and rigorous testing, I’ve refined the shell’s performance and aim to continue enhancing it to create an even more feature-rich command-line tool.
