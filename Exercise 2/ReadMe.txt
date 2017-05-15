Exercise 2
________________

I have no idea whether this was required by the Exercise,
but guess we have to be able to do it anyway, so here's some explanation
and analyses and stuff you probably want to know about this algorithm.

________________
First of all, a little explanation:

			/ a[0]								if length==1
sum_rec =  <
			\ a[0] + sum_rec(a[1], length-1)	if length>1
			
The function calls itself recursivly by handing the second Element
of the array (and decreasing the length by one) to the function.

It's a (lineare) Endrekursion.

_________________
How about runtime?

Since the sum_rec gets called exactly "length"-times, and all the other
commands are constant, we can say the runtime is

O(length)




________________
Actual algorithm without error checking and other stuff

int sum_rec(int a[], int length)
{
	if (length == 1)
		return *a;
	return *a + sum_rec(a + 1, length - 1);
}