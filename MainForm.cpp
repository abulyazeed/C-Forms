#include "MainForm.h"
using namespace EmptytOne;

MyOperation EmptytOne::resolveOperation(String^ input)
{
	if (input->Equals("+"))
	{
		return MyOperation::plus;
	}
	else if (input->Equals("-"))
	{
return MyOperation::minus;
	}
	else if (input->Equals("*"))
	{
return MyOperation::minus;
	}
	else
	{
		return MyOperation::devide;
	}
	return MyOperation();
}
