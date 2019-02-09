#pragma once

void Driver()
{
#ifdef UI
		RunUserInterface();
#endif 

	do
	{
		DisplayHeader();
	} while (UserChoice(PromptUser()) != -1);
	return;
}