/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:51:53 by szhong            #+#    #+#             */
/*   Updated: 2024/04/24 17:44:01 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

# define NUMBERS "0123456789"
# define FLAGS "+ 0-#"
# define BUFFER_SIZE 4096
# define TRUE 1
# define FALSE 0
# define SPECIFIERS "cspudixX%"
# define UP_HEX "0123456789ABCDEF" 
# define LO_HEX "0123456789abcdef"

typedef union t_union_int
{
	unsigned long	uint64;
	long int		int64;
}	t_union_int;

typedef enum t_e_error
{
	SUCCESS = 1,
	MALLOC_FAIL = -1989,
	PARSE_ERROR = -2010,
	FORMAT_STRING_EMPTY = 0,
	INITIALIZATION_ERROR = -1
}	t_e_error;

typedef enum t_e_base
{
	BASE_2 = 2,
	BASE_8 = 8,
	BASE_10 = 10,
	BASE_16 = 16,
}	t_e_base;

typedef struct s_format
{
	char			specifier;
	char			buf_tmp[64];
	int				left_justified;
	int				zero_pads;
	int				plus;
	int				space;
	int				hash;
	int				width_value;
	int				precision_value;
	int				nbrlen;
	int				upper;
	int				padding_spaces;
	int				padding_zeros;
	int				signed_value;
	int				is_negative;
	int				is_converted;
	t_e_base		base;
}	t_format;

typedef struct s_data
{
	t_format	format;
	int			buffer_indx;
	int			written_count;
	const char	*s;
	va_list		ap;
	char		*buff;
}	t_data;

void		flush_buff(t_data *data);
void		write_buff(t_data *data, char c);
void		putchar_buff(char c, int precision, t_data *data);
void		putstr_buff(char *s, int precision, t_data *data);
void		itoa_buff(t_data *data, t_union_int int_box);
void		print_char(t_data *data, int c);
void		render_fmt(t_data *data);
void		print_int(t_data *data, t_union_int int_box);
void		print_str(t_data *data, char *s);
void		set_padding_zeros(t_data *data);
void		set_padding_spaces(t_data *data);
void		cal_precision_padding(t_data *data);
void		cal_width_padding(t_data *data);
void		adj_zero_special(t_data *data);
void		cal_padding_space(t_data *data);
void		adj_space_special(t_data *data);
void		handle_int_spec(t_data *data, char spec, t_union_int *ptr_intbox);
void		convert_digit(t_data *data, t_union_int int_box);
int			data_init(t_data *data, const char *fmt);
int			ft_printf(const char *fmt, ...);
int			parse_fmt(t_data *data);
int			in(const char *s, char c);
#endif
