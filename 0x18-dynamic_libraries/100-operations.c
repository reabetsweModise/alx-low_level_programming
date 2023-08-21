int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);

/**
* add -Sum of two numbers
* @x: first number 
* @y: second second
* Return: the sum
*/

int add(int x, int y)
{
	return (x + y);
}

/**
* sub -diference of two number
* @x: first number
* @y: second number
* Return: the difarence
*/

int sub(int x, int y)
{
	return (x - y);
}

/**
* mul -product of two numbers
* @x: first number
* @y: second number
* Return: the product
*/

int mul(int x, int y)
{
	return (x * y);
}

/**
* div - division of  two number
* @x: first number
* @y: second number
* Return: results
*/

int div(int x, int y)
{
	return (x / y);
}

/**
  mod -remainder of  two numbers
  @x: first number
  @y: second number
  Return: the modulus
*/

int mod(int x, int y)
{
	return (x % y);
}
