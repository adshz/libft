# Setting Up Environment in Your Laptop

> Massively thank you Emily(emflynn) for guiding me through setting up tester and walked me together through the process of writing own code and test it.

### Step 1: clone the tester repo

First, you can open terminal and type the command `cd`  to change your directory to the one directory you want to clone the entire repo "LibftTester". If you haven't created, you should create a file called `Libft` as the one you will be working in your C library for the first part of common core. 

Suppose you are in the directory you want to work for the common core, and you can clone the repo with the command `git clone` and the link with github repo of LibftTester.

```
git clone https://github.com/Tripouille/libftTester
```
> Optional part, you can skip to the step 2

let's have a look at what files are there. We have files: `Dockerfile`, `Makefile` , `README.md` + two folders - `tests`, `utils`

![files under `tests` folder](https://i.imgur.com/9oHgdJr.png)


### Step 2: create a file to test

We need to know about how to use LibftTester and what the workflow is. The best to know is to learn by doing. Hence we are going to create a test file where we  write some C code. Under the same directory of `libft` as the directory of `libftTeste`, you can create a file `ft_strlen.c` outside the folder `libftTester` 
Notice: `ft_strlen.c` and `libftTester` are all under the same directory ( in my case it's called `libft` as the folder to be submitted)

you can copy and paste code into the file `ft_strlen.c`

```
int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
```

then, you can type `wq` to save and exit

### Step 3: create the header file `libft.h`

inside the `libft.h`

you can copy and paste code below in this file `libft.h` ( I asked chatGPT about what the header file in C is. See [link](https://chat.openai.com/share/610dd2ce-f07a-425f-9c89-56d2b0c70cac)

```
#ifndef LIBFT_H
# define LIBFT_H

int        ft_strlen(char *str);

#endif
```

Whenever you create a new `.c` file, please remember to propotype the function here. for example, you can go back to the step 2 to create a file called `ft_isalpha.c` and then you can come back to here to insert a line of code ` int ft_isalpha(int c)` under `int ft_strlen(char *str)` before `#endif`

![workflow](https://i.imgur.com/WjQkob8.png)


### Step 4: `vim Makefile` copy and paste the code below

```
NAME :=        libft.a
SRCS :=        ft_strlen.c
OBJS :=        $(SRCS:.c=.o)

CC :=        cc
CFLAGS :=    -Wall -Wextra -Werror

AR :=        ar rcs

RM :=        rm -f

%.o:        %.c
            $(CC) $(CFLAGS) -I ./includes -c $< -o $@

$(NAME):    $(OBJS)
            $(AR) $@ $^

all:        $(NAME)

clean:
            $(RM) $(OBJS)

fclean:        clean
            $(RM) $(NAME)

re:            fclean all

.PHONY:        all clean fclean re

```

> Note: it may not work because when you copy and paste code into Makefile,
> tab can be converted into space, so what you need to fix is to tidy up them from space to tab

### Step 5: install `clang` (gcc compiler) and `valgrind` (this is for checking memory leak)

![clang](https://i.imgur.com/8Ftnz14.png)

```
sudo apt install clang
```

if you're in linux environment, you can use this code to install valgrind
![valgrind](https://i.imgur.com/PUEtlx4.png)

once you done it, you can start to test your code

### Step 6: Use libftTeser

`cd libftTeste`

once you cd, you can try `make strlen` it should pop up something in your terminal

![output](https://i.imgur.com/AejRAZp.png)

the reason why you don't need `ft_` because in the Makefile in the `LibftTester` they did it for you

see the attached pictue below

![ft_](https://i.imgur.com/DIiHwpm.png)

## Norminette

### Use pip to install Norminette

you can see if you have python install 

try `python --verson` if this didn't have one , try `python3 --version`
```
Command 'python' not found, did you mean:
command 'python3' from deb python3
command 'python' from deb python-is-python3
```

try `pip --version` to see if you have pip manager installed

if you see the pathway output in the terminal you can install norminette `pip install norminette`

you can start to test it by `norminete ft_strlen` to see the familiar thing...

## Your favourite 42 Header

- [Source](https://github.com/42Paris/42header/tree/master)

I am using a vim plugin manager [Vim Plugins Manager](https://github.com/junegunn/vim-plug)

Step 1: Go to `~/.vimrc` to add the code below

```
let g:user42 = 'yourLogin'
let g:mail42 = 'yourLogin@student.42.fr'
```

Step 2: Put the github username + repo in `~/.vimrc`

I just put `Plug `42Paris/42header` in between `call plug#begin('~/.vim/plugged')` and `call plug#end()`; you need to learn how to use the plugin manger ,please check the repo [Vim Plugins Manager](https://github.com/junegunn/vim-plug)

it looks like 

```
call plug#begin('~/.vim/plugged')

Plug '42Paris/42header'

call plug#end()
```

Then you save it by `w`

Step 3: Update Plugins in Vim

You type semi-colons `:` and then you type `PlugIn`; In the end, the command `:PlugIn` will lead you to the plugin manager.

You type `PlugUpdate` and see the 42Paris is completed. So you can use your favourite header`

![42Header](https://i.imgur.com/D8tt0KM.png)
