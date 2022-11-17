/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:57:22 by mfinette          #+#    #+#             */
/*   Updated: 2022/09/20 20:14:25 by mfinette         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
 
void    print_result(int board[10][10])
{
    int     i;
    int     j;
    char    c;
 
    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            if (board[i][j] == 1)
            {
                c = '0' + j;
                write(1, &c, 1);
                j = 10;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}
 
 
int check_diagonale(int board[10][10], int row, int col, int mode)
{
    if (mode)
    {
        while (row >= 0 && col >= 0)
        {
            if (board[row][col])
                return (0);
            row--;
            col--;
        }   
    }
    else
    {
        while (col >= 0 && row < 10)
        {
            if (board[row][col])
                return (0);
            row++;
            col--;
        }
    }
    return (1);
}
 
int check_queen(int board[10][10], int row, int col)
{
    int i;
 
    i = 0;
    while (i < col)
    {
        if (board[row][i])
            return 0;
        i++;
    }
    if (!check_diagonale(board, row, col, 1)
        || !check_diagonale(board, row, col, 0))
        return 0;
    return 1;
}
 
int solve(int board[10][10], int col)
{
    int i;
    int j;
 
    if (col == 10)
    {
        print_result(board);
        i = 0;
        return 1;
    }
 
    i = 0;
    while (i < 10)
    {
        if (check_queen(board, i, col))
        {
            board[i][col] = 1;
 
            if (solve(board, col + 1))
                continue;
 
            board[i][col] = 0;
        }
        i++;
    }
 
    return 0;
}
 
int ft_ten_queens_puzzle(void)
{
    int board[10][10];
    int i;
    int j;
 
    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            board[i][j] = 0;
            j++;
        }
        i++;
    }
 
    solve(board, 0);
    return 1;
}
 
int main()
{
    ft_ten_queens_puzzle();
    return 0;
}
