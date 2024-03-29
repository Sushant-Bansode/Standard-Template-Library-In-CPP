// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Structure of stack
class Stack {
public:
	// Stores index of top
	// element of a stack
	int top;

	// Stores maximum count of
	// elements stored in a stack
	unsigned capacity;

	// Stores address of
	// array element
	int* array;
};

// Function to Initialize a stack
// of given capacity.
Stack* createStack(unsigned capacity)
{
	Stack* stack = new Stack();
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = new int[(stack->capacity
							* sizeof(int))];
	return stack;
}

// Function to check if
// the stack is full or not
int isFull(Stack* stack)
{
	return stack->top
		== stack->capacity - 1;
}

// Function to check if
// the stack is empty or not
int isEmpty(Stack* stack)
{
	return stack->top == -1;
}

// Function to insert an element
// into the stack.
void push(Stack* stack, int item)
{

	// If stack is full
	if (isFull(stack))
		return;

	// Insert element into stack
	stack->array[++stack->top] = item;
}

// Function to remove an element
// from stack.
int pop(Stack* stack)
{

	// If stack is empty
	if (isEmpty(stack))
		return -1;

	// Pop element from stack
	return stack->array[stack->top--];
}

// Function to reverse the array elements
void reverseArray(int arr[], int n)
{

	// Initialize a stack of capacity n
	Stack* stack = createStack(n);

	for (int i = 0; i < n; i++) {

		// Insert arr[i] into the stack
		push(stack, arr[i]);
	}

	// Reverse the array elements
	for (int i = 0; i < n; i++) {

		// Update arr[i]
		arr[i] = pop(stack);
	}

	// Print array elements
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver Code
int main()
{

	int arr[] = { 1, 2, 3, 4, 5 };

	int N = sizeof(arr) / sizeof(arr[0]);
	reverseArray(arr, N);
	return 0;
}