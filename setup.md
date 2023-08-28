# Setting Up Environment in Your Laptop

> Massively thank you Emily(emflynn) for guiding me through setting up tester and walked me together through the process of writing own code and test it.

### Step 1: clone the tester repo

First, you can open terminal to `cd` the one folder you want to clone the repo.

```
git clone https://github.com/Tripouille/libftTester
```

let's have a look at what files are there.

we have files: `Dockerfile`, `Makefile` , `README.md` + two folders - `tests`, `utils`

![files under `tests` folder](https://i.imgur.com/9oHgdJr.png)
### Step 2: create a file to test

you can create a file `ft_strlen.c` outside the folder `libftTester` but under the same directory ( in my case it's called `libft` as the folder to be submitted)

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

you can copy and paste code below

```
#ifndef LIBFT_H
# define LIBFT_H

int        ft_strlen(char *str);

#endif
```

in this file, whenever you create a new `.c` file, remember to propotype the function here. for example, you can go back to the step 2 to create a file called `ft_isalpha.c` and then you can come back to here to insert a line of code ` int ft_isalpha(int c)` under `int ft_strlen(char *str)` before `#endif`

alright

Step 4: create a Makefile via `vim libft.h` under the same direcotry outside `libftTester`

Step 5: `vim Makefile` copy and paste the code below

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

Note: it may not work because when you copy and paste code into Makefile, tab can be converted into space, so what you need to fix is to tidy up them from space to tab

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

## Use pip to install Norminette

you can see if you have python install 

try `python --verson` if this didn't have one , try `python3 --version`
```
Command 'python' not found, did you mean:
command 'python3' from deb python3
command 'python' from deb python-is-python3
```

try `pip --version` to see if you have pip manager installed

if you see the pathway output in the terminal you can install norminette `pip nstall norminette`

you can start to test it by `norminete ft_strlen` to see the familiar thing...



