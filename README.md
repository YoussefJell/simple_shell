# Simple Shell
Our Holbertonschool simple_shell project.

### Description
A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems.
The shell is both an interactive command language and a scripting language,
and is used by the operating system to control the execution of the system using shell scripts.
___
### Installation
• All the files (*.c and main.h) have to be compiled on Ubuntu 20.04 LTS.
```sh
$ git clone https://github.com/YoussefJell/simple_shell.git

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

$ ./hsh
```
### Output Examples
```sh
vagrant@ubuntu-focal:~/simple_shell$ ./hsh
($) ls
README.md  _getenv.c  check_path.c  execute_arg.c  hsh  main.c  main.h
print_env.c  read_line.c  signal_handler.c  split_str.c  strUtils.c
($) exit
vagrant@ubuntu-focal:~/simple_shell$
```

# Authors
- Ahmed Elzowawi and Youssef Jellouli