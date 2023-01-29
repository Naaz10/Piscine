/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:43:15 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/05 12:43:17 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_HEADER_H

#define NUM_HEADER_H
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include<stdlib.h>
int get_length(char *str);
void print_char(char ch);
void print_str(char *str);
int get_err(void);
int atoi_1(char n);

int verify_condition(int argc, char **argv);
int verify_number(char *argv);
int verify_dict(char *argv);
void get_number(int argc, char **srgc, char **n);
void free_memory(char *file, char *dict, char *n);

char *get_dict_file(int argc, char **argv);
char *read_dict(char *file);
void write_number(char *n, char *dict);
void write_tri(char *n, int len, char *dict);

void write_single(char digit, char *dict);
void write_double(char digit, char *dict);
void write_triple(char digit, char *dict);

int if_single(char digit, char *dict, int d);
int if_double(char digit, char *dict, int d);
int if_triple(char digit, char *dict, int d);

int	ft_strcmp(char *s1, char *s2);
#endif
