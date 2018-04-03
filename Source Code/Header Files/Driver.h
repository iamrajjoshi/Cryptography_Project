#pragma once
void Driver()
{
	RunUserInterface();
	while (true)
	{
		system("CLS");
		DisplayHeader();

		cout << "     Encode or Decode or Quit (Type the command): ";
		cin >> entry;

		if (entry == "QUIT" || entry == "q" || entry == "Q" || entry == "quit")
		{
			cout << "     Bye!" << endl << "     ";
			break;
		}

		else if (entry == "ENCODE" || entry == "E" || entry == "e" || entry == "encode")
			RunEncrypt();

		else if (entry == "DECODE" || entry == "D" || entry == "d" || entry == "decode")
			RunDecrypt();

		else
			cout << "     Please enter a valid entry." << endl;

		cout << "     ";
		system("pause");
	}
	return;
}