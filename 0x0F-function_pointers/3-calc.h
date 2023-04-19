#ifndef CALC_H
#define CALC_H

/**
 * Struct op - A stract op
 * @op: The operator
 * @f: associated function
 */
typedef struct op
{
	char *op;
	int (*f)(int 1, int 2);
} op_t

int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);
	int (*get_op_func(char *s))(int, int);

#endif
