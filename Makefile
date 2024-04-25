NAME = libft.a #the expected library name file#
CC = gcc #do i still need to put this even if not using gcc? #
CFLAGS = -Wall -Wextra -Werror #flags are enough here?#
OFILES = $(CFILES:.c=.o) #converts from c to o file#

CFILES = \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c

all : $(NAME) # all is the target that creates the libft.a from the compilated files, clean will create the .o files once the makefile is compiled #
	@echo "--> Created file"

$(NAME) : $(OFILES) #if make file doesn't exist, it creates the file #
	ar rcs $(NAME) $(OFILES)
	@echo "--> Library created"
	ranlib $(NAME)
	@echo "--> Library Indexed"

#ar means archive
#r insert or replace OFILES to NAME
#c create the archive if it doesn't exist
#s write an index to the archive or update it if it exists #

%.o: %.c
		$(CC) $(FLAG) -c $< -o $@

#removes all the ofiles after compiling#
clean:
	rm -f $(OFILES)
	@echo "--> Cleaned object files"

#removes the library file after the make clean command
fclean: clean
	rm -f $(NAME)
	@echo "--> Removed $(NAME) file"

#rebuilds the file name?
re: fclean $(NAME)
	@echo "--> Recompiled everything"

#are all the actions that makefile can do
.PHONY: all clean fclean re
