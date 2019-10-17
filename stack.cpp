#include <iostream>
#include <stdio.h>

using namespace std;

bool StackFull(char S[], int top, int len)
{
	return (top == len - 1);
}

bool StackEmpty(char S[], int top)
{
	return (top == -1);
}

void Push(char S[], int& top, int len, char in_chr)
{
	if (StackFull(S, top, len))
		return; //error - overflow
	top++;
	S[top] = in_chr;
}

char Pop(char S[], int& top)
{
	if (StackEmpty(S, top))
		return ' '; //error - underflow
	char result = S[top];
	top--;
	return result;
}


int main()
{
	//use const

	//Define Stack
	char S[10];
	int top = -1;
	int len = 10;
	char c ;
	bool res1 = StackEmpty(S, top);
	/*
	for (int i = 0;i < 5;i++) {
		scanf_s("%c", &c);
		Push(S, top, len, c);
		top++;
	}
	printf("%d", c);
	*/
	Push(S, top, len, 'a');
	top++;
	Push(S, top, len, 'b');
	top++;
	Push(S, top, len, 'c');
	top++;
	Push(S, top, len, 'd');
	top++;
	Push(S, top, len, 'i');
	
	for (int i = 0;i < 5;i++) {
		char chr = Pop(S, top);
		top--;
		printf("%c", chr);
	} 

	bool res2 = StackEmpty(S, top);

	if (res1 && !res2)
		printf("all is good");
}













/*



for (int i = 0; i < n; i++)
{
	for (int j = 1; j < n; j *= 2)
	{
		SomeAction();
	}
}


for (int j = 1; j < n; j *= 2)
{
	SomeAction();
}













for (int i = 0; i < n; i++)
{
	for (int j = 0; j < i; j++)
	{
		SomeAction();
	}
}

*/