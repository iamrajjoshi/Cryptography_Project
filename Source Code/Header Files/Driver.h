#pragma once

void Driver()
{
	//sRunUserInterface();
	do
	{
		DisplayHeader();
	} while (UserChoice(PromptUser()) != -1);
	return;
}