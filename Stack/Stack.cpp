#include <iostream>


class CStack
{

private:
	int MAX = 1000;

public:
	int  top;
	int* stack = new int[MAX];

	bool check_if_empty() 
	{
		return top < 0;
	}

	bool is_full()
	{
		return (top >= MAX - 1);
	}

	void push(int data)
	{
		if (!is_full()) 
		{
			stack[++top] = data;
		}

		else
		{
			std::cout << "stack overflow";
		}
	}

	int pop() 
	{
		if (check_if_empty())
		{
			std::cout << "stack underflow";
		}

		int x = stack[top--];
		return x;
	}

	void loopAndPrint() 
	{
		for (int i = 0; i < MAX; i++)
		{
			std::cout << stack[i] << "\n";
		}
	}
};

int main()
{
	CStack stack;
	stack.push(3);
	stack.push(3);
	stack.push(3);
	stack.push(3);
	stack.push(3);
	stack.push(3);
	stack.push(3);
	stack.push(3);
	stack.loopAndPrint();
	stack.pop();

	std::cout << "==END OF OP REACHED - NEW CALL==\n\n";
	stack.loopAndPrint();


	return 0;
}