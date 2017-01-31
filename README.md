# Get_next_line

A C function that reads any valid file line by line until the end. My implementation also accomodates reading from multiple files simultaneously.

### Contents
* [What is get_next_line?](#what-is-get_next_line)
* [Why would I use it?](#why-would-i-use-it)
* [How do I use it?](#how-do-i-use-it)

### What is get_next_line?

Get_next line is an individual project at [42 Code school] [1] that basically reads a file line by line. See the subject and all requirements [here][2].

### Why would I use it?

You will only really need to use this function if you are a 42 Student. Otherwise, there are already standard implementations that do the same thing such at [getline][3].

This project is meant to be a learning experience that will teach you about static variables, linked lists, pointers, and dynamic memory allocation. It requires that you implement the function only using the standard library functions `read`, `malloc`, and `free`.

### How do I use it?

To run get_next_line, you'll need a main function. Fortunately I've included one in the file `main.c` that takes a file name as argument, opens it, and passes the file descriptor to get_next_line until the function returns -1 or 0. 

These return values signify that either an error occured or the entire contents have been read, respectively. The function returns a 1 if a line was succesfully read.

##### Alright, lets get started.

The first thing you'll need to do is clone the repo:

		git clone https://github.com/beasleyz/42_GetNextLine.git

Get into the directory and build the library:

		cd get_next_line
		make -C libft/

Allow some time to compile all the library files.

Then, build the executable:

		gcc -Wall -Werror -Wextra -I./libft/ -L./libft -lft -o getnextline get_next_line.c main.c

-I tells the compiler where your library header files are. In this case simply in the libft folder `./libft`.

-L tells it where your to find your actual library. Also in `./libft` since you've just created it with 'make'.

-l takes the name of your library. This is the set of characters that come after `lib` in your library name.

The last command created an executable in your directory called `getnextline`. Now test it by running:

		./getnextline sea_wolf.txt

It should read the whole file, displaying to you on the standard output.

**Note:** The passage in the text file is from [Jack London][4]'s novel, "[The Sea Wolf][5]". A great read for anyone interested in philosophy, adventure, or the sea.




[1]: http://42.us.org "42 USA"
[2]: https://github.com/beasleyz/42_GetNextLine/blob/master/get_next_line.en.pdf "get_next_line PDF"
[3]: http://man7.org/linux/man-pages/man3/getdelim.3.html
[4]: https://en.wikipedia.org/wiki/Jack_London
[5]: https://www.amazon.com/Sea-Wolf-Dover-Thrift-Editions/dp/0486411087/ref=sr_1_1?s=books&ie=UTF8&qid=1485854084&sr=1-1&keywords=The+Sea+Wolf