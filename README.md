# Project Title

A C function that reads any valid file line by line until the end. My implementation can handle reading from multiple files simultaneously. 

### Contents
* [What is get_next_line?](#what-is-get_next_line)
* [Why would I use/try it?](#why-would-i-use-it)
* [How do I use it?](#how-do-i-use-it)
* [How do I try it out?](#how-do-i-try-it-out)
* [How do I test my own code?](#how-do-i-test-it?)

### What is get_next_line?

Get_next line is an individual project at [42 Code school] [1] that basically reads a file line by line. See the subject and all requirements [here][2].

### Why would I use it?

You will only really need to use this function if you are a 42 Student. Otherwise, there are already standard implementations that do the same thing such at [getline][3].

This project is meant to be a learning experience that will teach you about static variables, linked lists, pointers, and dynamic memory allocation. It requires that you implement the function only using the standard library functions read, malloc, and free.

### How do I use it?

To run get_next_line, you'll need a main function. Fortunately I've included one in the file main.c that takes a file name as argument, opens it, and passes the file descriptor to get_next_line until the function returns -1 or 0. These return values signify that either an error occured or the entire contents have been read, respectively. The function returns a 1 if a line was succesfully read.

##### Alright, lets get started.

The first thing you'll need to do is clone the repo:

		git clone https://github.com/beasleyz/42_GetNextLine.git

Get into the directory and build the library:



[1]: http://42.us.org "42 USA"
[2]: https://github.com/beasleyz/42_GetNextLine/blob/master/get_next_line.en.pdf "get_next_line PDF"
[3]: http://man7.org/linux/man-pages/man3/getdelim.3.html