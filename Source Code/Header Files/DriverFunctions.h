#pragma once

void RunUserInterface()
{
#ifdef UI
	PlaySound(TEXT("Avengers.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); // background music
#endif
	EncryptionUI();
	return;
}

string PromptUser()
{
	string entry;
	cout << "     Encode or Decode or Quit (Type the command): ";
	cin >> entry;
	return entry;
}

int UserChoice(string entry)
{
	if (entry == "QUIT" || entry == "q" || entry == "Q" || entry == "quit")
	{
		cout << "     Bye!" << endl << "     ";
		return -1;
	}

	else if (entry == "ENCODE" || entry == "E" || entry == "e" || entry == "encode")
		RunEncrypt();

	else if (entry == "DECODE" || entry == "D" || entry == "d" || entry == "decode")
		RunDecrypt();

	else
		cout << "     Please enter a valid entry..." << endl;

	cout << "     ";
	system("pause");
	return 0;
}